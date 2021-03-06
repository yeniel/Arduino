//**************************************************************//
//  Name    : shiftOutCode, Hello World                                
//  Author  : Carlyn Maw,Tom Igoe, David A. Mellis 
//  Date    : 25 Oct, 2006    
//  Modified: 23 Mar 2010                                 
//  Version : 2.0                                             
//  Notes   : Code for using a 74HC595 Shift Register           //
//          : to count from 0 to 255                           
//****************************************************************

//Pin connected to ST_CP of 74HC595 GREEN
int latchPin = 8;
//Pin connected to SH_CP of 74HC595 YELLOW
int clockPin = 12;
////Pin connected to DS of 74HC595 BLUE
int dataPin = 11;



void setup() {
  //set pins to output so you can control the shift register
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFF);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFF);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFF);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFF);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFF);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFF);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFF);
  shiftOut(dataPin, clockPin, LSBFIRST, 0xFF);
  digitalWrite(latchPin, HIGH);

  delay(1000);
}
