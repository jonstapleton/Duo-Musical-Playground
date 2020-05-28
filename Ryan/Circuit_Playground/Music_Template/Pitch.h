
// classes for naming pitches and converting to frequency

struct Note
{
  float Pitch;
  float Length;
};

enum RhythmMode
{
  Western, // Rhythm is expressed as a division: 8 for eighth-note, 4 for quarter-note, etc.
  Eastern, // Rhythm is expressed as a multiplication: 1 is shortest note value, 2 is double length, 3 is triple length
  Literal  // Rhythm is expressed as a literal number of miliseconds and is not affected by bpm
};

// setup
void SetBPM(float NewTempoBPM);
void SetRhythmMode(RhythmMode NewRhythmMode);

// playing notes
void PlayNote(Note ANote);
void PlayNote(float Pitch, float Length);
void PlayNotes(Note* Notes, int NumNotes);

// conversions
float MidiToFreq(float MidiNoteNum);
int MidiToFreq(int MidiNoteNum);
float DurationFromRhythm(float Length);
int DurationFromRhythm(int Length);



enum NoteNames : int
{
  C_4 = 60,
  Cs_4 = 61,
  Db_4 = 61,
  D_4 = 62,
  Ds_4 = 63,
  Eb_4 = 63,
  E_4 = 64,
  F_4 = 65,
  Fs_4 = 66,
  Gb_4 = 66,
  G_4 = 67,
  Gs_4 = 68,
  Ab_4 = 68,
  A_4 = 69,
  As_4 = 70,
  Bb_4 = 70,
  B_4 = 71,
  C_5 = 72
};
