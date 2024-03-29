//
// Created by GLCD_FC2_compatible on 22.04.2023
//
//   Font Name				: calibri16_Tr
//   Orig. Name				: Calibri
//
//   Start Char				: 014 'ş'
//   End Char				: 126 '~'
//   # Chars				: 107
//
//   Height					: 16
//   Width					: 9
//
//   Monospace				: False
//   Bold					: False
//   Italic					: False
//   Underline				: False
//   Strikeout				: False
//   TR Char Support	  	: YES
// 						      modified by HakkanR hakkanr@gmail.com | www.devrelerim.com
// 						      This font file can be used with DMD2 library.
// 						      to use Turkish char support DMD2TUR library should be
// 						      download at https : // github.com/HakkanR/DMD2TUR
//

//  struct _FONT_
//  {
//  	uint16_t font_Size_in_Bytes_over_all_included_Size_it_self;
//  	uint8_t font_Width_in_Pixel_for_fixed_drawing;
//  	uint8_t font_Height_in_Pixel_for_all_characters;
//  	unit8_t font_First_Char;
//  	uint8_t font_Char_Count;
//  	uint8_t font_Char_Widths[font_Last_Char - font_First_Char + 1];
//  	// for each character the separate width in pixels,
//  	// characters < 128 have an implicit virtual right empty row
//  	uint8_t font_data[];
//  	// bit field of all characters

#include <inttypes.h>
#ifdef __AVR__
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif

#ifndef _CALIBRI_H_
#define _CALIBRI_H_

