/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void spaceL();
    void spaceW();
    void A();
    void B();
    void C();
    void D();
    void E();
    void LF();
    void G();
    void H();
    void I();
    void J();
    void K();
    void L();
    void M();
    void N();
    void O();
    void P();
    void Q();
    void R();
    void S();
    void T();
    void U();
    void V();
    void W();
    void X();
    void Y();
    void Z();
    void N0();
    void N1();
    void N2();
    void N3();
    void N4();
    void N5();
    void N6();
    void N7();
    void N8();
    void N9();
  private:
    int _pin;
};

#endif
