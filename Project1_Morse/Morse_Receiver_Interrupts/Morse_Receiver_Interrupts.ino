#include <MorseReader.h>
MorseReader morse(2);
const byte ledPin = 13;// pin for on-board LED
const byte interruptPin = 2; // interrupt pin
//volatile byte state = LOW; 
int t1;
int t2;
int t3;
int even = 0;
int start = false;
// volatile parameter for interrupt fcn
void setup() {  
Serial.begin(9600);
pinMode(ledPin, OUTPUT);// set led pin as output  
pinMode(interruptPin, INPUT_PULLUP);     // set interrupt pin as input  
attachInterrupt(digitalPinToInterrupt(interruptPin), blinker, CHANGE);
//attachInterrupt(digitalPinToInterrupt(interruptPin), whilelow, LOW);
//attachInterrupt(digitalPinToInterrupt(interruptPin), blink2, FALLING);
} // attach an interrupt to pin 2 ( we need to convert it to actual pin)

void loop() {
  //time = millis();
  //digitalWrite(ledPin, state);
  noInterrupts();
  t3 = millis();
  if( (t3 -t2) > 1950 && start == true)
  {
    morse.ReadMorse(3);
    start == false;
  }
  interrupts();
}
  
  void blinker() {
    //state = !state;
    if (even % 2 == 0)
    {
      t1 = millis();
      //Serial.print(t1);
      //Serial.println(t1);
      even++;
    }
    else
    {
      t2 = millis();
      //Serial.println(t2);
      start = true;
      even++;
    }
    if((t2 - t1) > 150 && (t2 - t1) < 350 && start == true)
    {
      morse.ReadMorse(1);
      
    }
    else if((t2 - t1) > 650 && (t2 - t1) < 850 && start == true)
    {
      morse.ReadMorse(2);
  
    }
    else if((t1 - t2) > 1000 && (t1 - t2) < 1850 && start == true)
    {
      morse.ReadMorse(3);
      morse.ReadMorse(4);
      
    }
    else if((t1 - t2) > 650 && (t1 - t2) < 850 && start == true)
    {
      morse.ReadMorse(3);
 
    }
    
       
}



