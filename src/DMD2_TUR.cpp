#include "DMD2.h"
#include "DMD2TUR.h"
// DMD_TextBox *boxPtr = nullptr;
BoxTr::BoxTr(DMDFrame &dmd, int left, int top, int width, int height)
    : box(DMD_TextBox(dmd, left, top, width, height))
{
    // DMD_TextBox box(dmd, left, top, width, height);
    boxPtr = &box;
}
void BoxTr::clear() { boxPtr->clear(); }
void BoxTr::reset() { boxPtr->reset(); }
void BoxTr::scrollX(int scrollBy) { boxPtr->scrollX(scrollBy); }
void BoxTr::scrollY(int scrollBy) { boxPtr->scrollY(scrollBy); }
void BoxTr::invertDisplay() { boxPtr->invertDisplay(); }
void BoxTr::resetFs()
{
    f195 = f196 = f197 = 0;
    sent = 1;
}
size_t BoxTr::write(uint8_t character)
{
 
    if (character == 195)
    {
        f195 = 1;
        sent = 0;
        return 1;
    }
    if (character == 196)
    {
        f196 = 1;
        sent = 0;
        return 1;
    }
    if (character == 197)
    {
        f197 = 1;
        sent = 0;
        return 1;
    }
    if (f196 == 1)
    {
        resetFs();
        if (character == 177) // ı
            character = 0x1F;
        else if (character == 176) // İ
            character = 0x1E;
        else if (character == 158) // Ğ
            character = 0x1D;
        else if (character == 159) // ğ
            character = 0x1C;
    }

    if (f195 == 1)
    {
        resetFs();
        if (character == 182) // ö
            character = 0x1b;
        else if (character == 150) // Ö
            character = 0x1a;
        else if (character == 156) // Ü
            character = 0x19;
        else if (character == 188) // ü
            character = 0x18;
        else if (character == 135) // Ç
            character = 0x17;
        else if (character == 167) // ç
            character = 0x16;
    }
    if (f197 == 1)
    {
        resetFs();
        if (character == 158) // Ş
            character = 0x15;
        else if (character == 159) // ş
            character = 0x14;
    }

    if (sent)
        return box.write(character);
    return 1;
}
