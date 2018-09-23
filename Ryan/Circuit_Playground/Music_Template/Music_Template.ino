#include <Adafruit_CircuitPlayground.h>
#include "Pitch.h"

void setup() {
  CircuitPlayground.begin();
  SetBPM(100.0);
  SetRhythmMode(Eastern);
}

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

void loop() {
  // put your main code here, to run repeatedly:
  PlayNote(C_4, 1);
  PlayNote(61, 1);
  PlayNote(62, 2);
  PlayNote(63, 1);
  PlayNote(64, 1);
  PlayNote(65.7, 2);

  PlayNotes(Melody, 8);
}
