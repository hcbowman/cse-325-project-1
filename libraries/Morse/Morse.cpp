/*
  Morse.cpp - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(750);
  digitalWrite(_pin, LOW);
  delay(250);
}

void Morse::spaceL()
{
    delay(500);
}

void Morse::spaceW()
{
    delay(1000);
}

void Morse::A()
{
    dot();
    dash();
    spaceL();
}

void Morse::B()
{
    dash();
    dot();
    dot();
    dot();
    spaceL();
}

void Morse::C()
{
    dash();
    dot();
    dash();
    dot();
    spaceL();
}

void Morse::D()
{
    dash();
    dot();
    dot();
    spaceL();
}

void Morse::E()
{
    dot();
    spaceL();
}

void Morse::LF()
{
    dot();
    dot();
    dash();
    dot();
    spaceL();
}

void Morse::G()
{
    dash();
    dash();
    dot();
    spaceL();
}
void Morse::H()
{
    dot();
    dot();
    dot();
    dot();
    spaceL();
}

void Morse::I()
{
    dot();
    dot();
    spaceL();
}

void Morse::J()
{
    dot();
    dash();
    dash();
    dash();
    spaceL();
    
}

void Morse::K()
{
    dash();
    dot();
    dash();
    spaceL();
}

void Morse::L()
{
    dot();
    dash();
    dot();
    dot();
    spaceL();
}

void Morse::M()
{
    dash();
    dash();
    spaceL();
}

void Morse::N()
{
    dash();
    dot();
    spaceL();
}

void Morse::O()
{
    dash();
    dash();
    dash();
    spaceL();
}

void Morse::P()
{
    dot();
    dash();
    dash();
    dot();
    spaceL();
}

void Morse::Q()
{
    dash();
    dash();
    dot();
    dash();
    spaceL();
}
void Morse::R()
{
    dot();
    dash();
    dot();
    spaceL();
}
void Morse::S()
{
    dot();
    dot();
    dot();
    spaceL();
}
void Morse::T()
{
    dash();
    spaceL();
}
void Morse::U()
{
    dot();
    dot();
    dash();
    spaceL();
}
void Morse::V()
{
    dot();
    dot();
    dot();
    dash();
    spaceL();
}
void Morse::W()
{
    dot();
    dash();
    dash();
    spaceL();
}
void Morse::X()
{
    dash();
    dot();
    dot();
    dash();
    spaceL();
}
void Morse::Y()
{
    dash();
    dot();
    dash();
    dash();
    spaceL();
}
void Morse::Z()
{
    dash();
    dash();
    dot();
    dot();
    spaceL();
}

void Morse::N0()
{
    dash();
    dash();
    dash();
    dash();
    dash();
    spaceL();
}
void Morse::N1()
{
    dot();
    dash();
    dash();
    dash();
    dash();
    spaceL();
    
}
void Morse::N2()
{
    dot();
    dot();
    dash();
    dash();
    dash();
    spaceL();
}
void Morse::N3()
{
    dot();
    dot();
    dot();
    dash();
    dash();
    spaceL();
}
void Morse::N4()
{
    dot();
    dot();
    dot();
    dot();
    dash();
    spaceL();
}
void Morse::N5()
{
    dot();
    dot();
    dot();
    dot();
    dot();
    spaceL();
    
}
void Morse::N6()
{
    dash();
    dot();
    dot();
    dot();
    dot();
    spaceL();
}
void Morse::N7()
{
    dash();
    dash();
    dot();
    dot();
    dot();
    spaceL();
    
}
void Morse::N8()
{
    dash();
    dash();
    dash();
    dot();
    dot();
    spaceL();
}
void Morse::N9()
{
    dash();
    dash();
    dash();
    dash();
    dot();
    spaceL();
}