#define CALIBRI_WIDTH 9
#define CALIBRI_HEIGHT 16

																		   static const uint8_t calibri16_Tr[] PROGMEM = {
	0x03, 0xD3, // size
	0x09,		// width
	0x10,		// height
	0x14,		// first char
	0x6B,		// char count

	// char widths
	0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x04, 0x05, 0x05, 0x01, 0x01,
	0x04, 0x02, 0x03, 0x05, 0x05, 0x07, 0x06, 0x01, 0x02, 0x02, 0x03, 0x05, 0x02, 0x03, 0x01, 0x04,
	0x04, 0x04, 0x04, 0x04, 0x05, 0x04, 0x04, 0x05, 0x05, 0x04, 0x01, 0x02, 0x05, 0x04, 0x04, 0x04,
	0x08, 0x06, 0x05, 0x05, 0x05, 0x04, 0x04, 0x05, 0x05, 0x01, 0x03, 0x04, 0x04, 0x08, 0x05, 0x05,
	0x04, 0x06, 0x04, 0x04, 0x05, 0x05, 0x06, 0x09, 0x05, 0x05, 0x05, 0x02, 0x04, 0x02, 0x04, 0x06,
	0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x04, 0x01, 0x02, 0x04, 0x01, 0x07, 0x04, 0x04,
	0x04, 0x04, 0x03, 0x03, 0x03, 0x04, 0x05, 0x08, 0x04, 0x05, 0x04, 0x03, 0x01, 0x02, 0x05,

	// font data
	0xc0, 0x40, 0x40,
	0x14, 0x1D, 0x07, // char (115) 'ş'

	0x60, 0x90, 0x90, 0x30,
	0x16, 0x14, 0x0C, 0x03, // char (083) 'Ş'

	0x80, 0x40, 0x40, 0x40,
	0x03, 0x14, 0x14, 0x0C, // char (099) 'ç'

	0xe0, 0x30, 0x10, 0x10, 0x20,
	0x03, 0x16, 0x14, 0x0C, 0x02, // char (067) 'Ç'

	0xd0, 0x00, 0x00, 0xd0,
	0x07, 0x04, 0x04, 0x07, // char (117) 'ü'

	0xf0, 0x04, 0x00, 0x04, 0xf0,
	0x03, 0x04, 0x04, 0x04, 0x03, // char (085) 'Ü'

	0xe0, 0x14, 0x10, 0x14, 0xe0,
	0x03, 0x04, 0x04, 0x04, 0x03, // char (079) 'Ö'

	0xd0, 0x40, 0x40, 0xd0,
	0x07, 0x04, 0x04, 0x07, // char (111) 'ö'

	0xc8, 0x50, 0x50, 0xd0, 0x48,
	0x1b, 0x15, 0x15, 0x15, 0x0c, // char (103) 'ğ'

	0xe0, 0x32, 0x14, 0x94, 0xb2,
	0x03, 0x06, 0x04, 0x04, 0x07, // char (071) 'Ğ'

	0xf4,
	0x07, // char (073) 'İ'

	0xc0,
	0x07, // char (105) 'ı'

	0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, // char (032) ' '

	0xf0, 0x00,
	0x04, 0x04, // char (033) '!'

	0x70, 0x00, 0x30,
	0x00, 0x00, 0x00, // char (034) '"'

	0x40, 0xe0, 0x40, 0xc0, 0x70,
	0x01, 0x07, 0x01, 0x07, 0x01, // char (035) '#'

	0x00, 0x70, 0x90, 0x90, 0x10,
	0x04, 0x04, 0x0c, 0x04, 0x03, // char (036) '$'

	0xf0, 0x90, 0xf0, 0x00, 0xc0, 0xa0, 0x90,
	0x00, 0x04, 0x02, 0x01, 0x07, 0x04, 0x07, // char (037) '%'

	0x20, 0xd0, 0x50, 0x70, 0x00, 0x00,
	0x07, 0x04, 0x05, 0x06, 0x03, 0x04, // char (038) '&'

	0x70,
	0x00, // char (039) '''

	0xe0, 0x18,
	0x07, 0x18, // char (040) '('

	0x18, 0xe0,
	0x18, 0x07, // char (041) ')'

	0x30, 0x78, 0x30,
	0x00, 0x00, 0x00, // char (042) '*'

	0x80, 0x80, 0xe0, 0x80, 0x80,
	0x00, 0x00, 0x03, 0x00, 0x00, // char (043) '+'

	0x00, 0x00,
	0x10, 0x0c, // char (044) ','

	0x00, 0x00, 0x00,
	0x01, 0x01, 0x01, // char (045) '-'

	0x00,
	0x04, // char (046) '.'

	0x00, 0x00, 0xe0, 0x18,
	0x18, 0x07, 0x00, 0x00, // char (047) '/'

	0xe0, 0x10, 0x10, 0xf0,
	0x07, 0x04, 0x04, 0x03, // char (048) '0'

	0x20, 0x10, 0xf0, 0x00,
	0x04, 0x04, 0x07, 0x04, // char (049) '1'

	0x20, 0x10, 0x90, 0xe0,
	0x04, 0x06, 0x05, 0x04, // char (050) '2'

	0x10, 0x90, 0x90, 0x70,
	0x04, 0x04, 0x04, 0x03, // char (051) '3'

	0xc0, 0x60, 0x10, 0xf0, 0x00,
	0x01, 0x01, 0x01, 0x07, 0x01, // char (052) '4'

	0xf0, 0x90, 0x90, 0x10,
	0x04, 0x04, 0x04, 0x03, // char (053) '5'

	0xe0, 0x90, 0x90, 0x90,
	0x03, 0x04, 0x04, 0x03, // char (054) '6'

	0x10, 0x10, 0x90, 0xf0, 0x30,
	0x00, 0x06, 0x03, 0x00, 0x00, // char (055) '7'

	0x60, 0x90, 0x90, 0x90, 0x60,
	0x03, 0x04, 0x04, 0x04, 0x03, // char (056) '8'

	0xe0, 0x90, 0x90, 0xe0,
	0x04, 0x04, 0x04, 0x03, // char (057) '9'

	0x40,
	0x04, // char (058) ':'

	0x00, 0x40,
	0x10, 0x0c, // char (059) ';'

	0x80, 0x80, 0x40, 0x40, 0x20,
	0x00, 0x00, 0x01, 0x01, 0x02, // char (060) '<'

	0x80, 0x80, 0x80, 0x80,
	0x02, 0x02, 0x02, 0x02, // char (061) '='

	0x20, 0x40, 0x40, 0x80,
	0x02, 0x01, 0x01, 0x00, // char (062) '>'

	0x10, 0x90, 0x90, 0x60,
	0x00, 0x05, 0x00, 0x00, // char (063) '?'

	0xc0, 0x20, 0x90, 0x50, 0x50, 0xd0, 0x10, 0xe0,
	0x07, 0x0c, 0x0b, 0x0a, 0x0a, 0x0b, 0x02, 0x01, // char (064) '@'

	0x00, 0x80, 0x70, 0x30, 0xc0, 0x00,
	0x04, 0x03, 0x01, 0x01, 0x01, 0x06, // char (065) 'A'

	0xf0, 0x90, 0x90, 0x90, 0x60,
	0x07, 0x04, 0x04, 0x04, 0x03, // char (066) 'B'

	0xe0, 0x30, 0x10, 0x10, 0x20,
	0x03, 0x06, 0x04, 0x04, 0x02, // char (067) 'C'

	0xf0, 0x10, 0x10, 0x30, 0xe0,
	0x07, 0x04, 0x04, 0x06, 0x03, // char (068) 'D'

	0xf0, 0x90, 0x90, 0x90,
	0x07, 0x04, 0x04, 0x04, // char (069) 'E'

	0xf0, 0x90, 0x90, 0x90,
	0x07, 0x00, 0x00, 0x00, // char (070) 'F'

	0xe0, 0x30, 0x10, 0x90, 0xb0,
	0x03, 0x06, 0x04, 0x04, 0x07, // char (071) 'G'

	0xf0, 0x80, 0x80, 0x80, 0xf0,
	0x07, 0x00, 0x00, 0x00, 0x07, // char (072) 'H'

	0xf0,
	0x07, // char (073) 'I'

	0x00, 0x00, 0xf0,
	0x04, 0x04, 0x07, // char (074) 'J'

	0xf0, 0x80, 0x60, 0x10,
	0x07, 0x00, 0x01, 0x06, // char (075) 'K'

	0xf0, 0x00, 0x00, 0x00,
	0x07, 0x04, 0x04, 0x04, // char (076) 'L'

	0xf0, 0x30, 0xc0, 0x00, 0x00, 0xc0, 0x30, 0xf0,
	0x07, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x07, // char (077) 'M'

	0xf0, 0x30, 0xc0, 0x00, 0xf0,
	0x07, 0x00, 0x00, 0x07, 0x07, // char (078) 'N'

	0xe0, 0x10, 0x10, 0x10, 0xe0,
	0x03, 0x04, 0x04, 0x04, 0x03, // char (079) 'O'

	0xf0, 0x90, 0x90, 0x60,
	0x07, 0x00, 0x00, 0x00, // char (080) 'P'

	0xe0, 0x10, 0x10, 0x10, 0xe0, 0x00,
	0x03, 0x04, 0x04, 0x04, 0x07, 0x08, // char (081) 'Q'

	0xf0, 0x90, 0x90, 0x60,
	0x07, 0x00, 0x00, 0x07, // char (082) 'R'

	0x60, 0x90, 0x90, 0x30,
	0x06, 0x04, 0x04, 0x03, // char (083) 'S'

	0x10, 0x10, 0xf0, 0x10, 0x10,
	0x00, 0x00, 0x07, 0x00, 0x00, // char (084) 'T'

	0xf0, 0x00, 0x00, 0x00, 0xf0,
	0x03, 0x04, 0x04, 0x04, 0x03, // char (085) 'U'

	0x30, 0xe0, 0x00, 0x00, 0xe0, 0x30,
	0x00, 0x01, 0x07, 0x07, 0x00, 0x00, // char (086) 'V'

	0x10, 0xf0, 0x00, 0xc0, 0x70, 0xf0, 0x00, 0x80, 0x70,
	0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x07, 0x07, 0x00, // char (087) 'W'

	0x10, 0x70, 0xc0, 0xc0, 0x30,
	0x04, 0x03, 0x01, 0x01, 0x06, // char (088) 'X'

	0x10, 0x60, 0x80, 0x60, 0x10,
	0x00, 0x00, 0x07, 0x00, 0x00, // char (089) 'Y'

	0x10, 0x10, 0x90, 0x70, 0x10,
	0x04, 0x07, 0x04, 0x04, 0x04, // char (090) 'Z'

	0xf8, 0x08,
	0x1f, 0x10, // char (091) '['

	0x08, 0x70, 0x80, 0x00,
	0x00, 0x00, 0x03, 0x0c, // char (092) '\'

	0x08, 0xf8,
	0x10, 0x1f, // char (093) ']'

	0xe0, 0x10, 0x60, 0x80,
	0x00, 0x00, 0x00, 0x00, // char (094) '^'

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // char (095) '_'

	0x08, 0x10,
	0x00, 0x00, // char (096) '`'

	0x40, 0x40, 0x40, 0xc0,
	0x07, 0x05, 0x05, 0x07, // char (097) 'a'

	0xf0, 0x40, 0x40, 0x80,
	0x07, 0x04, 0x04, 0x03, // char (098) 'b'

	0x80, 0x40, 0x40, 0x40,
	0x03, 0x04, 0x04, 0x04, // char (099) 'c'

	0x80, 0x40, 0x40, 0xf0,
	0x03, 0x04, 0x04, 0x07, // char (100) 'd'

	0x80, 0x40, 0x40, 0x80,
	0x03, 0x05, 0x05, 0x05, // char (101) 'e'

	0x40, 0xf0, 0x50, 0x10,
	0x00, 0x07, 0x00, 0x00, // char (102) 'f'

	0xc0, 0x40, 0x40, 0xc0, 0x40,
	0x1b, 0x15, 0x15, 0x15, 0x0c, // char (103) 'g'

	0xf0, 0x40, 0x40, 0xc0,
	0x07, 0x00, 0x00, 0x07, // char (104) 'h'

	0xd0,
	0x07, // char (105) 'i'

	0x00, 0xd0,
	0x10, 0x1f, // char (106) 'j'

	0xf0, 0x00, 0x80, 0x40,
	0x07, 0x01, 0x02, 0x04, // char (107) 'k'

	0xf0,
	0x07, // char (108) 'l'

	0xc0, 0x40, 0x40, 0xc0, 0x40, 0x40, 0xc0,
	0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, // char (109) 'm'

	0xc0, 0x40, 0x40, 0xc0,
	0x07, 0x00, 0x00, 0x07, // char (110) 'n'

	0xc0, 0x40, 0x40, 0xc0,
	0x07, 0x04, 0x04, 0x07, // char (111) 'o'

	0xc0, 0x40, 0x40, 0x80,
	0x1f, 0x04, 0x04, 0x03, // char (112) 'p'

	0x80, 0x40, 0x40, 0xc0,
	0x03, 0x04, 0x04, 0x1f, // char (113) 'q'

	0xc0, 0x40, 0x40,
	0x07, 0x00, 0x00, // char (114) 'r'

	0xc0, 0x40, 0x40,
	0x04, 0x05, 0x07, // char (115) 's'

	0x40, 0xe0, 0x40,
	0x00, 0x07, 0x04, // char (116) 't'

	0xc0, 0x00, 0x00, 0xc0,
	0x07, 0x04, 0x04, 0x07, // char (117) 'u'

	0x40, 0x80, 0x00, 0x00, 0xc0,
	0x00, 0x01, 0x06, 0x06, 0x01, // char (118) 'v'

	0x40, 0x80, 0x00, 0xc0, 0xc0, 0x00, 0x80, 0x40,
	0x00, 0x03, 0x06, 0x01, 0x01, 0x06, 0x03, 0x00, // char (119) 'w'

	0x40, 0x80, 0x80, 0x40,
	0x04, 0x03, 0x03, 0x04, // char (120) 'x'

	0xc0, 0x00, 0x00, 0x80, 0x40,
	0x00, 0x13, 0x0c, 0x03, 0x00, // char (121) 'y'

	0x40, 0x40, 0xc0, 0x40,
	0x06, 0x07, 0x05, 0x04, // char (122) 'z'

	0x80, 0x70, 0x08,
	0x00, 0x0f, 0x10, // char (123) '{'

	0xf8,
	0x1f, // char (124) '|'

	0x78, 0x80,
	0x1e, 0x01, // char (125) '}'

	0x60, 0x20, 0x60, 0x40, 0x60,
	0x00, 0x00, 0x00, 0x00, 0x00 // char (126) '~'

};

#endif
