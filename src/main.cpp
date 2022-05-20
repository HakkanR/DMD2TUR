#include "main.h"
byte panelsWide = 1, panelsHigh = 1, pinNoe = 9, pinA = 6, pinB = 7, pinSCK = 8, pinCLK = 52, pinDATA = 51;
int BoxLeft = 0, BoxTop = 0, BoxWidth = 32, BoxHeight = 16;
byte brightness = 2;
//String Text = "ıİĞğÖöÜüÇçŞş";
String Text = "P10\rTürkçe";


void setup()
{
  Serial.begin(115200);
  SoftDMD dmd(panelsWide, panelsHigh, pinNoe, pinA, pinB, pinSCK, pinCLK, pinDATA);
  BoxTr box(dmd, BoxLeft, BoxTop, BoxWidth, BoxHeight);
  //DMD_TextBox box(dmd, BoxLeft, BoxTop, BoxWidth, BoxHeight);
  dmd.setBrightness(brightness);
  //dmd.selectFont(Droid_Sans_12);
  dmd.selectFont(System5x7TR);
  dmd.begin();
  box.print(Text);
   //box.print((char)(0x7F));
  //box.print((char)128);
  // box.print((char)(0x7F));

  while (1)
    ;
}

void loop()
{
  // put your main code here, to run repeatedly:
}