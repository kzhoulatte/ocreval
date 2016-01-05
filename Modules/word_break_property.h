/* AUTOGENERATED FILE! DO NOT MODIFY.
 * See Supplement/generate_word_break.py */

typedef enum {
    Other,
    CR,
    LF,
    Newline,
    Extend,
    Regional_Indicator,
    Format,
    Katakana,
    Hebrew_Letter,
    ALetter,
    Single_Quote,
    Double_Quote,
    MidNumLet,
    MidLetter,
    MidNum,
    Numeric,
    ExtendNumLet,
    sot,
    eot
} wb_property;

typedef struct {
    Charvalue start, end;
    wb_property value;
} wb_range;

static const wb_range WORD_BREAK_PROPERTY[] = {
    {0x000A, 0x000A, LF},
    {0x000B, 0x000C, Newline},
    {0x000D, 0x000D, CR},
    {0x0022, 0x0022, Double_Quote},
    {0x0027, 0x0027, Single_Quote},
    {0x002C, 0x002C, MidNum},
    {0x002E, 0x002E, MidNumLet},
    {0x0030, 0x0039, Numeric},
    {0x003A, 0x003A, MidLetter},
    {0x003B, 0x003B, MidNum},
    {0x0041, 0x005A, ALetter},
    {0x005F, 0x005F, ExtendNumLet},
    {0x0061, 0x007A, ALetter},
    {0x0085, 0x0085, Newline},
    {0x00AA, 0x00AA, ALetter},
    {0x00AD, 0x00AD, Format},
    {0x00B5, 0x00B5, ALetter},
    {0x00B7, 0x00B7, MidLetter},
    {0x00BA, 0x00BA, ALetter},
    {0x00C0, 0x00D6, ALetter},
    {0x00D8, 0x00F6, ALetter},
    {0x00F8, 0x01BA, ALetter},
    {0x01BB, 0x01BB, ALetter},
    {0x01BC, 0x01BF, ALetter},
    {0x01C0, 0x01C3, ALetter},
    {0x01C4, 0x0293, ALetter},
    {0x0294, 0x0294, ALetter},
    {0x0295, 0x02AF, ALetter},
    {0x02B0, 0x02C1, ALetter},
    {0x02C6, 0x02D1, ALetter},
    {0x02D7, 0x02D7, MidLetter},
    {0x02E0, 0x02E4, ALetter},
    {0x02EC, 0x02EC, ALetter},
    {0x02EE, 0x02EE, ALetter},
    {0x0300, 0x036F, Extend},
    {0x0370, 0x0373, ALetter},
    {0x0374, 0x0374, ALetter},
    {0x0376, 0x0377, ALetter},
    {0x037A, 0x037A, ALetter},
    {0x037B, 0x037D, ALetter},
    {0x037E, 0x037E, MidNum},
    {0x037F, 0x037F, ALetter},
    {0x0386, 0x0386, ALetter},
    {0x0387, 0x0387, MidLetter},
    {0x0388, 0x038A, ALetter},
    {0x038C, 0x038C, ALetter},
    {0x038E, 0x03A1, ALetter},
    {0x03A3, 0x03F5, ALetter},
    {0x03F7, 0x0481, ALetter},
    {0x0483, 0x0487, Extend},
    {0x0488, 0x0489, Extend},
    {0x048A, 0x052F, ALetter},
    {0x0531, 0x0556, ALetter},
    {0x0559, 0x0559, ALetter},
    {0x0561, 0x0587, ALetter},
    {0x0589, 0x0589, MidNum},
    {0x0591, 0x05BD, Extend},
    {0x05BF, 0x05BF, Extend},
    {0x05C1, 0x05C2, Extend},
    {0x05C4, 0x05C5, Extend},
    {0x05C7, 0x05C7, Extend},
    {0x05D0, 0x05EA, Hebrew_Letter},
    {0x05F0, 0x05F2, Hebrew_Letter},
    {0x05F3, 0x05F3, ALetter},
    {0x05F4, 0x05F4, MidLetter},
    {0x0600, 0x0605, Format},
    {0x060C, 0x060D, MidNum},
    {0x0610, 0x061A, Extend},
    {0x061C, 0x061C, Format},
    {0x0620, 0x063F, ALetter},
    {0x0640, 0x0640, ALetter},
    {0x0641, 0x064A, ALetter},
    {0x064B, 0x065F, Extend},
    {0x0660, 0x0669, Numeric},
    {0x066B, 0x066B, Numeric},
    {0x066C, 0x066C, MidNum},
    {0x066E, 0x066F, ALetter},
    {0x0670, 0x0670, Extend},
    {0x0671, 0x06D3, ALetter},
    {0x06D5, 0x06D5, ALetter},
    {0x06D6, 0x06DC, Extend},
    {0x06DD, 0x06DD, Format},
    {0x06DF, 0x06E4, Extend},
    {0x06E5, 0x06E6, ALetter},
    {0x06E7, 0x06E8, Extend},
    {0x06EA, 0x06ED, Extend},
    {0x06EE, 0x06EF, ALetter},
    {0x06F0, 0x06F9, Numeric},
    {0x06FA, 0x06FC, ALetter},
    {0x06FF, 0x06FF, ALetter},
    {0x070F, 0x070F, Format},
    {0x0710, 0x0710, ALetter},
    {0x0711, 0x0711, Extend},
    {0x0712, 0x072F, ALetter},
    {0x0730, 0x074A, Extend},
    {0x074D, 0x07A5, ALetter},
    {0x07A6, 0x07B0, Extend},
    {0x07B1, 0x07B1, ALetter},
    {0x07C0, 0x07C9, Numeric},
    {0x07CA, 0x07EA, ALetter},
    {0x07EB, 0x07F3, Extend},
    {0x07F4, 0x07F5, ALetter},
    {0x07F8, 0x07F8, MidNum},
    {0x07FA, 0x07FA, ALetter},
    {0x0800, 0x0815, ALetter},
    {0x0816, 0x0819, Extend},
    {0x081A, 0x081A, ALetter},
    {0x081B, 0x0823, Extend},
    {0x0824, 0x0824, ALetter},
    {0x0825, 0x0827, Extend},
    {0x0828, 0x0828, ALetter},
    {0x0829, 0x082D, Extend},
    {0x0840, 0x0858, ALetter},
    {0x0859, 0x085B, Extend},
    {0x08A0, 0x08B4, ALetter},
    {0x08E3, 0x0902, Extend},
    {0x0903, 0x0903, Extend},
    {0x0904, 0x0939, ALetter},
    {0x093A, 0x093A, Extend},
    {0x093B, 0x093B, Extend},
    {0x093C, 0x093C, Extend},
    {0x093D, 0x093D, ALetter},
    {0x093E, 0x0940, Extend},
    {0x0941, 0x0948, Extend},
    {0x0949, 0x094C, Extend},
    {0x094D, 0x094D, Extend},
    {0x094E, 0x094F, Extend},
    {0x0950, 0x0950, ALetter},
    {0x0951, 0x0957, Extend},
    {0x0958, 0x0961, ALetter},
    {0x0962, 0x0963, Extend},
    {0x0966, 0x096F, Numeric},
    {0x0971, 0x0971, ALetter},
    {0x0972, 0x0980, ALetter},
    {0x0981, 0x0981, Extend},
    {0x0982, 0x0983, Extend},
    {0x0985, 0x098C, ALetter},
    {0x098F, 0x0990, ALetter},
    {0x0993, 0x09A8, ALetter},
    {0x09AA, 0x09B0, ALetter},
    {0x09B2, 0x09B2, ALetter},
    {0x09B6, 0x09B9, ALetter},
    {0x09BC, 0x09BC, Extend},
    {0x09BD, 0x09BD, ALetter},
    {0x09BE, 0x09C0, Extend},
    {0x09C1, 0x09C4, Extend},
    {0x09C7, 0x09C8, Extend},
    {0x09CB, 0x09CC, Extend},
    {0x09CD, 0x09CD, Extend},
    {0x09CE, 0x09CE, ALetter},
    {0x09D7, 0x09D7, Extend},
    {0x09DC, 0x09DD, ALetter},
    {0x09DF, 0x09E1, ALetter},
    {0x09E2, 0x09E3, Extend},
    {0x09E6, 0x09EF, Numeric},
    {0x09F0, 0x09F1, ALetter},
    {0x0A01, 0x0A02, Extend},
    {0x0A03, 0x0A03, Extend},
    {0x0A05, 0x0A0A, ALetter},
    {0x0A0F, 0x0A10, ALetter},
    {0x0A13, 0x0A28, ALetter},
    {0x0A2A, 0x0A30, ALetter},
    {0x0A32, 0x0A33, ALetter},
    {0x0A35, 0x0A36, ALetter},
    {0x0A38, 0x0A39, ALetter},
    {0x0A3C, 0x0A3C, Extend},
    {0x0A3E, 0x0A40, Extend},
    {0x0A41, 0x0A42, Extend},
    {0x0A47, 0x0A48, Extend},
    {0x0A4B, 0x0A4D, Extend},
    {0x0A51, 0x0A51, Extend},
    {0x0A59, 0x0A5C, ALetter},
    {0x0A5E, 0x0A5E, ALetter},
    {0x0A66, 0x0A6F, Numeric},
    {0x0A70, 0x0A71, Extend},
    {0x0A72, 0x0A74, ALetter},
    {0x0A75, 0x0A75, Extend},
    {0x0A81, 0x0A82, Extend},
    {0x0A83, 0x0A83, Extend},
    {0x0A85, 0x0A8D, ALetter},
    {0x0A8F, 0x0A91, ALetter},
    {0x0A93, 0x0AA8, ALetter},
    {0x0AAA, 0x0AB0, ALetter},
    {0x0AB2, 0x0AB3, ALetter},
    {0x0AB5, 0x0AB9, ALetter},
    {0x0ABC, 0x0ABC, Extend},
    {0x0ABD, 0x0ABD, ALetter},
    {0x0ABE, 0x0AC0, Extend},
    {0x0AC1, 0x0AC5, Extend},
    {0x0AC7, 0x0AC8, Extend},
    {0x0AC9, 0x0AC9, Extend},
    {0x0ACB, 0x0ACC, Extend},
    {0x0ACD, 0x0ACD, Extend},
    {0x0AD0, 0x0AD0, ALetter},
    {0x0AE0, 0x0AE1, ALetter},
    {0x0AE2, 0x0AE3, Extend},
    {0x0AE6, 0x0AEF, Numeric},
    {0x0AF9, 0x0AF9, ALetter},
    {0x0B01, 0x0B01, Extend},
    {0x0B02, 0x0B03, Extend},
    {0x0B05, 0x0B0C, ALetter},
    {0x0B0F, 0x0B10, ALetter},
    {0x0B13, 0x0B28, ALetter},
    {0x0B2A, 0x0B30, ALetter},
    {0x0B32, 0x0B33, ALetter},
    {0x0B35, 0x0B39, ALetter},
    {0x0B3C, 0x0B3C, Extend},
    {0x0B3D, 0x0B3D, ALetter},
    {0x0B3E, 0x0B3E, Extend},
    {0x0B3F, 0x0B3F, Extend},
    {0x0B40, 0x0B40, Extend},
    {0x0B41, 0x0B44, Extend},
    {0x0B47, 0x0B48, Extend},
    {0x0B4B, 0x0B4C, Extend},
    {0x0B4D, 0x0B4D, Extend},
    {0x0B56, 0x0B56, Extend},
    {0x0B57, 0x0B57, Extend},
    {0x0B5C, 0x0B5D, ALetter},
    {0x0B5F, 0x0B61, ALetter},
    {0x0B62, 0x0B63, Extend},
    {0x0B66, 0x0B6F, Numeric},
    {0x0B71, 0x0B71, ALetter},
    {0x0B82, 0x0B82, Extend},
    {0x0B83, 0x0B83, ALetter},
    {0x0B85, 0x0B8A, ALetter},
    {0x0B8E, 0x0B90, ALetter},
    {0x0B92, 0x0B95, ALetter},
    {0x0B99, 0x0B9A, ALetter},
    {0x0B9C, 0x0B9C, ALetter},
    {0x0B9E, 0x0B9F, ALetter},
    {0x0BA3, 0x0BA4, ALetter},
    {0x0BA8, 0x0BAA, ALetter},
    {0x0BAE, 0x0BB9, ALetter},
    {0x0BBE, 0x0BBF, Extend},
    {0x0BC0, 0x0BC0, Extend},
    {0x0BC1, 0x0BC2, Extend},
    {0x0BC6, 0x0BC8, Extend},
    {0x0BCA, 0x0BCC, Extend},
    {0x0BCD, 0x0BCD, Extend},
    {0x0BD0, 0x0BD0, ALetter},
    {0x0BD7, 0x0BD7, Extend},
    {0x0BE6, 0x0BEF, Numeric},
    {0x0C00, 0x0C00, Extend},
    {0x0C01, 0x0C03, Extend},
    {0x0C05, 0x0C0C, ALetter},
    {0x0C0E, 0x0C10, ALetter},
    {0x0C12, 0x0C28, ALetter},
    {0x0C2A, 0x0C39, ALetter},
    {0x0C3D, 0x0C3D, ALetter},
    {0x0C3E, 0x0C40, Extend},
    {0x0C41, 0x0C44, Extend},
    {0x0C46, 0x0C48, Extend},
    {0x0C4A, 0x0C4D, Extend},
    {0x0C55, 0x0C56, Extend},
    {0x0C58, 0x0C5A, ALetter},
    {0x0C60, 0x0C61, ALetter},
    {0x0C62, 0x0C63, Extend},
    {0x0C66, 0x0C6F, Numeric},
    {0x0C81, 0x0C81, Extend},
    {0x0C82, 0x0C83, Extend},
    {0x0C85, 0x0C8C, ALetter},
    {0x0C8E, 0x0C90, ALetter},
    {0x0C92, 0x0CA8, ALetter},
    {0x0CAA, 0x0CB3, ALetter},
    {0x0CB5, 0x0CB9, ALetter},
    {0x0CBC, 0x0CBC, Extend},
    {0x0CBD, 0x0CBD, ALetter},
    {0x0CBE, 0x0CBE, Extend},
    {0x0CBF, 0x0CBF, Extend},
    {0x0CC0, 0x0CC4, Extend},
    {0x0CC6, 0x0CC6, Extend},
    {0x0CC7, 0x0CC8, Extend},
    {0x0CCA, 0x0CCB, Extend},
    {0x0CCC, 0x0CCD, Extend},
    {0x0CD5, 0x0CD6, Extend},
    {0x0CDE, 0x0CDE, ALetter},
    {0x0CE0, 0x0CE1, ALetter},
    {0x0CE2, 0x0CE3, Extend},
    {0x0CE6, 0x0CEF, Numeric},
    {0x0CF1, 0x0CF2, ALetter},
    {0x0D01, 0x0D01, Extend},
    {0x0D02, 0x0D03, Extend},
    {0x0D05, 0x0D0C, ALetter},
    {0x0D0E, 0x0D10, ALetter},
    {0x0D12, 0x0D3A, ALetter},
    {0x0D3D, 0x0D3D, ALetter},
    {0x0D3E, 0x0D40, Extend},
    {0x0D41, 0x0D44, Extend},
    {0x0D46, 0x0D48, Extend},
    {0x0D4A, 0x0D4C, Extend},
    {0x0D4D, 0x0D4D, Extend},
    {0x0D4E, 0x0D4E, ALetter},
    {0x0D57, 0x0D57, Extend},
    {0x0D5F, 0x0D61, ALetter},
    {0x0D62, 0x0D63, Extend},
    {0x0D66, 0x0D6F, Numeric},
    {0x0D7A, 0x0D7F, ALetter},
    {0x0D82, 0x0D83, Extend},
    {0x0D85, 0x0D96, ALetter},
    {0x0D9A, 0x0DB1, ALetter},
    {0x0DB3, 0x0DBB, ALetter},
    {0x0DBD, 0x0DBD, ALetter},
    {0x0DC0, 0x0DC6, ALetter},
    {0x0DCA, 0x0DCA, Extend},
    {0x0DCF, 0x0DD1, Extend},
    {0x0DD2, 0x0DD4, Extend},
    {0x0DD6, 0x0DD6, Extend},
    {0x0DD8, 0x0DDF, Extend},
    {0x0DE6, 0x0DEF, Numeric},
    {0x0DF2, 0x0DF3, Extend},
    {0x0E31, 0x0E31, Extend},
    {0x0E34, 0x0E3A, Extend},
    {0x0E47, 0x0E4E, Extend},
    {0x0E50, 0x0E59, Numeric},
    {0x0EB1, 0x0EB1, Extend},
    {0x0EB4, 0x0EB9, Extend},
    {0x0EBB, 0x0EBC, Extend},
    {0x0EC8, 0x0ECD, Extend},
    {0x0ED0, 0x0ED9, Numeric},
    {0x0F00, 0x0F00, ALetter},
    {0x0F18, 0x0F19, Extend},
    {0x0F20, 0x0F29, Numeric},
    {0x0F35, 0x0F35, Extend},
    {0x0F37, 0x0F37, Extend},
    {0x0F39, 0x0F39, Extend},
    {0x0F3E, 0x0F3F, Extend},
    {0x0F40, 0x0F47, ALetter},
    {0x0F49, 0x0F6C, ALetter},
    {0x0F71, 0x0F7E, Extend},
    {0x0F7F, 0x0F7F, Extend},
    {0x0F80, 0x0F84, Extend},
    {0x0F86, 0x0F87, Extend},
    {0x0F88, 0x0F8C, ALetter},
    {0x0F8D, 0x0F97, Extend},
    {0x0F99, 0x0FBC, Extend},
    {0x0FC6, 0x0FC6, Extend},
    {0x102B, 0x102C, Extend},
    {0x102D, 0x1030, Extend},
    {0x1031, 0x1031, Extend},
    {0x1032, 0x1037, Extend},
    {0x1038, 0x1038, Extend},
    {0x1039, 0x103A, Extend},
    {0x103B, 0x103C, Extend},
    {0x103D, 0x103E, Extend},
    {0x1040, 0x1049, Numeric},
    {0x1056, 0x1057, Extend},
    {0x1058, 0x1059, Extend},
    {0x105E, 0x1060, Extend},
    {0x1062, 0x1064, Extend},
    {0x1067, 0x106D, Extend},
    {0x1071, 0x1074, Extend},
    {0x1082, 0x1082, Extend},
    {0x1083, 0x1084, Extend},
    {0x1085, 0x1086, Extend},
    {0x1087, 0x108C, Extend},
    {0x108D, 0x108D, Extend},
    {0x108F, 0x108F, Extend},
    {0x1090, 0x1099, Numeric},
    {0x109A, 0x109C, Extend},
    {0x109D, 0x109D, Extend},
    {0x10A0, 0x10C5, ALetter},
    {0x10C7, 0x10C7, ALetter},
    {0x10CD, 0x10CD, ALetter},
    {0x10D0, 0x10FA, ALetter},
    {0x10FC, 0x10FC, ALetter},
    {0x10FD, 0x1248, ALetter},
    {0x124A, 0x124D, ALetter},
    {0x1250, 0x1256, ALetter},
    {0x1258, 0x1258, ALetter},
    {0x125A, 0x125D, ALetter},
    {0x1260, 0x1288, ALetter},
    {0x128A, 0x128D, ALetter},
    {0x1290, 0x12B0, ALetter},
    {0x12B2, 0x12B5, ALetter},
    {0x12B8, 0x12BE, ALetter},
    {0x12C0, 0x12C0, ALetter},
    {0x12C2, 0x12C5, ALetter},
    {0x12C8, 0x12D6, ALetter},
    {0x12D8, 0x1310, ALetter},
    {0x1312, 0x1315, ALetter},
    {0x1318, 0x135A, ALetter},
    {0x135D, 0x135F, Extend},
    {0x1380, 0x138F, ALetter},
    {0x13A0, 0x13F5, ALetter},
    {0x13F8, 0x13FD, ALetter},
    {0x1401, 0x166C, ALetter},
    {0x166F, 0x167F, ALetter},
    {0x1681, 0x169A, ALetter},
    {0x16A0, 0x16EA, ALetter},
    {0x16EE, 0x16F0, ALetter},
    {0x16F1, 0x16F8, ALetter},
    {0x1700, 0x170C, ALetter},
    {0x170E, 0x1711, ALetter},
    {0x1712, 0x1714, Extend},
    {0x1720, 0x1731, ALetter},
    {0x1732, 0x1734, Extend},
    {0x1740, 0x1751, ALetter},
    {0x1752, 0x1753, Extend},
    {0x1760, 0x176C, ALetter},
    {0x176E, 0x1770, ALetter},
    {0x1772, 0x1773, Extend},
    {0x17B4, 0x17B5, Extend},
    {0x17B6, 0x17B6, Extend},
    {0x17B7, 0x17BD, Extend},
    {0x17BE, 0x17C5, Extend},
    {0x17C6, 0x17C6, Extend},
    {0x17C7, 0x17C8, Extend},
    {0x17C9, 0x17D3, Extend},
    {0x17DD, 0x17DD, Extend},
    {0x17E0, 0x17E9, Numeric},
    {0x180B, 0x180D, Extend},
    {0x180E, 0x180E, Format},
    {0x1810, 0x1819, Numeric},
    {0x1820, 0x1842, ALetter},
    {0x1843, 0x1843, ALetter},
    {0x1844, 0x1877, ALetter},
    {0x1880, 0x18A8, ALetter},
    {0x18A9, 0x18A9, Extend},
    {0x18AA, 0x18AA, ALetter},
    {0x18B0, 0x18F5, ALetter},
    {0x1900, 0x191E, ALetter},
    {0x1920, 0x1922, Extend},
    {0x1923, 0x1926, Extend},
    {0x1927, 0x1928, Extend},
    {0x1929, 0x192B, Extend},
    {0x1930, 0x1931, Extend},
    {0x1932, 0x1932, Extend},
    {0x1933, 0x1938, Extend},
    {0x1939, 0x193B, Extend},
    {0x1946, 0x194F, Numeric},
    {0x19D0, 0x19D9, Numeric},
    {0x1A00, 0x1A16, ALetter},
    {0x1A17, 0x1A18, Extend},
    {0x1A19, 0x1A1A, Extend},
    {0x1A1B, 0x1A1B, Extend},
    {0x1A55, 0x1A55, Extend},
    {0x1A56, 0x1A56, Extend},
    {0x1A57, 0x1A57, Extend},
    {0x1A58, 0x1A5E, Extend},
    {0x1A60, 0x1A60, Extend},
    {0x1A61, 0x1A61, Extend},
    {0x1A62, 0x1A62, Extend},
    {0x1A63, 0x1A64, Extend},
    {0x1A65, 0x1A6C, Extend},
    {0x1A6D, 0x1A72, Extend},
    {0x1A73, 0x1A7C, Extend},
    {0x1A7F, 0x1A7F, Extend},
    {0x1A80, 0x1A89, Numeric},
    {0x1A90, 0x1A99, Numeric},
    {0x1AB0, 0x1ABD, Extend},
    {0x1ABE, 0x1ABE, Extend},
    {0x1B00, 0x1B03, Extend},
    {0x1B04, 0x1B04, Extend},
    {0x1B05, 0x1B33, ALetter},
    {0x1B34, 0x1B34, Extend},
    {0x1B35, 0x1B35, Extend},
    {0x1B36, 0x1B3A, Extend},
    {0x1B3B, 0x1B3B, Extend},
    {0x1B3C, 0x1B3C, Extend},
    {0x1B3D, 0x1B41, Extend},
    {0x1B42, 0x1B42, Extend},
    {0x1B43, 0x1B44, Extend},
    {0x1B45, 0x1B4B, ALetter},
    {0x1B50, 0x1B59, Numeric},
    {0x1B6B, 0x1B73, Extend},
    {0x1B80, 0x1B81, Extend},
    {0x1B82, 0x1B82, Extend},
    {0x1B83, 0x1BA0, ALetter},
    {0x1BA1, 0x1BA1, Extend},
    {0x1BA2, 0x1BA5, Extend},
    {0x1BA6, 0x1BA7, Extend},
    {0x1BA8, 0x1BA9, Extend},
    {0x1BAA, 0x1BAA, Extend},
    {0x1BAB, 0x1BAD, Extend},
    {0x1BAE, 0x1BAF, ALetter},
    {0x1BB0, 0x1BB9, Numeric},
    {0x1BBA, 0x1BE5, ALetter},
    {0x1BE6, 0x1BE6, Extend},
    {0x1BE7, 0x1BE7, Extend},
    {0x1BE8, 0x1BE9, Extend},
    {0x1BEA, 0x1BEC, Extend},
    {0x1BED, 0x1BED, Extend},
    {0x1BEE, 0x1BEE, Extend},
    {0x1BEF, 0x1BF1, Extend},
    {0x1BF2, 0x1BF3, Extend},
    {0x1C00, 0x1C23, ALetter},
    {0x1C24, 0x1C2B, Extend},
    {0x1C2C, 0x1C33, Extend},
    {0x1C34, 0x1C35, Extend},
    {0x1C36, 0x1C37, Extend},
    {0x1C40, 0x1C49, Numeric},
    {0x1C4D, 0x1C4F, ALetter},
    {0x1C50, 0x1C59, Numeric},
    {0x1C5A, 0x1C77, ALetter},
    {0x1C78, 0x1C7D, ALetter},
    {0x1CD0, 0x1CD2, Extend},
    {0x1CD4, 0x1CE0, Extend},
    {0x1CE1, 0x1CE1, Extend},
    {0x1CE2, 0x1CE8, Extend},
    {0x1CE9, 0x1CEC, ALetter},
    {0x1CED, 0x1CED, Extend},
    {0x1CEE, 0x1CF1, ALetter},
    {0x1CF2, 0x1CF3, Extend},
    {0x1CF4, 0x1CF4, Extend},
    {0x1CF5, 0x1CF6, ALetter},
    {0x1CF8, 0x1CF9, Extend},
    {0x1D00, 0x1D2B, ALetter},
    {0x1D2C, 0x1D6A, ALetter},
    {0x1D6B, 0x1D77, ALetter},
    {0x1D78, 0x1D78, ALetter},
    {0x1D79, 0x1D9A, ALetter},
    {0x1D9B, 0x1DBF, ALetter},
    {0x1DC0, 0x1DF5, Extend},
    {0x1DFC, 0x1DFF, Extend},
    {0x1E00, 0x1F15, ALetter},
    {0x1F18, 0x1F1D, ALetter},
    {0x1F20, 0x1F45, ALetter},
    {0x1F48, 0x1F4D, ALetter},
    {0x1F50, 0x1F57, ALetter},
    {0x1F59, 0x1F59, ALetter},
    {0x1F5B, 0x1F5B, ALetter},
    {0x1F5D, 0x1F5D, ALetter},
    {0x1F5F, 0x1F7D, ALetter},
    {0x1F80, 0x1FB4, ALetter},
    {0x1FB6, 0x1FBC, ALetter},
    {0x1FBE, 0x1FBE, ALetter},
    {0x1FC2, 0x1FC4, ALetter},
    {0x1FC6, 0x1FCC, ALetter},
    {0x1FD0, 0x1FD3, ALetter},
    {0x1FD6, 0x1FDB, ALetter},
    {0x1FE0, 0x1FEC, ALetter},
    {0x1FF2, 0x1FF4, ALetter},
    {0x1FF6, 0x1FFC, ALetter},
    {0x200C, 0x200D, Extend},
    {0x200E, 0x200F, Format},
    {0x2018, 0x2018, MidNumLet},
    {0x2019, 0x2019, MidNumLet},
    {0x2024, 0x2024, MidNumLet},
    {0x2027, 0x2027, MidLetter},
    {0x2028, 0x2028, Newline},
    {0x2029, 0x2029, Newline},
    {0x202A, 0x202E, Format},
    {0x203F, 0x2040, ExtendNumLet},
    {0x2044, 0x2044, MidNum},
    {0x2054, 0x2054, ExtendNumLet},
    {0x2060, 0x2064, Format},
    {0x2066, 0x206F, Format},
    {0x2071, 0x2071, ALetter},
    {0x207F, 0x207F, ALetter},
    {0x2090, 0x209C, ALetter},
    {0x20D0, 0x20DC, Extend},
    {0x20DD, 0x20E0, Extend},
    {0x20E1, 0x20E1, Extend},
    {0x20E2, 0x20E4, Extend},
    {0x20E5, 0x20F0, Extend},
    {0x2102, 0x2102, ALetter},
    {0x2107, 0x2107, ALetter},
    {0x210A, 0x2113, ALetter},
    {0x2115, 0x2115, ALetter},
    {0x2119, 0x211D, ALetter},
    {0x2124, 0x2124, ALetter},
    {0x2126, 0x2126, ALetter},
    {0x2128, 0x2128, ALetter},
    {0x212A, 0x212D, ALetter},
    {0x212F, 0x2134, ALetter},
    {0x2135, 0x2138, ALetter},
    {0x2139, 0x2139, ALetter},
    {0x213C, 0x213F, ALetter},
    {0x2145, 0x2149, ALetter},
    {0x214E, 0x214E, ALetter},
    {0x2160, 0x2182, ALetter},
    {0x2183, 0x2184, ALetter},
    {0x2185, 0x2188, ALetter},
    {0x24B6, 0x24E9, ALetter},
    {0x2C00, 0x2C2E, ALetter},
    {0x2C30, 0x2C5E, ALetter},
    {0x2C60, 0x2C7B, ALetter},
    {0x2C7C, 0x2C7D, ALetter},
    {0x2C7E, 0x2CE4, ALetter},
    {0x2CEB, 0x2CEE, ALetter},
    {0x2CEF, 0x2CF1, Extend},
    {0x2CF2, 0x2CF3, ALetter},
    {0x2D00, 0x2D25, ALetter},
    {0x2D27, 0x2D27, ALetter},
    {0x2D2D, 0x2D2D, ALetter},
    {0x2D30, 0x2D67, ALetter},
    {0x2D6F, 0x2D6F, ALetter},
    {0x2D7F, 0x2D7F, Extend},
    {0x2D80, 0x2D96, ALetter},
    {0x2DA0, 0x2DA6, ALetter},
    {0x2DA8, 0x2DAE, ALetter},
    {0x2DB0, 0x2DB6, ALetter},
    {0x2DB8, 0x2DBE, ALetter},
    {0x2DC0, 0x2DC6, ALetter},
    {0x2DC8, 0x2DCE, ALetter},
    {0x2DD0, 0x2DD6, ALetter},
    {0x2DD8, 0x2DDE, ALetter},
    {0x2DE0, 0x2DFF, Extend},
    {0x2E2F, 0x2E2F, ALetter},
    {0x3005, 0x3005, ALetter},
    {0x302A, 0x302D, Extend},
    {0x302E, 0x302F, Extend},
    {0x3031, 0x3035, Katakana},
    {0x303B, 0x303B, ALetter},
    {0x303C, 0x303C, ALetter},
    {0x3099, 0x309A, Extend},
    {0x309B, 0x309C, Katakana},
    {0x30A0, 0x30A0, Katakana},
    {0x30A1, 0x30FA, Katakana},
    {0x30FC, 0x30FE, Katakana},
    {0x30FF, 0x30FF, Katakana},
    {0x3105, 0x312D, ALetter},
    {0x3131, 0x318E, ALetter},
    {0x31A0, 0x31BA, ALetter},
    {0x31F0, 0x31FF, Katakana},
    {0x32D0, 0x32FE, Katakana},
    {0x3300, 0x3357, Katakana},
    {0xA000, 0xA014, ALetter},
    {0xA015, 0xA015, ALetter},
    {0xA016, 0xA48C, ALetter},
    {0xA4D0, 0xA4F7, ALetter},
    {0xA4F8, 0xA4FD, ALetter},
    {0xA500, 0xA60B, ALetter},
    {0xA60C, 0xA60C, ALetter},
    {0xA610, 0xA61F, ALetter},
    {0xA620, 0xA629, Numeric},
    {0xA62A, 0xA62B, ALetter},
    {0xA640, 0xA66D, ALetter},
    {0xA66E, 0xA66E, ALetter},
    {0xA66F, 0xA66F, Extend},
    {0xA670, 0xA672, Extend},
    {0xA674, 0xA67D, Extend},
    {0xA67F, 0xA67F, ALetter},
    {0xA680, 0xA69B, ALetter},
    {0xA69C, 0xA69D, ALetter},
    {0xA69E, 0xA69F, Extend},
    {0xA6A0, 0xA6E5, ALetter},
    {0xA6E6, 0xA6EF, ALetter},
    {0xA6F0, 0xA6F1, Extend},
    {0xA717, 0xA71F, ALetter},
    {0xA722, 0xA76F, ALetter},
    {0xA770, 0xA770, ALetter},
    {0xA771, 0xA787, ALetter},
    {0xA788, 0xA788, ALetter},
    {0xA78B, 0xA78E, ALetter},
    {0xA78F, 0xA78F, ALetter},
    {0xA790, 0xA7AD, ALetter},
    {0xA7B0, 0xA7B7, ALetter},
    {0xA7F7, 0xA7F7, ALetter},
    {0xA7F8, 0xA7F9, ALetter},
    {0xA7FA, 0xA7FA, ALetter},
    {0xA7FB, 0xA801, ALetter},
    {0xA802, 0xA802, Extend},
    {0xA803, 0xA805, ALetter},
    {0xA806, 0xA806, Extend},
    {0xA807, 0xA80A, ALetter},
    {0xA80B, 0xA80B, Extend},
    {0xA80C, 0xA822, ALetter},
    {0xA823, 0xA824, Extend},
    {0xA825, 0xA826, Extend},
    {0xA827, 0xA827, Extend},
    {0xA840, 0xA873, ALetter},
    {0xA880, 0xA881, Extend},
    {0xA882, 0xA8B3, ALetter},
    {0xA8B4, 0xA8C3, Extend},
    {0xA8C4, 0xA8C4, Extend},
    {0xA8D0, 0xA8D9, Numeric},
    {0xA8E0, 0xA8F1, Extend},
    {0xA8F2, 0xA8F7, ALetter},
    {0xA8FB, 0xA8FB, ALetter},
    {0xA8FD, 0xA8FD, ALetter},
    {0xA900, 0xA909, Numeric},
    {0xA90A, 0xA925, ALetter},
    {0xA926, 0xA92D, Extend},
    {0xA930, 0xA946, ALetter},
    {0xA947, 0xA951, Extend},
    {0xA952, 0xA953, Extend},
    {0xA960, 0xA97C, ALetter},
    {0xA980, 0xA982, Extend},
    {0xA983, 0xA983, Extend},
    {0xA984, 0xA9B2, ALetter},
    {0xA9B3, 0xA9B3, Extend},
    {0xA9B4, 0xA9B5, Extend},
    {0xA9B6, 0xA9B9, Extend},
    {0xA9BA, 0xA9BB, Extend},
    {0xA9BC, 0xA9BC, Extend},
    {0xA9BD, 0xA9C0, Extend},
    {0xA9CF, 0xA9CF, ALetter},
    {0xA9D0, 0xA9D9, Numeric},
    {0xA9E5, 0xA9E5, Extend},
    {0xA9F0, 0xA9F9, Numeric},
    {0xAA00, 0xAA28, ALetter},
    {0xAA29, 0xAA2E, Extend},
    {0xAA2F, 0xAA30, Extend},
    {0xAA31, 0xAA32, Extend},
    {0xAA33, 0xAA34, Extend},
    {0xAA35, 0xAA36, Extend},
    {0xAA40, 0xAA42, ALetter},
    {0xAA43, 0xAA43, Extend},
    {0xAA44, 0xAA4B, ALetter},
    {0xAA4C, 0xAA4C, Extend},
    {0xAA4D, 0xAA4D, Extend},
    {0xAA50, 0xAA59, Numeric},
    {0xAA7B, 0xAA7B, Extend},
    {0xAA7C, 0xAA7C, Extend},
    {0xAA7D, 0xAA7D, Extend},
    {0xAAB0, 0xAAB0, Extend},
    {0xAAB2, 0xAAB4, Extend},
    {0xAAB7, 0xAAB8, Extend},
    {0xAABE, 0xAABF, Extend},
    {0xAAC1, 0xAAC1, Extend},
    {0xAAE0, 0xAAEA, ALetter},
    {0xAAEB, 0xAAEB, Extend},
    {0xAAEC, 0xAAED, Extend},
    {0xAAEE, 0xAAEF, Extend},
    {0xAAF2, 0xAAF2, ALetter},
    {0xAAF3, 0xAAF4, ALetter},
    {0xAAF5, 0xAAF5, Extend},
    {0xAAF6, 0xAAF6, Extend},
    {0xAB01, 0xAB06, ALetter},
    {0xAB09, 0xAB0E, ALetter},
    {0xAB11, 0xAB16, ALetter},
    {0xAB20, 0xAB26, ALetter},
    {0xAB28, 0xAB2E, ALetter},
    {0xAB30, 0xAB5A, ALetter},
    {0xAB5C, 0xAB5F, ALetter},
    {0xAB60, 0xAB65, ALetter},
    {0xAB70, 0xABBF, ALetter},
    {0xABC0, 0xABE2, ALetter},
    {0xABE3, 0xABE4, Extend},
    {0xABE5, 0xABE5, Extend},
    {0xABE6, 0xABE7, Extend},
    {0xABE8, 0xABE8, Extend},
    {0xABE9, 0xABEA, Extend},
    {0xABEC, 0xABEC, Extend},
    {0xABED, 0xABED, Extend},
    {0xABF0, 0xABF9, Numeric},
    {0xAC00, 0xD7A3, ALetter},
    {0xD7B0, 0xD7C6, ALetter},
    {0xD7CB, 0xD7FB, ALetter},
    {0xFB00, 0xFB06, ALetter},
    {0xFB13, 0xFB17, ALetter},
    {0xFB1D, 0xFB1D, Hebrew_Letter},
    {0xFB1E, 0xFB1E, Extend},
    {0xFB1F, 0xFB28, Hebrew_Letter},
    {0xFB2A, 0xFB36, Hebrew_Letter},
    {0xFB38, 0xFB3C, Hebrew_Letter},
    {0xFB3E, 0xFB3E, Hebrew_Letter},
    {0xFB40, 0xFB41, Hebrew_Letter},
    {0xFB43, 0xFB44, Hebrew_Letter},
    {0xFB46, 0xFB4F, Hebrew_Letter},
    {0xFB50, 0xFBB1, ALetter},
    {0xFBD3, 0xFD3D, ALetter},
    {0xFD50, 0xFD8F, ALetter},
    {0xFD92, 0xFDC7, ALetter},
    {0xFDF0, 0xFDFB, ALetter},
    {0xFE00, 0xFE0F, Extend},
    {0xFE10, 0xFE10, MidNum},
    {0xFE13, 0xFE13, MidLetter},
    {0xFE14, 0xFE14, MidNum},
    {0xFE20, 0xFE2F, Extend},
    {0xFE33, 0xFE34, ExtendNumLet},
    {0xFE4D, 0xFE4F, ExtendNumLet},
    {0xFE50, 0xFE50, MidNum},
    {0xFE52, 0xFE52, MidNumLet},
    {0xFE54, 0xFE54, MidNum},
    {0xFE55, 0xFE55, MidLetter},
    {0xFE70, 0xFE74, ALetter},
    {0xFE76, 0xFEFC, ALetter},
    {0xFEFF, 0xFEFF, Format},
    {0xFF07, 0xFF07, MidNumLet},
    {0xFF0C, 0xFF0C, MidNum},
    {0xFF0E, 0xFF0E, MidNumLet},
    {0xFF1A, 0xFF1A, MidLetter},
    {0xFF1B, 0xFF1B, MidNum},
    {0xFF21, 0xFF3A, ALetter},
    {0xFF3F, 0xFF3F, ExtendNumLet},
    {0xFF41, 0xFF5A, ALetter},
    {0xFF66, 0xFF6F, Katakana},
    {0xFF70, 0xFF70, Katakana},
    {0xFF71, 0xFF9D, Katakana},
    {0xFF9E, 0xFF9F, Extend},
    {0xFFA0, 0xFFBE, ALetter},
    {0xFFC2, 0xFFC7, ALetter},
    {0xFFCA, 0xFFCF, ALetter},
    {0xFFD2, 0xFFD7, ALetter},
    {0xFFDA, 0xFFDC, ALetter},
    {0xFFF9, 0xFFFB, Format},
    {0x010000, 0x01000B, ALetter},
    {0x01000D, 0x010026, ALetter},
    {0x010028, 0x01003A, ALetter},
    {0x01003C, 0x01003D, ALetter},
    {0x01003F, 0x01004D, ALetter},
    {0x010050, 0x01005D, ALetter},
    {0x010080, 0x0100FA, ALetter},
    {0x010140, 0x010174, ALetter},
    {0x0101FD, 0x0101FD, Extend},
    {0x010280, 0x01029C, ALetter},
    {0x0102A0, 0x0102D0, ALetter},
    {0x0102E0, 0x0102E0, Extend},
    {0x010300, 0x01031F, ALetter},
    {0x010330, 0x010340, ALetter},
    {0x010341, 0x010341, ALetter},
    {0x010342, 0x010349, ALetter},
    {0x01034A, 0x01034A, ALetter},
    {0x010350, 0x010375, ALetter},
    {0x010376, 0x01037A, Extend},
    {0x010380, 0x01039D, ALetter},
    {0x0103A0, 0x0103C3, ALetter},
    {0x0103C8, 0x0103CF, ALetter},
    {0x0103D1, 0x0103D5, ALetter},
    {0x010400, 0x01044F, ALetter},
    {0x010450, 0x01049D, ALetter},
    {0x0104A0, 0x0104A9, Numeric},
    {0x010500, 0x010527, ALetter},
    {0x010530, 0x010563, ALetter},
    {0x010600, 0x010736, ALetter},
    {0x010740, 0x010755, ALetter},
    {0x010760, 0x010767, ALetter},
    {0x010800, 0x010805, ALetter},
    {0x010808, 0x010808, ALetter},
    {0x01080A, 0x010835, ALetter},
    {0x010837, 0x010838, ALetter},
    {0x01083C, 0x01083C, ALetter},
    {0x01083F, 0x010855, ALetter},
    {0x010860, 0x010876, ALetter},
    {0x010880, 0x01089E, ALetter},
    {0x0108E0, 0x0108F2, ALetter},
    {0x0108F4, 0x0108F5, ALetter},
    {0x010900, 0x010915, ALetter},
    {0x010920, 0x010939, ALetter},
    {0x010980, 0x0109B7, ALetter},
    {0x0109BE, 0x0109BF, ALetter},
    {0x010A00, 0x010A00, ALetter},
    {0x010A01, 0x010A03, Extend},
    {0x010A05, 0x010A06, Extend},
    {0x010A0C, 0x010A0F, Extend},
    {0x010A10, 0x010A13, ALetter},
    {0x010A15, 0x010A17, ALetter},
    {0x010A19, 0x010A33, ALetter},
    {0x010A38, 0x010A3A, Extend},
    {0x010A3F, 0x010A3F, Extend},
    {0x010A60, 0x010A7C, ALetter},
    {0x010A80, 0x010A9C, ALetter},
    {0x010AC0, 0x010AC7, ALetter},
    {0x010AC9, 0x010AE4, ALetter},
    {0x010AE5, 0x010AE6, Extend},
    {0x010B00, 0x010B35, ALetter},
    {0x010B40, 0x010B55, ALetter},
    {0x010B60, 0x010B72, ALetter},
    {0x010B80, 0x010B91, ALetter},
    {0x010C00, 0x010C48, ALetter},
    {0x010C80, 0x010CB2, ALetter},
    {0x010CC0, 0x010CF2, ALetter},
    {0x011000, 0x011000, Extend},
    {0x011001, 0x011001, Extend},
    {0x011002, 0x011002, Extend},
    {0x011003, 0x011037, ALetter},
    {0x011038, 0x011046, Extend},
    {0x011066, 0x01106F, Numeric},
    {0x01107F, 0x011081, Extend},
    {0x011082, 0x011082, Extend},
    {0x011083, 0x0110AF, ALetter},
    {0x0110B0, 0x0110B2, Extend},
    {0x0110B3, 0x0110B6, Extend},
    {0x0110B7, 0x0110B8, Extend},
    {0x0110B9, 0x0110BA, Extend},
    {0x0110BD, 0x0110BD, Format},
    {0x0110D0, 0x0110E8, ALetter},
    {0x0110F0, 0x0110F9, Numeric},
    {0x011100, 0x011102, Extend},
    {0x011103, 0x011126, ALetter},
    {0x011127, 0x01112B, Extend},
    {0x01112C, 0x01112C, Extend},
    {0x01112D, 0x011134, Extend},
    {0x011136, 0x01113F, Numeric},
    {0x011150, 0x011172, ALetter},
    {0x011173, 0x011173, Extend},
    {0x011176, 0x011176, ALetter},
    {0x011180, 0x011181, Extend},
    {0x011182, 0x011182, Extend},
    {0x011183, 0x0111B2, ALetter},
    {0x0111B3, 0x0111B5, Extend},
    {0x0111B6, 0x0111BE, Extend},
    {0x0111BF, 0x0111C0, Extend},
    {0x0111C1, 0x0111C4, ALetter},
    {0x0111CA, 0x0111CC, Extend},
    {0x0111D0, 0x0111D9, Numeric},
    {0x0111DA, 0x0111DA, ALetter},
    {0x0111DC, 0x0111DC, ALetter},
    {0x011200, 0x011211, ALetter},
    {0x011213, 0x01122B, ALetter},
    {0x01122C, 0x01122E, Extend},
    {0x01122F, 0x011231, Extend},
    {0x011232, 0x011233, Extend},
    {0x011234, 0x011234, Extend},
    {0x011235, 0x011235, Extend},
    {0x011236, 0x011237, Extend},
    {0x011280, 0x011286, ALetter},
    {0x011288, 0x011288, ALetter},
    {0x01128A, 0x01128D, ALetter},
    {0x01128F, 0x01129D, ALetter},
    {0x01129F, 0x0112A8, ALetter},
    {0x0112B0, 0x0112DE, ALetter},
    {0x0112DF, 0x0112DF, Extend},
    {0x0112E0, 0x0112E2, Extend},
    {0x0112E3, 0x0112EA, Extend},
    {0x0112F0, 0x0112F9, Numeric},
    {0x011300, 0x011301, Extend},
    {0x011302, 0x011303, Extend},
    {0x011305, 0x01130C, ALetter},
    {0x01130F, 0x011310, ALetter},
    {0x011313, 0x011328, ALetter},
    {0x01132A, 0x011330, ALetter},
    {0x011332, 0x011333, ALetter},
    {0x011335, 0x011339, ALetter},
    {0x01133C, 0x01133C, Extend},
    {0x01133D, 0x01133D, ALetter},
    {0x01133E, 0x01133F, Extend},
    {0x011340, 0x011340, Extend},
    {0x011341, 0x011344, Extend},
    {0x011347, 0x011348, Extend},
    {0x01134B, 0x01134D, Extend},
    {0x011350, 0x011350, ALetter},
    {0x011357, 0x011357, Extend},
    {0x01135D, 0x011361, ALetter},
    {0x011362, 0x011363, Extend},
    {0x011366, 0x01136C, Extend},
    {0x011370, 0x011374, Extend},
    {0x011480, 0x0114AF, ALetter},
    {0x0114B0, 0x0114B2, Extend},
    {0x0114B3, 0x0114B8, Extend},
    {0x0114B9, 0x0114B9, Extend},
    {0x0114BA, 0x0114BA, Extend},
    {0x0114BB, 0x0114BE, Extend},
    {0x0114BF, 0x0114C0, Extend},
    {0x0114C1, 0x0114C1, Extend},
    {0x0114C2, 0x0114C3, Extend},
    {0x0114C4, 0x0114C5, ALetter},
    {0x0114C7, 0x0114C7, ALetter},
    {0x0114D0, 0x0114D9, Numeric},
    {0x011580, 0x0115AE, ALetter},
    {0x0115AF, 0x0115B1, Extend},
    {0x0115B2, 0x0115B5, Extend},
    {0x0115B8, 0x0115BB, Extend},
    {0x0115BC, 0x0115BD, Extend},
    {0x0115BE, 0x0115BE, Extend},
    {0x0115BF, 0x0115C0, Extend},
    {0x0115D8, 0x0115DB, ALetter},
    {0x0115DC, 0x0115DD, Extend},
    {0x011600, 0x01162F, ALetter},
    {0x011630, 0x011632, Extend},
    {0x011633, 0x01163A, Extend},
    {0x01163B, 0x01163C, Extend},
    {0x01163D, 0x01163D, Extend},
    {0x01163E, 0x01163E, Extend},
    {0x01163F, 0x011640, Extend},
    {0x011644, 0x011644, ALetter},
    {0x011650, 0x011659, Numeric},
    {0x011680, 0x0116AA, ALetter},
    {0x0116AB, 0x0116AB, Extend},
    {0x0116AC, 0x0116AC, Extend},
    {0x0116AD, 0x0116AD, Extend},
    {0x0116AE, 0x0116AF, Extend},
    {0x0116B0, 0x0116B5, Extend},
    {0x0116B6, 0x0116B6, Extend},
    {0x0116B7, 0x0116B7, Extend},
    {0x0116C0, 0x0116C9, Numeric},
    {0x01171D, 0x01171F, Extend},
    {0x011720, 0x011721, Extend},
    {0x011722, 0x011725, Extend},
    {0x011726, 0x011726, Extend},
    {0x011727, 0x01172B, Extend},
    {0x011730, 0x011739, Numeric},
    {0x0118A0, 0x0118DF, ALetter},
    {0x0118E0, 0x0118E9, Numeric},
    {0x0118FF, 0x0118FF, ALetter},
    {0x011AC0, 0x011AF8, ALetter},
    {0x012000, 0x012399, ALetter},
    {0x012400, 0x01246E, ALetter},
    {0x012480, 0x012543, ALetter},
    {0x013000, 0x01342E, ALetter},
    {0x014400, 0x014646, ALetter},
    {0x016800, 0x016A38, ALetter},
    {0x016A40, 0x016A5E, ALetter},
    {0x016A60, 0x016A69, Numeric},
    {0x016AD0, 0x016AED, ALetter},
    {0x016AF0, 0x016AF4, Extend},
    {0x016B00, 0x016B2F, ALetter},
    {0x016B30, 0x016B36, Extend},
    {0x016B40, 0x016B43, ALetter},
    {0x016B50, 0x016B59, Numeric},
    {0x016B63, 0x016B77, ALetter},
    {0x016B7D, 0x016B8F, ALetter},
    {0x016F00, 0x016F44, ALetter},
    {0x016F50, 0x016F50, ALetter},
    {0x016F51, 0x016F7E, Extend},
    {0x016F8F, 0x016F92, Extend},
    {0x016F93, 0x016F9F, ALetter},
    {0x01B000, 0x01B000, Katakana},
    {0x01BC00, 0x01BC6A, ALetter},
    {0x01BC70, 0x01BC7C, ALetter},
    {0x01BC80, 0x01BC88, ALetter},
    {0x01BC90, 0x01BC99, ALetter},
    {0x01BC9D, 0x01BC9E, Extend},
    {0x01BCA0, 0x01BCA3, Format},
    {0x01D165, 0x01D166, Extend},
    {0x01D167, 0x01D169, Extend},
    {0x01D16D, 0x01D172, Extend},
    {0x01D173, 0x01D17A, Format},
    {0x01D17B, 0x01D182, Extend},
    {0x01D185, 0x01D18B, Extend},
    {0x01D1AA, 0x01D1AD, Extend},
    {0x01D242, 0x01D244, Extend},
    {0x01D400, 0x01D454, ALetter},
    {0x01D456, 0x01D49C, ALetter},
    {0x01D49E, 0x01D49F, ALetter},
    {0x01D4A2, 0x01D4A2, ALetter},
    {0x01D4A5, 0x01D4A6, ALetter},
    {0x01D4A9, 0x01D4AC, ALetter},
    {0x01D4AE, 0x01D4B9, ALetter},
    {0x01D4BB, 0x01D4BB, ALetter},
    {0x01D4BD, 0x01D4C3, ALetter},
    {0x01D4C5, 0x01D505, ALetter},
    {0x01D507, 0x01D50A, ALetter},
    {0x01D50D, 0x01D514, ALetter},
    {0x01D516, 0x01D51C, ALetter},
    {0x01D51E, 0x01D539, ALetter},
    {0x01D53B, 0x01D53E, ALetter},
    {0x01D540, 0x01D544, ALetter},
    {0x01D546, 0x01D546, ALetter},
    {0x01D54A, 0x01D550, ALetter},
    {0x01D552, 0x01D6A5, ALetter},
    {0x01D6A8, 0x01D6C0, ALetter},
    {0x01D6C2, 0x01D6DA, ALetter},
    {0x01D6DC, 0x01D6FA, ALetter},
    {0x01D6FC, 0x01D714, ALetter},
    {0x01D716, 0x01D734, ALetter},
    {0x01D736, 0x01D74E, ALetter},
    {0x01D750, 0x01D76E, ALetter},
    {0x01D770, 0x01D788, ALetter},
    {0x01D78A, 0x01D7A8, ALetter},
    {0x01D7AA, 0x01D7C2, ALetter},
    {0x01D7C4, 0x01D7CB, ALetter},
    {0x01D7CE, 0x01D7FF, Numeric},
    {0x01DA00, 0x01DA36, Extend},
    {0x01DA3B, 0x01DA6C, Extend},
    {0x01DA75, 0x01DA75, Extend},
    {0x01DA84, 0x01DA84, Extend},
    {0x01DA9B, 0x01DA9F, Extend},
    {0x01DAA1, 0x01DAAF, Extend},
    {0x01E800, 0x01E8C4, ALetter},
    {0x01E8D0, 0x01E8D6, Extend},
    {0x01EE00, 0x01EE03, ALetter},
    {0x01EE05, 0x01EE1F, ALetter},
    {0x01EE21, 0x01EE22, ALetter},
    {0x01EE24, 0x01EE24, ALetter},
    {0x01EE27, 0x01EE27, ALetter},
    {0x01EE29, 0x01EE32, ALetter},
    {0x01EE34, 0x01EE37, ALetter},
    {0x01EE39, 0x01EE39, ALetter},
    {0x01EE3B, 0x01EE3B, ALetter},
    {0x01EE42, 0x01EE42, ALetter},
    {0x01EE47, 0x01EE47, ALetter},
    {0x01EE49, 0x01EE49, ALetter},
    {0x01EE4B, 0x01EE4B, ALetter},
    {0x01EE4D, 0x01EE4F, ALetter},
    {0x01EE51, 0x01EE52, ALetter},
    {0x01EE54, 0x01EE54, ALetter},
    {0x01EE57, 0x01EE57, ALetter},
    {0x01EE59, 0x01EE59, ALetter},
    {0x01EE5B, 0x01EE5B, ALetter},
    {0x01EE5D, 0x01EE5D, ALetter},
    {0x01EE5F, 0x01EE5F, ALetter},
    {0x01EE61, 0x01EE62, ALetter},
    {0x01EE64, 0x01EE64, ALetter},
    {0x01EE67, 0x01EE6A, ALetter},
    {0x01EE6C, 0x01EE72, ALetter},
    {0x01EE74, 0x01EE77, ALetter},
    {0x01EE79, 0x01EE7C, ALetter},
    {0x01EE7E, 0x01EE7E, ALetter},
    {0x01EE80, 0x01EE89, ALetter},
    {0x01EE8B, 0x01EE9B, ALetter},
    {0x01EEA1, 0x01EEA3, ALetter},
    {0x01EEA5, 0x01EEA9, ALetter},
    {0x01EEAB, 0x01EEBB, ALetter},
    {0x01F130, 0x01F149, ALetter},
    {0x01F150, 0x01F169, ALetter},
    {0x01F170, 0x01F189, ALetter},
    {0x01F1E6, 0x01F1FF, Regional_Indicator},
    {0x0E0001, 0x0E0001, Format},
    {0x0E0020, 0x0E007F, Format},
    {0x0E0100, 0x0E01EF, Extend}
};