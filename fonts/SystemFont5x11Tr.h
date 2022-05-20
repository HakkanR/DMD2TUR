#include <inttypes.h>
#ifdef __AVR__
#include <avr/pgmspace.h>
#elif defined (ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif

#ifndef SYSTEM5x11TR_H
#define SYSTEM5x11TR_H

#define SYSTEM5x11TR_WIDTH 5
#define SYSTEM5x11TR_HEIGHT 11

#define SystemFont5x11Tr System5x11Tr
static const uint8_t System5x11Tr[] PROGMEM = {
    0x0, 0x14, // size of zero indicates fixed width font, actual length is width * height
    0x05, // width
    0x0c, // height
    0x14, // first char
    0x02, // char count
    
    //char Widths
    0x05, 0x05,

    // font data
	0x20,0x50,0x50,0x50,0x80,0x10,0x10,0x30,0x10,0x00,// ş		0x14
    0x18,0x24,0x24,0x24,0xc0,0x01,0x01,0x03,0x01,0x00// Ş       0x15    

};


#endif