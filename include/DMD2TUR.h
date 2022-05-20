#ifndef DMD2TUR_H_
#define DMD2TUR_H_
#include "DMD2.h"

class BoxTr : public Print
{
public:
    BoxTr(DMDFrame &dmd, int left = 0, int top = 0, int width = 0, int height = 0);
    virtual size_t write(uint8_t);
    void clear();
    void reset();
    void invertDisplay();
    void scrollY(int scrollBy);
    void scrollX(int scrollBy);

private:
    DMD_TextBox *boxPtr;
    DMD_TextBox box;
    uint8_t f195 = 0, f196 = 0, f197 = 0;
    uint8_t sent = 1;

private:
    void resetFs();
};

#endif