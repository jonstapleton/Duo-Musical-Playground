#include <Adafruit_CircuitPlayground.h>


int tempoMS = 1000;

void playNote(int note, int duration) {
  int noteDuration = tempoMS / duration; //This is where you can change tempo
  CircuitPlayground.playTone(note, noteDuration);
  delay(noteDuration);
}

void playNotes(int* notes, int* durations, int numNotes) {
  for(int i=0; i < numNotes; i++) {
    playNote(notes[i], durations[i]);
  }
}

void tempo(float bpm){
  float ms = 1000.0*60.0/bpm;
  tempoMS = int(ms*2);
}


