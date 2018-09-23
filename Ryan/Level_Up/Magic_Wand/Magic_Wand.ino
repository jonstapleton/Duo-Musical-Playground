#include <Adafruit_CircuitPlayground.h>
#include "Pitch.h"
#include "accel.h"
#include "leds.h"

//
led Colors[] = 
{
  {0, 250, 0, 0},
  {1, 0, 250, 9},
  {2, 250, 0, 0},
  {3, 0, 250, 9},
  {4, 250, 0, 0},
  {5, 0, 250, 9},
  {6, 250, 0, 0},
  {7, 0, 250, 9},
  {8, 0, 250, 9},  
  {9, 0, 250, 9},
  };
//
//int ledPattern = 


Note Melody[] = 
{
  {C_4, 1},
  {E_4, 1},
  {G_4, 2},
  {Ab_4, 1},
  {G_4, 1},
  {Eb_4, 1},
  {Db_4, 0.5},
  {60.5, 0.5}
};

void setup() {
  CircuitPlayground.begin();
  SetBPM(100.0);
  SetRhythmMode(Eastern);

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
    PlayNotes(Melody, 8);
    CircuitPlayground.clearPixels();
  }
}
