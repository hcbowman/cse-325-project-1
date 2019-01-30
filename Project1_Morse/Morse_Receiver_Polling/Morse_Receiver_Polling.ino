#include <MorseReader.h>
MorseReader morse(2);
#define inputpin 2
#define outputpin 13
int flag = LOW;
int timed = 0;
int hi = 0;
int lo = 0;
bool start = false;
bool endW = false;
bool endS = false;


void setup()
{
Serial.begin(9600);
}

void loop()
{
  flag = digitalRead(inputpin);
  if (flag == HIGH)
  { 
    hi = hi + 1;
    //Serial.println (time);
    digitalWrite(outputpin, HIGH);
    //Serial.println (time);
    //flag = digitalRead(inputpin);

    start = true;
          
   } else if (flag == LOW && start == true)
   {
    
      lo = lo + 1;
      
      if (hi == 1 && lo == 1) {

        //Serial.print(" . ");
        //letter = letter + String(".");
        morse.ReadMorse(1);
        hi = 0;
        lo = 0;

        endW = false;
        endS = false;
      }
      if (lo == 2 && hi == 0 && endW == false && endS == false) {
        //Serial.print(letter);
        morse.ReadMorse(3);
        //Serial.println("nextLetter");

        hi = 0;
        lo = 0;

        endW = true;
        endS = false;
       
      } 

      if (lo == 1 && hi == 3 ) {

        //Serial.print(" - ");
        morse.ReadMorse(2);
        //letter = letter + String(".");
        hi = 0;
        lo = 0;

        endW = false;
        endS = false;
        
      }

      if (lo == 4 && hi == 0 && endW == true && endS == false) {

        //Serial.println("nextWord");
        morse.ReadMorse(4);
        hi = 0;
        lo = 0;

        endW = false;
        endS = true;
        
      }

      if (lo == 5 && hi == 0 && endS == true) {

        Serial.println("(End of String)");

        hi = 0;
        lo = 0;

        endW = false;
        endS = false;
        start = false;
        
      }
   
    digitalWrite(outputpin, LOW);   
   }

  // Serial.print("hi =");
  // Serial.println(hi);

  // Serial.print("lo =");
  // Serial.println(lo);

   
   
   //if (hi >= 10)
   //{
   //timed = lo - hi;
   //Serial.println(timed);
   //hi = 0;
   //lo = 0;
   //}
   delay(250);
}

