//
//  MorseReader.h
//  
//
//  Created by Mark Christodoulou on 1/29/19.
//

#ifndef MorseReader_h
#define MorseReader_h

#include <stdio.h>

class MorseReader
{
public:
	MorseReader(int pin);
	void ReadMorse(int id);
	
};
#endif /* MorseReader_h */
