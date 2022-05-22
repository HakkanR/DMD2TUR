# DMD2TUR

DMD2TUR is an Arduino library works with DMD2 Library. It brings you to write turkish letters freely.

**This library is not the library can drive dot matix displays (e.g.p10) itself. It has a dependecy on DMD2 library can be found this link->** [DMD2 library](http://github.com/freetronics/DMD2) 

If you find any bugs, please use the Issues feature in github to report them or [Contact me on my web page](https://www.devrelerim.com).

## Basic Usage
This library needs to be used its own font files located include/TrFonts folder. DMD2 fonts are not supported Turkish letters. So, your includes should be like below :

*(You don't need to include DMD2 lib)*
```cpp
    #include <DMD2TUR.h>
    #include <TrFonts/System5x7Tr.h>
```

Your code like below :
```cpp
    SoftDMD dmd(panelsWidth, panelsHigh);
    BoxTr box(dmd);
    dmd.selectFont(System5x7Tr);
    dmd.begin();
    box.print("Türkçe");
```

## Notice if you work with Arduino Mega

Connect P10 panel pins to Arduino Mega pins like definition.
```cpp
    byte pinNoe = 9, pinA = 6, pinB = 7, pinSCK = 8, pinCLK = 52, pinDATA = 51;
```
and SoftDMD instance should be like below:

```cpp
    byte pinNoe = 9, pinA = 6, pinB = 7, pinSCK = 8, pinCLK = 52, pinDATA = 51;
    SoftDMD dmd(panelsWide, panelsHigh, pinNoe, pinA, pinB, pinSCK, pinCLK, pinDATA);
```

## Dependencies
 * [DMD2 library](http://github.com/freetronics/DMD2) 

## Fonts can be used
* System5x7TR
* Arial_Black_16TR

## Fonts will be added

* Droid Sans 12
* Droid Sans 16
* Droid Sans 24