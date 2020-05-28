#include <Adafruit_CircuitPlayground.h>
#include "Pitch.h"
#include "accel.h"
#include "leds.h"

//
led Colors[] = 
{
  {0, 150, 150, 250},
  {1, 0, 150, 0},
  {2, 50, 0, 250},
  {3, 10, 0, 250},
  {4, 25, 0, 250},
  {5, 250, 0, 250},
  {6, 250, 0, 250},
  {7, 250, 0, 250},
  {8, 250, 0, 250},  
  {9, 250, 0, 250},
  };
//
//int ledPattern = 


Note Melody[] = 
{
  {B_3, 1},
  {C_7, 1},
  {Fs_7, 1},
  {E_7, 2},
};

void setup() {
  CircuitPlayground.begin();
  SetBPM(400.0);
  SetRhythmMode(Eastern);
  CircuitPlayground.setBrightness(255);

  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
//  CircuitPlayground.setPixelColor(0, 255,   0,   0);
//  PixelColors(Colors, 10);
//  
//  PlayNote(C_4, 1);
//  PlayNote(61, 1);
//  PlayNote(62, 2);
//  PlayNote(63, 1);
//  PlayNote(64, 1);
//  PlayNote(65.7, 2);
//
//  PlayNotes(Melody, 8);

  float x,y,z;
  x = CircuitPlayground.motionX();
  y = CircuitPlayground.motionY();
  z = CircuitPlayground.motionZ();
  float totalaccel = sqrt(x*x + y*y + z*z);

  Serial.println(totalaccel);

  if(totalaccel > 20.0)
  {
    PixelColors(Colors, 10);
    PlayNotes(Melody, 4);
    CircuitPlayground.clearPixels();
  }
}
