// Adafruit Circuit Playground - Melody    Support Open Source, buy at Adafruit
//   2016-08-06 Version 1  by Mike Barela for Adafruit Industries
//   Adapted from melody by Tom Igoe on arduino.cc
// Uses the CircuitPlayground library to easily use the full functionality of the board

#include <Adafruit_CircuitPlayground.h>
#include "pitches.h"

struct note_t
{
  int pitch;
  int duration;
};

note_t melody[] = 
{
  {NOTE_C4, 4},
  {NOTE_C5, 4}
}

int melody[] = {                            // specific notes in the melody
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4, 0 };

int noteDurations[] = {     // note durations: 4 = quarter note, 8 = eighth note, etc.:
  4, 8, 8, 4, 4, 4, 4, 4, 4 };

void setup() {
  CircuitPlayground.begin();  // initialize the CP library
  tempo(120);   //choose your tempo in BPM
}

void loop() {
  playNotes(melody, noteDurations, 9);
}

