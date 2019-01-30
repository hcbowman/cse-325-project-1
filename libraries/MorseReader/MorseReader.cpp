//
//  MorseReader.cpp
//  
//
//  Created by Mark Christodoulou on 1/29/19.
//

#include "MorseReader.h"
#include "Arduino.h"
int letter [] = {0,0,0,0,0};

MorseReader::MorseReader(int pin)
{
	pinMode(pin, INPUT);
}

void MorseReader::ReadMorse(int id)
{
	if(id == 1 || id == 2)
	{
		if(letter[0] == 0)
			{
				letter[0] = id;
			}
		else if(letter[1] == 0)
			{
				letter[1] = id;
			}
		else if(letter[2] == 0)
			{
				letter[2] = id;
			}
		else if(letter[3] == 0)
			{
				letter[3] = id;
			}
		else if(letter[4] == 0)
			{
				letter[4] = id;
			}
	}
	else if(id == 3)
	{
		if(letter[0] == 1 && letter[1] == 2 && letter[2] == 0 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("A");
		}
		if(letter[0] == 2 && letter[1] == 1 && letter[2] == 1 && letter[3] == 1 && letter[4] == 0)
		{
			Serial.print("B");
		}
		if(letter[0] == 2 && letter[1] == 1 && letter[2] == 2 && letter[3] == 1 && letter[4] == 0)
		{
			Serial.print("C");
		}
		if(letter[0] == 2 && letter[1] == 1 && letter[2] == 1 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("D");
		}
		if(letter[0] == 1 && letter[1] == 0 && letter[2] == 0 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("E");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 2 && letter[3] == 1 && letter[4] == 0)
		{
			Serial.print("F");
		}
		if(letter[0] == 2 && letter[1] == 2 && letter[2] == 1 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("G");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 1 && letter[3] == 1 && letter[4] == 0)
		{
			Serial.print("H");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 0 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("I");
		}
		if(letter[0] == 1 && letter[1] == 2 && letter[2] == 2 && letter[3] == 2 && letter[4] == 0)
		{
			Serial.print("J");
		}
		if(letter[0] == 2 && letter[1] == 1 && letter[2] == 2 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("K");
		}
		if(letter[0] == 1 && letter[1] == 2 && letter[2] == 1 && letter[3] == 1 && letter[4] == 0)
		{
			Serial.print("L");
		}
		if(letter[0] == 2 && letter[1] == 2 && letter[2] == 0 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("M");
		}
		if(letter[0] == 2 && letter[1] == 1 && letter[2] == 0 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("N");
		}
		if(letter[0] == 2 && letter[1] == 2 && letter[2] == 2 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("O");
		}
		if(letter[0] == 1 && letter[1] == 2 && letter[2] == 2 && letter[3] == 1 && letter[4] == 0)
		{
			Serial.print("P");
		}
		if(letter[0] == 2 && letter[1] == 2 && letter[2] == 1 && letter[3] == 2 && letter[4] == 0)
		{
			Serial.print("Q");
		}
		if(letter[0] == 1 && letter[1] == 2 && letter[2] == 1 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("R");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 1 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("S");
		}
		if(letter[0] == 2 && letter[1] == 0 && letter[2] == 0 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("T");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 2 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("U");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 1 && letter[3] == 2 && letter[4] == 0)
		{
			Serial.print("V");
		}
		if(letter[0] == 1 && letter[1] == 2 && letter[2] == 2 && letter[3] == 0 && letter[4] == 0)
		{
			Serial.print("W");
		}
		if(letter[0] == 2 && letter[1] == 1 && letter[2] == 1 && letter[3] == 2 && letter[4] == 0)
		{
			Serial.print("X");
		}
		if(letter[0] == 2 && letter[1] == 1 && letter[2] == 2 && letter[3] == 2 && letter[4] == 0)
		{
			Serial.print("Y");
		}
		if(letter[0] == 2 && letter[1] == 2 && letter[2] == 1 && letter[3] == 1 && letter[4] == 0)
		{
			Serial.print("Z");
		}
		if(letter[0] == 2 && letter[1] == 2 && letter[2] == 2 && letter[3] == 2 && letter[4] == 2)
		{
			Serial.print("0");
		}
		if(letter[0] == 1 && letter[1] == 2 && letter[2] == 2 && letter[3] == 2 && letter[4] == 2)
		{
			Serial.print("1");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 2 && letter[3] == 2 && letter[4] == 2)
		{
			Serial.print("2");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 1 && letter[3] == 2 && letter[4] == 2)
		{
			Serial.print("3");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 1 && letter[3] == 1 && letter[4] == 2)
		{
			Serial.print("4");
		}
		if(letter[0] == 1 && letter[1] == 1 && letter[2] == 1 && letter[3] == 1 && letter[4] == 1)
		{
			Serial.print("5");
		}
		if(letter[0] == 2 && letter[1] == 1 && letter[2] == 1 && letter[3] == 1 && letter[4] == 1)
		{
			Serial.print("6");
		}
		if(letter[0] == 2 && letter[1] == 2 && letter[2] == 1 && letter[3] == 1 && letter[4] == 1)
		{
			Serial.print("7");
		}
		if(letter[0] == 2 && letter[1] == 2 && letter[2] == 2 && letter[3] == 1 && letter[4] == 1)
		{
			Serial.print("8");
		}
		if(letter[0] == 2 && letter[1] == 2 && letter[2] == 2 && letter[3] == 2 && letter[4] == 1)
		{
			Serial.print("9");
		}
	
		letter[0] = 0;
		letter[1] = 0;
		letter[2] = 0;
		letter[3] = 0;
		letter[4] = 0;
	}
	else if (id == 4)
	{
		Serial.print(" ");
		letter[0] = 0;
		letter[1] = 0;
		letter[2] = 0;
		letter[3] = 0;
		letter[4] = 0;
	}
	
}