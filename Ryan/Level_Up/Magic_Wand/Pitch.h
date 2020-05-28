
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
  C_1 = 24,
  Cs_1 = 25,
  Db_1 = 25,
  D_ = 26,
  Ds_1 = 27,
  Eb_1 = 27,
  E_1 = 28,
  F_1 = 29,
  Fs_1 = 30,
  Gb_1 = 30,
  G_1 = 31,
  Gs_1 = 32,
  Ab_1 = 32,
  A_1 = 33,
  As_1 = 34,
  Bb_1 = 34,
  B_1 = 35,
  C_2 = 36,
  Cs_2 = 37,
  Db_2 = 37,
  D_2 = 38,
  Ds_2 = 39,
  Eb_2 = 39,
  E_2 = 40,
  F_2 = 41,
  Fs_2 = 42,
  Gb_2 = 42,
  G_2 = 43,
  Gs_2 = 44,
  Ab_2 = 44,
  A_2 = 45,
  As_2 = 46,
  Bb_2 = 46,
  B_2 = 47,
  C_3 = 48,
  Cs_3 = 49,
  Db_3 = 49,
  D_3 = 50,
  Ds_3 = 51,
  Eb_3 = 51,
  E_3 = 52,
  F_3 = 53,
  Fs_3 = 54,
  Gb_3 = 54,
  G_3 = 55,
  Gs_3 = 56,
  Ab_3 = 56,
  A_3 = 57,
  As_3 = 58,
  Bb_3 = 58,
  B_3 = 59,
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
  C_5 = 72,
  Cs_5 = 73,
  Db_5 = 73,
  D_5 = 74,
  Ds_5 = 75,
  Eb_5 = 75,
  E_5 = 76,
  F_5 = 77,
  Fs_5 = 78,
  Gb_5 = 78,
  G_5 = 79,
  Gs_5 = 80,
  Ab_5 = 80,
  A_5 = 81,
  As_5 = 82,
  Bb_5 = 82,
  B_5 = 83,
  C_6 = 84,
  Cs_6 = 85,
  Db_6 = 85,
  D_6 = 86,
  Ds_6 = 87,
  Eb_6 = 87,
  E_6 = 88,
  F_6 = 89,
  Fs_6 = 90,
  Gb_6 = 90,
  G_6 = 91,
  Gs_6 = 92,
  Ab_6 = 92,
  A_6 = 93,
  As_6 = 94,
  Bb_6 = 94,
  B_6 = 95,
  C_7 = 96,
  Cs_7 = 97,
  Db_7 = 97,
  D_7 = 98,
  Ds_7 = 99,
  Eb_7 = 99,
  E_7 = 100,
  F_7 = 101,
  Fs_7 = 102,
  Gb_7 = 102,
  G_7 = 103,
  Gs_7 = 104,
  Ab_7 = 104,
  A_7 = 105,
  As_7 = 106,
  Bb_7 = 106,
  B_7 = 107,
  C_8 = 108
};
