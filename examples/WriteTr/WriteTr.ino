/*
 * Write Turkish Letters
 * 
 * date     20 May 2022
 * author   Hakan OZMEN
 * contact  hakkanr@gmail.com
 * 
 */

#include <SPI.h>
#include <DMD2TUR.h>
#include <TrFonts/SystemFont5x7Tr.h>

// Set Width to number of displays wide you have
const int PWIDTH = 1;

// Set how high number of displays you have
const int PHIGH = 1;

// Set Font
const uint8_t *FONT = System5x7TR;

const char *msg = "P10 Türkçe";

SoftDMD dmd(PWIDTH,PHIGH);
BoxTr box(dmd);

void setup() {
  Serial.begin(115200);
  dmd.setBrightness(15);
  dmd.selectFont(FONT);
  dmd.begin();
}

void loop() {
  const char *next = msg;
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(200);
    next++;
  }
}