#include <linux/font.h>

static const unsigned char fontdata_6x10[] = {

	/* 0 0x00 '^@' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 1 0x01 '^A' */
	0x00,
	0x78, /* 01111000 */
	0x84, /* 10000100 */
	0xCC, /* 11001100 */
	0x84, /* 10000100 */
	0xCC, /* 11001100 */
	0xB4, /* 10110100 */
	0x78, /* 01111000 */
	0x00,
	0x00,

	/* 2 0x02 '^B' */
	0x00,
	0x78, /* 01111000 */
	0xFC, /* 11111100 */
	0xB4, /* 10110100 */
	0xFC, /* 11111100 */
	0xB4, /* 10110100 */
	0xCC, /* 11001100 */
	0x78, /* 01111000 */
	0x00,
	0x00,

	/* 3 0x03 '^C' */
	0x00,
	0x00,
	0x28,
	0x7C, /* 01111100 */
	0x7C, /* 01111100 */
	0x38,
	0x10,
	0x00,
	0x00,
	0x00,

	/* 4 0x04 '^D' */
	0x00,
	0x00,
	0x10,
	0x38,
	0x7C, /* 01111100 */
	0x38,
	0x10,
	0x00,
	0x00,
	0x00,

	/* 5 0x05 '^E' */
	0x00,
	0x00,
	0x38,
	0x38,
	0x6C, /* 01101100 */
	0x6C, /* 01101100 */
	0x10,
	0x38,
	0x00,
	0x00,

	/* 6 0x06 '^F' */
	0x00,
	0x00,
	0x10,
	0x38,
	0x7C, /* 01111100 */
	0x7C, /* 01111100 */
	0x10,
	0x38,
	0x00,
	0x00,

	/* 7 0x07 '^G' */
	0x00,
	0x00,
	0x00,
	0x30,
	0x78, /* 01111000 */
	0x30,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 8 0x08 '^H' */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xCC, /* 11001100 */
	0x84, /* 10000100 */
	0xCC, /* 11001100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */

	/* 9 0x09 '^I' */
	0x00,
	0x00,
	0x30,
	0x48, /* 01001000 */
	0x84, /* 10000100 */
	0x48, /* 01001000 */
	0x30,
	0x00,
	0x00,
	0x00,

	/* 10 0x0A '^J' */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xCC, /* 11001100 */
	0xB4, /* 10110100 */
	0x78, /* 01111000 */
	0xB4, /* 10110100 */
	0xCC, /* 11001100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */

	/* 11 0x0B '^K' */
	0x00,
	0x3C,
	0x14,
	0x20,
	0x78, /* 01111000 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 12 0x0C '^L' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x10,
	0x38,
	0x10,
	0x00,
	0x00,

	/* 13 0x0D '^M' */
	0x00,
	0x18,
	0x14,
	0x14,
	0x10,
	0x10,
	0x70, /* 01110000 */
	0x60, /* 01100000 */
	0x00,
	0x00,

	/* 14 0x0E '^N' */
	0x00,
	0x3C,
	0x24,
	0x3C,
	0x24,
	0x24,
	0x6C, /* 01101100 */
	0x6C, /* 01101100 */
	0x00,
	0x00,

	/* 15 0x0F '^O' */
	0x00,
	0x10,
	0x54, /* 01010100 */
	0x38,
	0x6C, /* 01101100 */
	0x38,
	0x54, /* 01010100 */
	0x10,
	0x00,
	0x00,

	/* 16 0x10 '^P' */
	0x00,
	0x40, /* 01000000 */
	0x60, /* 01100000 */
	0x70, /* 01110000 */
	0x78, /* 01111000 */
	0x70, /* 01110000 */
	0x60, /* 01100000 */
	0x40, /* 01000000 */
	0x00,
	0x00,

	/* 17 0x11 '^Q' */
	0x00,
	0x04,
	0x0C,
	0x1C,
	0x3C,
	0x1C,
	0x0C,
	0x04,
	0x00,
	0x00,

	/* 18 0x12 '^R' */
	0x00,
	0x10,
	0x38,
	0x54, /* 01010100 */
	0x10,
	0x54, /* 01010100 */
	0x38,
	0x10,
	0x00,
	0x00,

	/* 19 0x13 '^S' */
	0x00,
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x00,
	0x48, /* 01001000 */
	0x00,
	0x00,

	/* 20 0x14 '^T' */
	0x3C,
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x3C,
	0x14,
	0x14,
	0x14,
	0x00,
	0x00,

	/* 21 0x15 '^U' */
	0x38,
	0x44, /* 01000100 */
	0x20,
	0x50, /* 01010000 */
	0x48, /* 01001000 */
	0x24,
	0x14,
	0x08,
	0x44, /* 01000100 */
	0x38,

	/* 22 0x16 '^V' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xF8, /* 11111000 */
	0xF8, /* 11111000 */
	0xF8, /* 11111000 */
	0x00,
	0x00,

	/* 23 0x17 '^W' */
	0x00,
	0x10,
	0x38,
	0x54, /* 01010100 */
	0x10,
	0x54, /* 01010100 */
	0x38,
	0x10,
	0x7C, /* 01111100 */
	0x00,

	/* 24 0x18 '^X' */
	0x00,
	0x10,
	0x38,
	0x54, /* 01010100 */
	0x10,
	0x10,
	0x10,
	0x10,
	0x00,
	0x00,

	/* 25 0x19 '^Y' */
	0x00,
	0x10,
	0x10,
	0x10,
	0x10,
	0x54, /* 01010100 */
	0x38,
	0x10,
	0x00,
	0x00,

	/* 26 0x1A '^Z' */
	0x00,
	0x00,
	0x10,
	0x08,
	0x7C, /* 01111100 */
	0x08,
	0x10,
	0x00,
	0x00,
	0x00,

	/* 27 0x1B '^[' */
	0x00,
	0x00,
	0x10,
	0x20,
	0x7C, /* 01111100 */
	0x20,
	0x10,
	0x00,
	0x00,
	0x00,

	/* 28 0x1C '^\' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x78, /* 01111000 */
	0x00,
	0x00,

	/* 29 0x1D '^]' */
	0x00,
	0x00,
	0x48, /* 01001000 */
	0x84, /* 10000100 */
	0xFC, /* 11111100 */
	0x84, /* 10000100 */
	0x48, /* 01001000 */
	0x00,
	0x00,
	0x00,

	/* 30 0x1E '^^' */
	0x00,
	0x00,
	0x10,
	0x10,
	0x38,
	0x38,
	0x7C, /* 01111100 */
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 31 0x1F '^_' */
	0x00,
	0x00,
	0x7C, /* 01111100 */
	0x7C, /* 01111100 */
	0x38,
	0x38,
	0x10,
	0x10,
	0x00,
	0x00,

	/* 32 0x20 ' ' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 33 0x21 '!' */
	0x00,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x00,
	0x10,
	0x00,
	0x00,

	/* 34 0x22 '"' */
	0x28,
	0x28,
	0x28,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 35 0x23 '#' */
	0x00,
	0x00,
	0x28,
	0x7C, /* 01111100 */
	0x28,
	0x28,
	0x7C, /* 01111100 */
	0x28,
	0x00,
	0x00,

	/* 36 0x24 '$' */
	0x10,
	0x38,
	0x54, /* 01010100 */
	0x50, /* 01010000 */
	0x38,
	0x14,
	0x54, /* 01010100 */
	0x38,
	0x10,
	0x00,

	/* 37 0x25 '%' */
	0x00,
	0x64, /* 01100100 */
	0x64, /* 01100100 */
	0x08,
	0x10,
	0x20,
	0x4C, /* 01001100 */
	0x4C, /* 01001100 */
	0x00,
	0x00,

	/* 38 0x26 '&' */
	0x00,
	0x30,
	0x48, /* 01001000 */
	0x50, /* 01010000 */
	0x20,
	0x54, /* 01010100 */
	0x48, /* 01001000 */
	0x34,
	0x00,
	0x00,

	/* 39 0x27 ''' */
	0x10,
	0x10,
	0x10,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 40 0x28 '(' */
	0x08,
	0x10,
	0x20,
	0x20,
	0x20,
	0x20,
	0x20,
	0x10,
	0x08,
	0x00,

	/* 41 0x29 ')' */
	0x20,
	0x10,
	0x08,
	0x08,
	0x08,
	0x08,
	0x08,
	0x10,
	0x20,
	0x00,

	/* 42 0x2A '*' */
	0x00,
	0x10,
	0x54, /* 01010100 */
	0x38,
	0x54, /* 01010100 */
	0x10,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 43 0x2B '+' */
	0x00,
	0x00,
	0x10,
	0x10,
	0x7C, /* 01111100 */
	0x10,
	0x10,
	0x00,
	0x00,
	0x00,

	/* 44 0x2C ',' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x30,
	0x30,
	0x10,
	0x20,

	/* 45 0x2D '-' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x7C, /* 01111100 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 46 0x2E '.' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x18,
	0x18,
	0x00,
	0x00,

	/* 47 0x2F '/' */
	0x04,
	0x04,
	0x08,
	0x08,
	0x10,
	0x10,
	0x20,
	0x20,
	0x40, /* 01000000 */
	0x40, /* 01000000 */

	/* 48 0x30 '0' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x4C, /* 01001100 */
	0x54, /* 01010100 */
	0x64, /* 01100100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 49 0x31 '1' */
	0x00,
	0x10,
	0x30,
	0x50, /* 01010000 */
	0x10,
	0x10,
	0x10,
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 50 0x32 '2' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x04,
	0x08,
	0x10,
	0x20,
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 51 0x33 '3' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x04,
	0x18,
	0x04,
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 52 0x34 '4' */
	0x00,
	0x08,
	0x18,
	0x28,
	0x48, /* 01001000 */
	0x7C, /* 01111100 */
	0x08,
	0x08,
	0x00,
	0x00,

	/* 53 0x35 '5' */
	0x00,
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x78, /* 01111000 */
	0x04,
	0x04,
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 54 0x36 '6' */
	0x00,
	0x18,
	0x20,
	0x40, /* 01000000 */
	0x78, /* 01111000 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 55 0x37 '7' */
	0x00,
	0x7C, /* 01111100 */
	0x04,
	0x04,
	0x08,
	0x10,
	0x10,
	0x10,
	0x00,
	0x00,

	/* 56 0x38 '8' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 57 0x39 '9' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x3C,
	0x04,
	0x08,
	0x30,
	0x00,
	0x00,

	/* 58 0x3A ':' */
	0x00,
	0x00,
	0x00,
	0x18,
	0x18,
	0x00,
	0x18,
	0x18,
	0x00,
	0x00,

	/* 59 0x3B ';' */
	0x00,
	0x00,
	0x00,
	0x30,
	0x30,
	0x00,
	0x30,
	0x30,
	0x10,
	0x20,

	/* 60 0x3C '<' */
	0x00,
	0x04,
	0x08,
	0x10,
	0x20,
	0x10,
	0x08,
	0x04,
	0x00,
	0x00,

	/* 61 0x3D '=' */
	0x00,
	0x00,
	0x00,
	0x7C, /* 01111100 */
	0x00,
	0x7C, /* 01111100 */
	0x00,
	0x00,
	0x00,
	0x00,

	/* 62 0x3E '>' */
	0x00,
	0x20,
	0x10,
	0x08,
	0x04,
	0x08,
	0x10,
	0x20,
	0x00,
	0x00,

	/* 63 0x3F '?' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x04,
	0x08,
	0x10,
	0x00,
	0x10,
	0x00,
	0x00,

	/* 64 0x40 '@' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x5C, /* 01011100 */
	0x54, /* 01010100 */
	0x5C, /* 01011100 */
	0x40, /* 01000000 */
	0x38,
	0x00,
	0x00,

	/* 65 0x41 'A' */
	0x00,
	0x10,
	0x28,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 66 0x42 'B' */
	0x00,
	0x78, /* 01111000 */
	0x24,
	0x24,
	0x38,
	0x24,
	0x24,
	0x78, /* 01111000 */
	0x00,
	0x00,

	/* 67 0x43 'C' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 68 0x44 'D' */
	0x00,
	0x78, /* 01111000 */
	0x24,
	0x24,
	0x24,
	0x24,
	0x24,
	0x78, /* 01111000 */
	0x00,
	0x00,

	/* 69 0x45 'E' */
	0x00,
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x78, /* 01111000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 70 0x46 'F' */
	0x00,
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x78, /* 01111000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x00,
	0x00,

	/* 71 0x47 'G' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x40, /* 01000000 */
	0x5C, /* 01011100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 72 0x48 'H' */
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 73 0x49 'I' */
	0x00,
	0x38,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x38,
	0x00,
	0x00,

	/* 74 0x4A 'J' */
	0x00,
	0x1C,
	0x08,
	0x08,
	0x08,
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x30,
	0x00,
	0x00,

	/* 75 0x4B 'K' */
	0x00,
	0x44, /* 01000100 */
	0x48, /* 01001000 */
	0x50, /* 01010000 */
	0x60, /* 01100000 */
	0x50, /* 01010000 */
	0x48, /* 01001000 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 76 0x4C 'L' */
	0x00,
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 77 0x4D 'M' */
	0x00,
	0x44, /* 01000100 */
	0x6C, /* 01101100 */
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 78 0x4E 'N' */
	0x00,
	0x44, /* 01000100 */
	0x64, /* 01100100 */
	0x54, /* 01010100 */
	0x4C, /* 01001100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 79 0x4F 'O' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 80 0x50 'P' */
	0x00,
	0x78, /* 01111000 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x78, /* 01111000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x00,
	0x00,

	/* 81 0x51 'Q' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x54, /* 01010100 */
	0x48, /* 01001000 */
	0x34,
	0x00,
	0x00,

	/* 82 0x52 'R' */
	0x00,
	0x78, /* 01111000 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x78, /* 01111000 */
	0x50, /* 01010000 */
	0x48, /* 01001000 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 83 0x53 'S' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x40, /* 01000000 */
	0x38,
	0x04,
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 84 0x54 'T' */
	0x00,
	0x7C, /* 01111100 */
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x00,
	0x00,

	/* 85 0x55 'U' */
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 86 0x56 'V' */
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x28,
	0x10,
	0x00,
	0x00,

	/* 87 0x57 'W' */
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x6C, /* 01101100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 88 0x58 'X' */
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x28,
	0x10,
	0x28,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 89 0x59 'Y' */
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x28,
	0x10,
	0x10,
	0x10,
	0x00,
	0x00,

	/* 90 0x5A 'Z' */
	0x00,
	0x7C, /* 01111100 */
	0x04,
	0x08,
	0x10,
	0x20,
	0x40, /* 01000000 */
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 91 0x5B '[' */
	0x18,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x18,
	0x00,

	/* 92 0x5C '\' */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x20,
	0x20,
	0x10,
	0x10,
	0x08,
	0x08,
	0x04,
	0x04,

	/* 93 0x5D ']' */
	0x30,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x30,
	0x00,

	/* 94 0x5E '^' */
	0x00,
	0x10,
	0x28,
	0x44, /* 01000100 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 95 0x5F '_' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x7C, /* 01111100 */
	0x00,

	/* 96 0x60 '`' */
	0x20,
	0x10,
	0x08,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 97 0x61 'a' */
	0x00,
	0x00,
	0x00,
	0x38,
	0x04,
	0x3C,
	0x44, /* 01000100 */
	0x3C,
	0x00,
	0x00,

	/* 98 0x62 'b' */
	0x00,
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x58, /* 01011000 */
	0x64, /* 01100100 */
	0x44, /* 01000100 */
	0x64, /* 01100100 */
	0x58, /* 01011000 */
	0x00,
	0x00,

	/* 99 0x63 'c' */
	0x00,
	0x00,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x40, /* 01000000 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 100 0x64 'd' */
	0x00,
	0x04,
	0x04,
	0x34,
	0x4C, /* 01001100 */
	0x44, /* 01000100 */
	0x4C, /* 01001100 */
	0x34,
	0x00,
	0x00,

	/* 101 0x65 'e' */
	0x00,
	0x00,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x3C,
	0x00,
	0x00,

	/* 102 0x66 'f' */
	0x00,
	0x0C,
	0x10,
	0x10,
	0x38,
	0x10,
	0x10,
	0x10,
	0x00,
	0x00,

	/* 103 0x67 'g' */
	0x00,
	0x00,
	0x00,
	0x34,
	0x4C, /* 01001100 */
	0x44, /* 01000100 */
	0x4C, /* 01001100 */
	0x34,
	0x04,
	0x38,

	/* 104 0x68 'h' */
	0x00,
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x78, /* 01111000 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 105 0x69 'i' */
	0x00,
	0x10,
	0x00,
	0x30,
	0x10,
	0x10,
	0x10,
	0x38,
	0x00,
	0x00,

	/* 106 0x6A 'j' */
	0x00,
	0x10,
	0x00,
	0x30,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x60, /* 01100000 */

	/* 107 0x6B 'k' */
	0x00,
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x48, /* 01001000 */
	0x50, /* 01010000 */
	0x70, /* 01110000 */
	0x48, /* 01001000 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 108 0x6C 'l' */
	0x00,
	0x30,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x38,
	0x00,
	0x00,

	/* 109 0x6D 'm' */
	0x00,
	0x00,
	0x00,
	0x68, /* 01101000 */
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x00,
	0x00,

	/* 110 0x6E 'n' */
	0x00,
	0x00,
	0x00,
	0x58, /* 01011000 */
	0x64, /* 01100100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 111 0x6F 'o' */
	0x00,
	0x00,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 112 0x70 'p' */
	0x00,
	0x00,
	0x00,
	0x58, /* 01011000 */
	0x64, /* 01100100 */
	0x44, /* 01000100 */
	0x64, /* 01100100 */
	0x58, /* 01011000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */

	/* 113 0x71 'q' */
	0x00,
	0x00,
	0x00,
	0x34,
	0x4C, /* 01001100 */
	0x44, /* 01000100 */
	0x4C, /* 01001100 */
	0x34,
	0x04,
	0x04,

	/* 114 0x72 'r' */
	0x00,
	0x00,
	0x00,
	0x58, /* 01011000 */
	0x64, /* 01100100 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x00,
	0x00,

	/* 115 0x73 's' */
	0x00,
	0x00,
	0x00,
	0x3C,
	0x40, /* 01000000 */
	0x38,
	0x04,
	0x78, /* 01111000 */
	0x00,
	0x00,

	/* 116 0x74 't' */
	0x00,
	0x10,
	0x10,
	0x38,
	0x10,
	0x10,
	0x10,
	0x0C,
	0x00,
	0x00,

	/* 117 0x75 'u' */
	0x00,
	0x00,
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x4C, /* 01001100 */
	0x34,
	0x00,
	0x00,

	/* 118 0x76 'v' */
	0x00,
	0x00,
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x28,
	0x10,
	0x00,
	0x00,

	/* 119 0x77 'w' */
	0x00,
	0x00,
	0x00,
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x28,
	0x00,
	0x00,

	/* 120 0x78 'x' */
	0x00,
	0x00,
	0x00,
	0x44, /* 01000100 */
	0x28,
	0x10,
	0x28,
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 121 0x79 'y' */
	0x00,
	0x00,
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x3C,
	0x04,
	0x38,

	/* 122 0x7A 'z' */
	0x00,
	0x00,
	0x00,
	0x7C, /* 01111100 */
	0x08,
	0x10,
	0x20,
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 123 0x7B '{' */
	0x08,
	0x10,
	0x10,
	0x10,
	0x20,
	0x10,
	0x10,
	0x10,
	0x08,
	0x00,

	/* 124 0x7C '|' */
	0x10,
	0x10,
	0x10,
	0x10,
	0x00,
	0x10,
	0x10,
	0x10,
	0x10,
	0x00,

	/* 125 0x7D '}' */
	0x20,
	0x10,
	0x10,
	0x10,
	0x08,
	0x10,
	0x10,
	0x10,
	0x20,
	0x00,

	/* 126 0x7E '~' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x20,
	0x54, /* 01010100 */
	0x08,
	0x00,
	0x00,
	0x00,

	/* 127 0x7F '' */
	0x00,
	0x00,
	0x00,
	0x10,
	0x28,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 128 0x80 '\200' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x44, /* 01000100 */
	0x38,
	0x10,
	0x20,

	/* 129 0x81 '\201' */
	0x00,
	0x28,
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x4C, /* 01001100 */
	0x34,
	0x00,
	0x00,

	/* 130 0x82 '\202' */
	0x08,
	0x10,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x3C,
	0x00,
	0x00,

	/* 131 0x83 '\203' */
	0x10,
	0x28,
	0x00,
	0x38,
	0x04,
	0x3C,
	0x44, /* 01000100 */
	0x3C,
	0x00,
	0x00,

	/* 132 0x84 '\204' */
	0x00,
	0x28,
	0x00,
	0x38,
	0x04,
	0x3C,
	0x44, /* 01000100 */
	0x3C,
	0x00,
	0x00,

	/* 133 0x85 '\205' */
	0x10,
	0x08,
	0x00,
	0x38,
	0x04,
	0x3C,
	0x44, /* 01000100 */
	0x3C,
	0x00,
	0x00,

	/* 134 0x86 '\206' */
	0x18,
	0x24,
	0x18,
	0x38,
	0x04,
	0x3C,
	0x44, /* 01000100 */
	0x3C,
	0x00,
	0x00,

	/* 135 0x87 '\207' */
	0x00,
	0x00,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x40, /* 01000000 */
	0x44, /* 01000100 */
	0x38,
	0x10,
	0x20,

	/* 136 0x88 '\210' */
	0x10,
	0x28,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x3C,
	0x00,
	0x00,

	/* 137 0x89 '\211' */
	0x00,
	0x28,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x3C,
	0x00,
	0x00,

	/* 138 0x8A '\212' */
	0x20,
	0x10,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x3C,
	0x00,
	0x00,

	/* 139 0x8B '\213' */
	0x00,
	0x28,
	0x00,
	0x30,
	0x10,
	0x10,
	0x10,
	0x38,
	0x00,
	0x00,

	/* 140 0x8C '\214' */
	0x10,
	0x28,
	0x00,
	0x30,
	0x10,
	0x10,
	0x10,
	0x38,
	0x00,
	0x00,

	/* 141 0x8D '\215' */
	0x20,
	0x10,
	0x00,
	0x30,
	0x10,
	0x10,
	0x10,
	0x38,
	0x00,
	0x00,

	/* 142 0x8E '\216' */
	0x44, /* 01000100 */
	0x10,
	0x28,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 143 0x8F '\217' */
	0x30,
	0x48, /* 01001000 */
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 144 0x90 '\220' */
	0x10,
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x78, /* 01111000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 145 0x91 '\221' */
	0x00,
	0x00,
	0x00,
	0x78, /* 01111000 */
	0x14,
	0x7C, /* 01111100 */
	0x50, /* 01010000 */
	0x3C,
	0x00,
	0x00,

	/* 146 0x92 '\222' */
	0x00,
	0x3C,
	0x50, /* 01010000 */
	0x50, /* 01010000 */
	0x78, /* 01111000 */
	0x50, /* 01010000 */
	0x50, /* 01010000 */
	0x5C, /* 01011100 */
	0x00,
	0x00,

	/* 147 0x93 '\223' */
	0x10,
	0x28,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 148 0x94 '\224' */
	0x00,
	0x28,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 149 0x95 '\225' */
	0x20,
	0x10,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 150 0x96 '\226' */
	0x10,
	0x28,
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x4C, /* 01001100 */
	0x34,
	0x00,
	0x00,

	/* 151 0x97 '\227' */
	0x20,
	0x10,
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x4C, /* 01001100 */
	0x34,
	0x00,
	0x00,

	/* 152 0x98 '\230' */
	0x00,
	0x28,
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x3C,
	0x04,
	0x38,

	/* 153 0x99 '\231' */
	0x84, /* 10000100 */
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 154 0x9A '\232' */
	0x88, /* 10001000 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 155 0x9B '\233' */
	0x00,
	0x00,
	0x10,
	0x38,
	0x54, /* 01010100 */
	0x50, /* 01010000 */
	0x54, /* 01010100 */
	0x38,
	0x10,
	0x00,

	/* 156 0x9C '\234' */
	0x30,
	0x48, /* 01001000 */
	0x40, /* 01000000 */
	0x70, /* 01110000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x44, /* 01000100 */
	0x78, /* 01111000 */
	0x00,
	0x00,

	/* 157 0x9D '\235' */
	0x00,
	0x44, /* 01000100 */
	0x28,
	0x7C, /* 01111100 */
	0x10,
	0x7C, /* 01111100 */
	0x10,
	0x10,
	0x00,
	0x00,

	/* 158 0x9E '\236' */
	0x00,
	0x70, /* 01110000 */
	0x48, /* 01001000 */
	0x70, /* 01110000 */
	0x48, /* 01001000 */
	0x5C, /* 01011100 */
	0x48, /* 01001000 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 159 0x9F '\237' */
	0x00,
	0x0C,
	0x10,
	0x10,
	0x38,
	0x10,
	0x10,
	0x60, /* 01100000 */
	0x00,
	0x00,

	/* 160 0xA0 '\240' */
	0x08,
	0x10,
	0x00,
	0x38,
	0x04,
	0x3C,
	0x44, /* 01000100 */
	0x3C,
	0x00,
	0x00,

	/* 161 0xA1 '\241' */
	0x08,
	0x10,
	0x00,
	0x30,
	0x10,
	0x10,
	0x10,
	0x38,
	0x00,
	0x00,

	/* 162 0xA2 '\242' */
	0x08,
	0x10,
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 163 0xA3 '\243' */
	0x08,
	0x10,
	0x00,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x4C, /* 01001100 */
	0x34,
	0x00,
	0x00,

	/* 164 0xA4 '\244' */
	0x34,
	0x58, /* 01011000 */
	0x00,
	0x58, /* 01011000 */
	0x64, /* 01100100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 165 0xA5 '\245' */
	0x58, /* 01011000 */
	0x44, /* 01000100 */
	0x64, /* 01100100 */
	0x54, /* 01010100 */
	0x4C, /* 01001100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 166 0xA6 '\246' */
	0x00,
	0x38,
	0x04,
	0x3C,
	0x44, /* 01000100 */
	0x3C,
	0x00,
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 167 0xA7 '\247' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 168 0xA8 '\250' */
	0x00,
	0x10,
	0x00,
	0x10,
	0x20,
	0x40, /* 01000000 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 169 0xA9 '\251' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x7C, /* 01111100 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x00,
	0x00,
	0x00,

	/* 170 0xAA '\252' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x7C, /* 01111100 */
	0x04,
	0x04,
	0x00,
	0x00,
	0x00,

	/* 171 0xAB '\253' */
	0x20,
	0x60, /* 01100000 */
	0x24,
	0x28,
	0x10,
	0x28,
	0x44, /* 01000100 */
	0x08,
	0x1C,
	0x00,

	/* 172 0xAC '\254' */
	0x20,
	0x60, /* 01100000 */
	0x24,
	0x28,
	0x10,
	0x28,
	0x58, /* 01011000 */
	0x3C,
	0x08,
	0x00,

	/* 173 0xAD '\255' */
	0x00,
	0x10,
	0x00,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x00,
	0x00,

	/* 174 0xAE '\256' */
	0x00,
	0x00,
	0x00,
	0x24,
	0x48, /* 01001000 */
	0x90, /* 10010000 */
	0x48, /* 01001000 */
	0x24,
	0x00,
	0x00,

	/* 175 0xAF '\257' */
	0x00,
	0x00,
	0x00,
	0x90, /* 10010000 */
	0x48, /* 01001000 */
	0x24,
	0x48, /* 01001000 */
	0x90, /* 10010000 */
	0x00,
	0x00,

	/* 176 0xB0 '\260' */
	0x10,
	0x44, /* 01000100 */
	0x10,
	0x44, /* 01000100 */
	0x10,
	0x44, /* 01000100 */
	0x10,
	0x44, /* 01000100 */
	0x10,
	0x44, /* 01000100 */

	/* 177 0xB1 '\261' */
	0xA8, /* 10101000 */
	0x54, /* 01010100 */
	0xA8, /* 10101000 */
	0x54, /* 01010100 */
	0xA8, /* 10101000 */
	0x54, /* 01010100 */
	0xA8, /* 10101000 */
	0x54, /* 01010100 */
	0xA8, /* 10101000 */
	0x54, /* 01010100 */

	/* 178 0xB2 '\262' */
	0xDC, /* 11011100 */
	0x74, /* 01110100 */
	0xDC, /* 11011100 */
	0x74, /* 01110100 */
	0xDC, /* 11011100 */
	0x74, /* 01110100 */
	0xDC, /* 11011100 */
	0x74, /* 01110100 */
	0xDC, /* 11011100 */
	0x74, /* 01110100 */

	/* 179 0xB3 '\263' */
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 180 0xB4 '\264' */
	0x10,
	0x10,
	0x10,
	0x10,
	0xF0, /* 11110000 */
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 181 0xB5 '\265' */
	0x10,
	0x10,
	0x10,
	0xF0, /* 11110000 */
	0x10,
	0xF0, /* 11110000 */
	0x10,
	0x10,
	0x10,
	0x10,

	/* 182 0xB6 '\266' */
	0x28,
	0x28,
	0x28,
	0x28,
	0xE8, /* 11101000 */
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,

	/* 183 0xB7 '\267' */
	0x00,
	0x00,
	0x00,
	0x00,
	0xF8, /* 11111000 */
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,

	/* 184 0xB8 '\270' */
	0x00,
	0x00,
	0x00,
	0xF0, /* 11110000 */
	0x10,
	0xF0, /* 11110000 */
	0x10,
	0x10,
	0x10,
	0x10,

	/* 185 0xB9 '\271' */
	0x28,
	0x28,
	0x28,
	0xE8, /* 11101000 */
	0x08,
	0xE8, /* 11101000 */
	0x28,
	0x28,
	0x28,
	0x28,

	/* 186 0xBA '\272' */
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,

	/* 187 0xBB '\273' */
	0x00,
	0x00,
	0x00,
	0xF8, /* 11111000 */
	0x08,
	0xE8, /* 11101000 */
	0x28,
	0x28,
	0x28,
	0x28,

	/* 188 0xBC '\274' */
	0x28,
	0x28,
	0x28,
	0xE8, /* 11101000 */
	0x08,
	0xF8, /* 11111000 */
	0x00,
	0x00,
	0x00,
	0x00,

	/* 189 0xBD '\275' */
	0x28,
	0x28,
	0x28,
	0x28,
	0xF8, /* 11111000 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 190 0xBE '\276' */
	0x10,
	0x10,
	0x10,
	0xF0, /* 11110000 */
	0x10,
	0xF0, /* 11110000 */
	0x00,
	0x00,
	0x00,
	0x00,

	/* 191 0xBF '\277' */
	0x00,
	0x00,
	0x00,
	0x00,
	0xF0, /* 11110000 */
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 192 0xC0 '\300' */
	0x10,
	0x10,
	0x10,
	0x10,
	0x1C,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 193 0xC1 '\301' */
	0x10,
	0x10,
	0x10,
	0x10,
	0xFC, /* 11111100 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 194 0xC2 '\302' */
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC, /* 11111100 */
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 195 0xC3 '\303' */
	0x10,
	0x10,
	0x10,
	0x10,
	0x1C,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 196 0xC4 '\304' */
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 197 0xC5 '\305' */
	0x10,
	0x10,
	0x10,
	0x10,
	0xFC, /* 11111100 */
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 198 0xC6 '\306' */
	0x10,
	0x10,
	0x10,
	0x1C,
	0x10,
	0x1C,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 199 0xC7 '\307' */
	0x28,
	0x28,
	0x28,
	0x28,
	0x2C,
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,

	/* 200 0xC8 '\310' */
	0x28,
	0x28,
	0x28,
	0x2C,
	0x20,
	0x3C,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 201 0xC9 '\311' */
	0x00,
	0x00,
	0x00,
	0x3C,
	0x20,
	0x2C,
	0x28,
	0x28,
	0x28,
	0x28,

	/* 202 0xCA '\312' */
	0x28,
	0x28,
	0x28,
	0xEC, /* 11101100 */
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0x00,
	0x00,
	0x00,

	/* 203 0xCB '\313' */
	0x00,
	0x00,
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0xEC, /* 11101100 */
	0x28,
	0x28,
	0x28,
	0x28,

	/* 204 0xCC '\314' */
	0x28,
	0x28,
	0x28,
	0x2C,
	0x20,
	0x2C,
	0x28,
	0x28,
	0x28,
	0x28,

	/* 205 0xCD '\315' */
	0x00,
	0x00,
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0x00,
	0x00,
	0x00,

	/* 206 0xCE '\316' */
	0x28,
	0x28,
	0x28,
	0xEC, /* 11101100 */
	0x00,
	0xEC, /* 11101100 */
	0x28,
	0x28,
	0x28,
	0x28,

	/* 207 0xCF '\317' */
	0x10,
	0x10,
	0x10,
	0xFC, /* 11111100 */
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0x00,
	0x00,
	0x00,

	/* 208 0xD0 '\320' */
	0x28,
	0x28,
	0x28,
	0x28,
	0xFC, /* 11111100 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 209 0xD1 '\321' */
	0x00,
	0x00,
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0xFC, /* 11111100 */
	0x10,
	0x10,
	0x10,
	0x10,

	/* 210 0xD2 '\322' */
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC, /* 11111100 */
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,

	/* 211 0xD3 '\323' */
	0x28,
	0x28,
	0x28,
	0x28,
	0x3C,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 212 0xD4 '\324' */
	0x10,
	0x10,
	0x10,
	0x1C,
	0x10,
	0x1C,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 213 0xD5 '\325' */
	0x00,
	0x00,
	0x00,
	0x1C,
	0x10,
	0x1C,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 214 0xD6 '\326' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x3C,
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,

	/* 215 0xD7 '\327' */
	0x28,
	0x28,
	0x28,
	0x28,
	0xFC, /* 11111100 */
	0x28,
	0x28,
	0x28,
	0x28,
	0x28,

	/* 216 0xD8 '\330' */
	0x10,
	0x10,
	0x10,
	0xFC, /* 11111100 */
	0x10,
	0xFC, /* 11111100 */
	0x10,
	0x10,
	0x10,
	0x10,

	/* 217 0xD9 '\331' */
	0x10,
	0x10,
	0x10,
	0x10,
	0xF0, /* 11110000 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 218 0xDA '\332' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x1C,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 219 0xDB '\333' */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */

	/* 220 0xDC '\334' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */

	/* 221 0xDD '\335' */
	0xE0, /* 11100000 */
	0xE0, /* 11100000 */
	0xE0, /* 11100000 */
	0xE0, /* 11100000 */
	0xE0, /* 11100000 */
	0xE0, /* 11100000 */
	0xE0, /* 11100000 */
	0xE0, /* 11100000 */
	0xE0, /* 11100000 */
	0xE0, /* 11100000 */

	/* 222 0xDE '\336' */
	0x1C,
	0x1C,
	0x1C,
	0x1C,
	0x1C,
	0x1C,
	0x1C,
	0x1C,
	0x1C,
	0x1C,

	/* 223 0xDF '\337' */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0xFC, /* 11111100 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 224 0xE0 '\340' */
	0x00,
	0x00,
	0x00,
	0x34,
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x34,
	0x00,
	0x00,

	/* 225 0xE1 '\341' */
	0x18,
	0x24,
	0x44, /* 01000100 */
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x58, /* 01011000 */
	0x40, /* 01000000 */
	0x00,

	/* 226 0xE2 '\342' */
	0x00,
	0x7C, /* 01111100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x00,
	0x00,

	/* 227 0xE3 '\343' */
	0x00,
	0x00,
	0x00,
	0x7C, /* 01111100 */
	0x28,
	0x28,
	0x28,
	0x28,
	0x00,
	0x00,

	/* 228 0xE4 '\344' */
	0x00,
	0x7C, /* 01111100 */
	0x24,
	0x10,
	0x08,
	0x10,
	0x24,
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 229 0xE5 '\345' */
	0x00,
	0x00,
	0x00,
	0x3C,
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x30,
	0x00,
	0x00,

	/* 230 0xE6 '\346' */
	0x00,
	0x00,
	0x00,
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x74, /* 01110100 */
	0x40, /* 01000000 */
	0x40, /* 01000000 */

	/* 231 0xE7 '\347' */
	0x00,
	0x00,
	0x00,
	0x7C, /* 01111100 */
	0x10,
	0x10,
	0x10,
	0x0C,
	0x00,
	0x00,

	/* 232 0xE8 '\350' */
	0x38,
	0x10,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x10,
	0x38,
	0x00,
	0x00,

	/* 233 0xE9 '\351' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x7C, /* 01111100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x38,
	0x00,
	0x00,

	/* 234 0xEA '\352' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x28,
	0x6C, /* 01101100 */
	0x00,
	0x00,

	/* 235 0xEB '\353' */
	0x00,
	0x18,
	0x20,
	0x18,
	0x24,
	0x24,
	0x24,
	0x18,
	0x00,
	0x00,

	/* 236 0xEC '\354' */
	0x00,
	0x00,
	0x00,
	0x38,
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x38,
	0x00,
	0x00,

	/* 237 0xED '\355' */
	0x00,
	0x00,
	0x04,
	0x38,
	0x54, /* 01010100 */
	0x54, /* 01010100 */
	0x38,
	0x40, /* 01000000 */
	0x00,
	0x00,

	/* 238 0xEE '\356' */
	0x00,
	0x3C,
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x38,
	0x40, /* 01000000 */
	0x40, /* 01000000 */
	0x3C,
	0x00,
	0x00,

	/* 239 0xEF '\357' */
	0x00,
	0x38,
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x44, /* 01000100 */
	0x00,
	0x00,

	/* 240 0xF0 '\360' */
	0x00,
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0xFC, /* 11111100 */
	0x00,
	0x00,
	0x00,

	/* 241 0xF1 '\361' */
	0x00,
	0x10,
	0x10,
	0x7C, /* 01111100 */
	0x10,
	0x10,
	0x00,
	0x7C, /* 01111100 */
	0x00,
	0x00,

	/* 242 0xF2 '\362' */
	0x00,
	0x20,
	0x10,
	0x08,
	0x10,
	0x20,
	0x00,
	0x38,
	0x00,
	0x00,

	/* 243 0xF3 '\363' */
	0x00,
	0x08,
	0x10,
	0x20,
	0x10,
	0x08,
	0x00,
	0x38,
	0x00,
	0x00,

	/* 244 0xF4 '\364' */
	0x00,
	0x0C,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,

	/* 245 0xF5 '\365' */
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x60, /* 01100000 */
	0x00,

	/* 246 0xF6 '\366' */
	0x00,
	0x00,
	0x10,
	0x00,
	0x7C, /* 01111100 */
	0x00,
	0x10,
	0x00,
	0x00,
	0x00,

	/* 247 0xF7 '\367' */
	0x00,
	0x00,
	0x20,
	0x54, /* 01010100 */
	0x08,
	0x20,
	0x54, /* 01010100 */
	0x08,
	0x00,
	0x00,

	/* 248 0xF8 '\370' */
	0x30,
	0x48, /* 01001000 */
	0x48, /* 01001000 */
	0x30,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 249 0xF9 '\371' */
	0x00,
	0x00,
	0x00,
	0x10,
	0x38,
	0x10,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 250 0xFA '\372' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x10,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 251 0xFB '\373' */
	0x00,
	0x04,
	0x08,
	0x08,
	0x50, /* 01010000 */
	0x50, /* 01010000 */
	0x20,
	0x20,
	0x00,
	0x00,

	/* 252 0xFC '\374' */
	0x60, /* 01100000 */
	0x50, /* 01010000 */
	0x50, /* 01010000 */
	0x50, /* 01010000 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 253 0xFD '\375' */
	0x60, /* 01100000 */
	0x10,
	0x20,
	0x70, /* 01110000 */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

	/* 254 0xFE '\376' */
	0x00,
	0x00,
	0x38,
	0x38,
	0x38,
	0x38,
	0x38,
	0x38,
	0x00,
	0x00,

	/* 255 0xFF '\377' */
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,

};

const struct font_desc font_6x10 = {
	.idx	= FONT6x10_IDX,
	.name	= "6x10",
	.width	= 6,
	.height	= 10,
	.data	= fontdata_6x10,
	.pref	= 0,
};