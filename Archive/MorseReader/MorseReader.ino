const byte ledPin = 13;// pin for on-board LED
const byte interruptPin = 2; // interrupt pin
volatile byte state = LOW; 
int time;// volatile parameter for interrupt fcn
void setup() {  
Serial.begin(9600);
pinMode(ledPin, OUTPUT);// set led pin as output  
pinMode(interruptPin, INPUT_PULLUP);     // set interrupt pin as input  
attachInterrupt(digitalPinToInterrupt(interruptPin), blink, HIGH);
} // attach an interrupt to pin 2 ( we need to convert it to actual pin)

void loop() {
  time = millis();
  digitalWrite(ledPin, state);  
  Serial.println (time); 
  delay(2000); 
}
  
  void blink() {
    state = !state;   // toggle the state
}

