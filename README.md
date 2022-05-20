# DMD2TUR

DMD2TUR is an Arduino library works with DMD2 Library. It brings you to write turkish letters freely.

**This library is not the library can drive dot matix displays (e.g.p10) itsefs. It has a dependecy on DMD2 library can be found this link->** [DMD2 library](http://github.com/freetronics/DMD2) 

If you find any bugs, please use the Issues feature in github to report them or [Contact me on my web page](https://www.devrelerim.com).

## Basic Usage

```cpp
    SoftDMD dmd(panelsWidth, panelsHigh);
    BoxTr box(dmd);
    dmd.selectFont(System5x7Tr);
    dmd.begin();
    box.print("Türkçe");
```

## Notice if you work with Arduino Mega

Use SoftDMD instance like below:

```cpp
    SoftDMD dmd(panelsWide, panelsHigh, pinNoe, pinA, pinB, pinSCK, pinCLK, pinDATA);
```

## Dependencies
 * [DMD2 library](http://github.com/freetronics/DMD2) 

## Fonts can be used
* System5x7Tr

## Fonts will be added

* Arial Black 16
* Droid Sans 12
* Droid Sans 16
* Droid Sans 24