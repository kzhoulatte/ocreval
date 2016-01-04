#!/usr/bin/env python
# coding: UTF-8

# Copyright 2016 Eddie Antonio Santos <easantos@ualberta.ca>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""
Parses WordBreakProperty.txt and generates a binary search table as a C header
file. Note! This header file must be included only ONCE in only ONE
translation unit (i.e. C file).
"""

import os
import sys
import gzip

PROLOGUE = r'''
/* AUTOGENERATED FILE! DO NOT MODIFY.
 * See Supplement/generate_word_break.py */
'''.lstrip()

STRUCT_DEF = r'''
typedef struct {
    Charvalue start, end;
    wb_property value;
} wb_range;
'''.lstrip()

ENUM_TEMP = r'''
typedef enum {
    %s
} %s;
'''.lstrip()

TABLE_TEMP = r'''
static const wb_range WORD_BREAK_PROPERTY[] = {
    %s
};
'''.lstrip()

CATEGORY_NAMES = r'''
Other
CR
LF
Newline
Extend
Regional_Indicator
Format
Katakana
Hebrew_Letter
ALetter
Single_Quote
Double_Quote
MidNumLet
MidLetter
MidNum
Numeric
ExtendNumLet
sot
eot
'''.strip().split()

def open_word_break_file():
    filename = 'WordBreakProperty.txt.gz'
    path = os.path.join(os.path.dirname(__file__), filename)
    return gzip.open(path, 'rb')

def blank_or_comment(line):
    return line.startswith('#') or len(line.strip()) == 0

def parse_range(text):
    """
    >>> parse_range('11730..11739')
    (71472, 71481)
    >>> parse_range('FF3F')
    (65343, 65343)
    """
    components = text.strip().split('..')[0:2]
    parse_num = lambda string: int(string, base=16)

    if len(components) == 2:
        start, end = map(parse_num, components)
    else:
        assert len(components) == 1
        start = end = parse_num(components[0])

    return (start, end)

def parse_line(line):
    if blank_or_comment(line):
        return None

    cp_range, cat_and_comment = line.split(';')[0:2]
    category = cat_and_comment.split('#')[0].strip()
    cp_range = parse_range(cp_range)

    return cp_range, category

def parse_lines(word_break_file):
    for line in word_break_file:
        contents = parse_line(line)
        if contents is None:
            continue
        else:
            yield contents

def to_c_header(values):
    assert set(category for _, category in values).issubset(set(CATEGORY_NAMES))
    values.sort(key=lambda c: c[0][0])

    yield PROLOGUE
    yield '\n'
    yield generate_enum('wb_property', CATEGORY_NAMES)
    yield '\n'
    yield STRUCT_DEF
    yield '\n'
    yield generate_table(values)

def enum_name(name):
    #return 'WB_' + name
    # I don't think the prefix is necessary...
    return name

def generate_enum(name, categories):
    str_values = ',\n    '.join(enum_name(category) for category in categories)
    return ENUM_TEMP % (str_values, name)

def generate_literal(value):
    cp_range, category = value
    start, end = cp_range
    template = '{0x%06X, 0x%06X, %s}' if end > 0xffff else '{0x%04X, 0x%04X, %s}'
    return template % (start, end, enum_name(category))

def generate_table(values):
    str_values = ',\n    '.join(generate_literal(value) for value in values)
    return TABLE_TEMP % (str_values,)

if __name__ == '__main__':
    with open_word_break_file() as word_break_file:
        big_list = list(parse_lines(word_break_file))

    for text in to_c_header(big_list):
        sys.stdout.write(text)
