//////////////////////////////////////////////////////////////////////////////////////////////
// Nama Project v1.0
// Instrument data receiver.
// -------------------------------------------------------------------------------------------
// All codes created by Luiz Zanotello on May/2012.
// Under Creative Commons License: CC BY-NC-SA 3.0.
// More information at: http://www.viraseres.com/nama
//////////////////////////////////////////////////////////////////////////////////////////////

// General configuration
int baudRate = 115200; //Baud rate 
int serialPort = 0; //Serial port
boolean isPrinting = true; //Print to post?

// Libraries
import processing.serial.*;
import processing.opengl.*;

//////////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  size(1200, 600, OPENGL);
  beginSerial();
  setupFonts();
  smooth();
}

void draw() {
  background(230, 230, 212);
  visualizeData();
  if (isPrinting==true) {
    printValues();
  }
}

void printValues() {
  println("AC NAME / RAW / FILTERED / DIFFERENCE / FILTERED DIFFERENCE");
  println("A1(z): "+acData[1][0]+" / "+acData[1][1]+" / "+acData[1][2]+" / "+acData[1][3]);
  println("A2(z): "+acData[2][0]+" / "+acData[2][1]+" / "+acData[2][2]+" / "+acData[2][3]);
  println("A3(z): "+acData[3][0]+" / "+acData[3][1]+" / "+acData[3][2]+" / "+acData[3][3]);
  println("A4(z): "+acData[4][0]+" / "+acData[4][1]+" / "+acData[4][2]+" / "+acData[4][3]);
  println("A5(x): "+acData[5][0]+" / "+acData[5][1]+" / "+acData[5][2]+" / "+acData[5][3]);
  println("A5(y): "+acData[6][0]+" / "+acData[6][1]+" / "+acData[6][2]+" / "+acData[6][3]);
  println("AV(z): "+acData[0][0]+" / "+acData[0][1]+" / "+acData[0][2]+" / "+acData[0][3]);
  println();
}



