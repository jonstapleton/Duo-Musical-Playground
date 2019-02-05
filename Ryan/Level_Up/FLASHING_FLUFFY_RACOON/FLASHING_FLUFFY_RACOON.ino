#include <Adafruit_CircuitPlayground.h>
#include "Pitch.h"
#include "accel.h"
#include "leds.h"

//
led Colors[] = 
{
  {0, 0, 0, 255},
  {1, 0, 255, 0},
  {2, 255, 0, 0},
  {3, 100, 0, 215},
  {4, 50,50,50},
  {5, 150, 150, 200},
  {6, 100, 0, 215},
  {7, 255, 0, 0},
  {8, 0, 255, 0},  
  {9, 0, 0, 255},
  };
//
//int ledPattern = 


Note Melody[] = 
{
  {Ds_7, 2},
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
