///////////////////////////////////////////////////////////////
// Nama Project v1.0
// Instrument Arduino code.
// ------------------------------------------------------------
// Created by Luiz Zanotello on May/2012.
// Under Creative Commons License: CC BY-NC-SA 3.0.
// More information at: http://www.viraseres.com/nama
///////////////////////////////////////////////////////////////

//Accelerometer 1 (z) - bottom right
////////////////////////////////////
const int a1pinV = 11; //output current pin
const int a1pinZ = A0; //data pin

//Accelerometer 2 (z) - top right
/////////////////////////////////
const int a2pinV = 10; //output current pi
const int a2pinZ = A1; //data pin

//Central accelerometer (x/y)
/////////////////////////////
const int aCpinV = 13; //output current pin
const int aCpinX = A2; //data pin
const int aCpinY = A3; //data pin

//Accelerometer 3 (z) - top left
////////////////////////////////
const int a3pinV = 9; //output current pi
const int a3pinZ = A4; //data pin

//Accelerometer 4 (z) - bottom left
///////////////////////////////////
const int a4pinV = 8; //output current pi
const int a4pinZ = A5; //data pin

////////////////////////////////////////////////////////
// SoftwareSerial is used to communicate with the XBee
#include <SoftwareSerial.h>

SoftwareSerial XBee(0, 1); // Arduino RX, TX (XBee Dout, Din)

void setup()
{
  //Begin serial transmition:
  Serial.begin(115200);
  XBee.begin(115200);
  //Set output pins (+ current):
  pinMode(a1pinV, OUTPUT);
  digitalWrite(a1pinV, HIGH);
  pinMode(a2pinV, OUTPUT); 
  digitalWrite(a2pinV, HIGH);
  pinMode(aCpinV, OUTPUT); 
  digitalWrite(aCpinV, HIGH);
  pinMode(a3pinV, OUTPUT); 
  digitalWrite(a3pinV, HIGH);
  pinMode(a4pinV, OUTPUT); 
  digitalWrite(a4pinV, HIGH);
}

////////////////////////////////////////////////////////

void loop()
{
  // In loop() we continously check to see if a command has been
  //  received.
  if (XBee.available())
  {
    readAPin();  // Read analog pin
  }
}

void loop()
{ 
  // Printing analog data received from accelerometers
  Serial.println();
  Serial.print(5); // Number of accelerometers
  Serial.print(',');
  Serial.print(analogRead(a1pinZ)); // Accelerometer 1 reading (z)
  Serial.print(',');
  Serial.print(analogRead(a2pinZ)); // Accelerometer 2 reading (z)
  Serial.print(',');
  Serial.print(analogRead(a3pinZ)); // Accelerometer 3 reading (z)
  Serial.print(',');
  Serial.print(analogRead(a4pinZ)); // Accelerometer 4 reading (z)
  Serial.print(',');
  Serial.print(analogRead(aCpinX)); // Central accelerometer reading (x)
  Serial.print(',');
  Serial.print(analogRead(aCpinY)); // Central accelerometer reading (y)
  //Serial.print(tranG);
  delay(10);
}

////////////////////////////////////////////////////////
