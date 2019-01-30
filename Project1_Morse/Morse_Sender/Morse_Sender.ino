#include <Morse.h>
Morse morse(9);
char input;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()) {
    input = Serial.read();//read the input
    if (input == 'a' || input == 'A') {morse.A();}//if the input is a or A go to function lA
    if (input == 'b' || input == 'B') {morse.B();}//same but with b letter
    if (input == 'c' || input == 'C') {morse.C();}
    if (input == 'd' || input == 'D') {morse.D();}
    if (input == 'e' || input == 'E') {morse.E();}
    if (input == 'f' || input == 'F') {morse.LF();}
    if (input == 'g' || input == 'G') {morse.G();}
    if (input == 'h' || input == 'H') {morse.H();}
    if (input == 'i' || input == 'I') {morse.I();}
    if (input == 'j' || input == 'J') {morse.J();}
    if (input == 'k' || input == 'K') {morse.K();}
    if (input == 'l' || input == 'L') {morse.L();}
    if (input == 'm' || input == 'M') {morse.M();}
    if (input == 'n' || input == 'N') {morse.N();}
    if (input == 'o' || input == 'O') {morse.O();}
    if (input == 'p' || input == 'P') {morse.P();}
    if (input == 'q' || input == 'Q') {morse.Q();}
    if (input == 'r' || input == 'R') {morse.R();}
    if (input == 's' || input == 'S') {morse.S();}
    if (input == 't' || input == 'T') {morse.T();}
    if (input == 'u' || input == 'U') {morse.U();}
    if (input == 'v' || input == 'V') {morse.V();}
    if (input == 'w' || input == 'W') {morse.W();}
    if (input == 'x' || input == 'X') {morse.X();}
    if (input == 'y' || input == 'Y') {morse.Y();}
    if (input == 'z' || input == 'Z') {morse.Z();}
    if (input == '1') {morse.N1();}// the numbers
    if (input == '2') {morse.N2();}
    if (input == '3') {morse.N3();}
    if (input == '4') {morse.N4();}
    if (input == '5') {morse.N5();}
    if (input == '6') {morse.N6();}
    if (input == '7') {morse.N7();}
    if (input == '8') {morse.N8();}
    if (input == '9') {morse.N9();}
    if (input == '0') {morse.N0();}
    if (input == ' ') {morse.spaceW();}//the space
    Serial.println (input);//print the latter saved in the input var
    
  }
  }
