#include "Pitch.h"
#include <Adafruit_CircuitPlayground.h>

namespace MusicGlobals
{
  RhythmMode Rhythm = Western;
  int TempoMS = 500;
}

void SetBPM(float NewTempoBPM)
{
  if(NewTempoBPM <= 0.0) {return;}
  float ms = 1000.0 * 60.0 / NewTempoBPM;
  MusicGlobals::TempoMS = ms*4;
}

void SetRhythmMode(RhythmMode NewRhythmMode)
{
  MusicGlobals::Rhythm = NewRhythmMode;
}

float MidiToFreq(float MidiNoteNum)
{
  float Freq = 440.0f * pow(2.0f, (MidiNoteNum-69.0f)/12.0f);
  return Freq;
}

int MidiToFreq(int MidiNoteNum)
{
  return int(MidiToFreq(float(MidiNoteNum)));
}

void PlayNote(Note ANote)
{
  PlayNote(ANote.Pitch, ANote.Length);
}

void PlayNote(float Pitch, float Length)
{
  int Duration = (DurationFromRhythm(Length));
  CircuitPlayground.playTone(MidiToFreq(Pitch), Duration/2);
  delay(Duration/2);
}

void PlayNotes(Note* Notes, int NumNotes)
{
  for(int i=0; i<NumNotes; i++)
  {
    PlayNote(Notes[i]);
  }
}

float DurationFromRhythm(float Length)
{
  switch(MusicGlobals::Rhythm)
  {
    case Western:
      return Length > 0.0f ? MusicGlobals::TempoMS/Length : 0.0f;
      break;
    case Eastern:
      return MusicGlobals::TempoMS * Length * 0.125f; // 1 = "eighth note"
      break;
    case Literal:
      return Length;
  }
}

int DurationFromRhythm(int Length)
{
  return int(DurationFromRhythm(float(Length)));
}

