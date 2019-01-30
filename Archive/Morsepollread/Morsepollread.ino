#define inputpin 2
#define outputpin 13
int flag = LOW;
int timed = 0;
int hi = 0;
int lo = 0;
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
          
   } else if (flag == LOW)
   { 
   lo = lo + 1;
    digitalWrite(outputpin, LOW);     
   }

   Serial.println(hi);
   Serial.println(lo);

   
   
   //if (hi >= 10)
   //{
   //timed = lo - hi;
   //Serial.println(timed);
   //hi = 0;
   //lo = 0;
   //}
   delay(25);
}


