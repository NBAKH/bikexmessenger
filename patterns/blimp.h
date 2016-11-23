// Don't edit this file!  It's software-generated.
// See convert.py script instead.

#define PALETTE1  0
#define PALETTE4  1
#define PALETTE8  2
#define TRUECOLOR 3

#define NUM_LEDS 32

// blimpB.png --------------------------------------------------------------

const uint8_t palette00[][3] = {
  {  13,   9,  38 },
  {   0,   0,   0 },
  {   5,   5,  28 },
  {   5,   4,  27 },
  {  66,  22,   2 },
  {   6,   2,   1 },
  {  70,  23,   2 },
  {   0,   0,   0 },
  {   6,   2,   1 },
  {  60,  20,   1 },
  {   5,   4,  25 },
  {   7,   3,   1 },
  {  58,  21,   3 } };

const uint8_t pixels00[] = {
  0X11, 0X11, 0X11, 0X11, 0X00, 0X02, 0X20, 0X02,
  0X00, 0X01, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X10, 0X00, 0X22, 0X00, 0X02,
  0X00, 0X00, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X00, 0X02, 0X22, 0X00, 0X02,
  0X32, 0X00, 0X00, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X10, 0X00, 0X22, 0X20, 0X00, 0X03,
  0X23, 0X30, 0X00, 0X01, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X00, 0X00, 0X22, 0X00, 0X00, 0X00,
  0X22, 0X22, 0X00, 0X07, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X00, 0X03, 0X22, 0X00, 0X00, 0X00,
  0X02, 0X22, 0X20, 0X00, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X10, 0X00, 0X22, 0X20, 0X00, 0X00, 0X00,
  0X02, 0X23, 0X20, 0X00, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X10, 0X03, 0X32, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X32, 0X33, 0X00, 0X01, 0X11, 0X11, 0X11,
  0X11, 0X10, 0X03, 0X23, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X32, 0X22, 0X00, 0X01, 0X11, 0X11, 0X11,
  0X11, 0X00, 0X02, 0X23, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X33, 0X22, 0X30, 0X01, 0X11, 0X11, 0X11,
  0X11, 0X00, 0X22, 0X23, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X03, 0X32, 0X30, 0X00, 0X11, 0X11, 0X11,
  0X11, 0X00, 0X32, 0X30, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X03, 0X22, 0X30, 0X00, 0X11, 0X11, 0X11,
  0X10, 0X00, 0X22, 0X30, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X03, 0X23, 0X30, 0X00, 0X11, 0X11, 0X11,
  0X10, 0X02, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X33, 0X33, 0X00, 0X11, 0X11, 0X11,
  0X10, 0X03, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X22, 0X22, 0X00, 0X17, 0X17, 0X11,
  0X00, 0X03, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X32, 0X23, 0X00, 0X55, 0X55, 0X51,
  0X00, 0X03, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0XA2, 0X23, 0X00, 0X54, 0X45, 0X51,
  0X00, 0X03, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X32, 0X23, 0X00, 0X84, 0X45, 0X51,
  0X00, 0X02, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X22, 0X23, 0X00, 0X5B, 0X55, 0X51,
  0X00, 0X03, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X32, 0X23, 0X00, 0X54, 0X45, 0X51,
  0X00, 0X03, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X32, 0X23, 0X00, 0X84, 0X45, 0X57,
  0X00, 0X03, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X32, 0X2A, 0X00, 0X58, 0X55, 0X51,
  0X00, 0X03, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X33, 0X23, 0X00, 0X54, 0X95, 0X51,
  0X00, 0X02, 0X22, 0X00, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X00, 0X23, 0X23, 0X00, 0XB4, 0X48, 0X51,
  0X10, 0X02, 0X22, 0X30, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X02, 0X32, 0X23, 0X00, 0X85, 0X55, 0X51,
  0X17, 0X00, 0X32, 0X30, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X03, 0X32, 0X23, 0X00, 0X55, 0X55, 0X51,
  0X11, 0X00, 0X32, 0X20, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X03, 0X22, 0X30, 0X00, 0X11, 0X11, 0X11,
  0X11, 0X00, 0X03, 0X2A, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X3A, 0X23, 0X30, 0X01, 0X11, 0X11, 0X11,
  0X11, 0X00, 0X03, 0X23, 0X00, 0X00, 0X00, 0X00,
  0X00, 0X22, 0X22, 0X20, 0X01, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X00, 0X32, 0X30, 0X00, 0X00, 0X00,
  0X00, 0X32, 0X33, 0X00, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X00, 0X22, 0X30, 0X00, 0X00, 0X00,
  0X02, 0X22, 0X20, 0X00, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X10, 0X02, 0X23, 0X00, 0X00, 0X00,
  0X03, 0X22, 0X20, 0X01, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X10, 0X00, 0X22, 0X20, 0X00, 0X00,
  0X03, 0X32, 0X00, 0X71, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X00, 0X02, 0X22, 0X00, 0X00,
  0X32, 0X30, 0X00, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X10, 0X00, 0X03, 0X00, 0X60,
  0X22, 0X00, 0X41, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X11, 0X40, 0X02, 0X24, 0X64,
  0X20, 0X04, 0X41, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X14, 0X6C, 0X41, 0X19, 0X44,
  0X11, 0X14, 0X44, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X44, 0X44, 0X11, 0X14, 0X44,
  0X11, 0X14, 0X44, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X14, 0X69, 0X11, 0X11, 0X14, 0X64,
  0X11, 0X11, 0X64, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X19, 0X41, 0X11, 0X11, 0X14, 0X64,
  0X11, 0X11, 0X46, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X41,
  0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11,
  0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11, 0X11 };

#define paletteType PALETTE4