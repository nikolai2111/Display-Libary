const uint8_t Font_16_Matrix_NumBitmaps[] = {
  0x1B,0x60,0x6D,0x80,0x00,0x30,0x03,0xC0,0x0C,0x00,0x0C,0x00,0xF0,0x03,0x00,0x03,
  0x00,0x3C,0x00,0xC0,0x00,0xC0,0x0F,0x00,0x30,0x00,0x30,0x03,0xC0,0x0C,0x00,0x01,
  0xB6,0x06,0xD8,	// char48
  0x18,0x18,0x00,0xD8,0xD8,0x00,0x18,0x18,0x00,0x18,0x18,0x00,0x18,0x18,0x00,0x18,
  0x18,0x00,0xDB,0xDB,	// char49
  0xDB,0x63,0x6D,0x80,0x00,0x00,0x03,0x00,0x0C,0x00,0x00,0x00,0xC0,0x03,0x00,0x00,
  0x6D,0x81,0xB6,0x00,0x00,0xC0,0x03,0x00,0x00,0x00,0x30,0x00,0xC0,0x00,0x00,0x0D,
  0xB6,0xF6,0xDB,	// char50
  0xDB,0x63,0x6D,0x80,0x00,0x00,0x03,0x00,0x0C,0x00,0x00,0x00,0xC0,0x03,0x00,0x00,
  0x6D,0x81,0xB6,0x00,0x00,0x00,0x0C,0x00,0x30,0x00,0x00,0x03,0x00,0x0C,0x00,0x0D,
  0xB6,0x36,0xD8,	// char51
  0xC0,0x0F,0x00,0x30,0x00,0x30,0x03,0xC0,0x0C,0x00,0x0C,0x00,0xF0,0x03,0x00,0x03,
  0x6D,0xBD,0xB6,0xC0,0x00,0x00,0x0C,0x00,0x30,0x00,0x00,0x03,0x00,0x0C,0x00,0x00,
  0x00,0xC0,0x03,	// char52
  0xDB,0x6F,0x6D,0xB0,0x00,0x30,0x00,0xC0,0x00,0x00,0x0C,0x00,0x30,0x00,0x00,0x03,
  0x6D,0x8D,0xB6,0x00,0x00,0x00,0x0C,0x00,0x30,0x00,0x00,0x03,0x00,0x0C,0x00,0x0D,
  0xB6,0x36,0xD8,	// char53
  0x1B,0x60,0x6D,0x80,0x00,0x30,0x00,0xC0,0x00,0x00,0x0C,0x00,0x30,0x00,0x00,0x03,
  0x6D,0x8D,0xB6,0x00,0x00,0xC0,0x0F,0x00,0x30,0x00,0x30,0x03,0xC0,0x0C,0x00,0x01,
  0xB6,0x06,0xD8,	// char54
  0xDB,0x6F,0x6D,0xB0,0x00,0x00,0x03,0x00,0x0C,0x00,0x00,0x00,0xC0,0x03,0x00,0x00,
  0x01,0x80,0x06,0x00,0x00,0x03,0x00,0x0C,0x00,0x00,0x06,0x00,0x18,0x00,0x00,0x0C,
  0x00,0x30,0x00,	// char55
  0x1B,0x60,0x6D,0x80,0x00,0x30,0x03,0xC0,0x0C,0x00,0x0C,0x00,0xF0,0x03,0x00,0x00,
  0x6D,0x81,0xB6,0x00,0x00,0xC0,0x0F,0x00,0x30,0x00,0x30,0x03,0xC0,0x0C,0x00,0x01,
  0xB6,0x06,0xD8,	// char56
  0x1B,0x60,0x6D,0x80,0x00,0x30,0x03,0xC0,0x0C,0x00,0x0C,0x00,0xF0,0x03,0x00,0x00,
  0x6D,0xB1,0xB6,0xC0,0x00,0x00,0x0C,0x00,0x30,0x00,0x00,0x03,0x00,0x0C,0x00,0x01,
  0xB6,0x06,0xD8	// char57
};

const GFXglyph Font_16_Matrix_NumGlyphs[] = {
  { 0, 14, 20, 16, 1, -20 },	// char48
  { 35, 8, 20, 16, 4, -20 },	// char49
  { 55, 14, 20, 16, 1, -20 },	// char50
  { 90, 14, 20, 16, 1, -20 },	// char51
  { 125, 14, 20, 16, 1, -20 },	// char52
  { 160, 14, 20, 16, 1, -20 },	// char53
  { 195, 14, 20, 16, 1, -20 },	// char54
  { 230, 14, 20, 16, 1, -20 },	// char55
  { 265, 14, 20, 16, 1, -20 },	// char56
  { 300, 14, 20, 16, 1, -20 }	// char57
};

const GFXfont Font_16_Matrix_Num = {
 (uint8_t *)Font_16_Matrix_NumBitmaps,
 (GFXglyph *)Font_16_Matrix_NumGlyphs,
 48, 57, 22};