int speaker = 9;   //make sure this matches the pin of your speaker

//music notes. Arduino reads pitch as frequencies in hertz. 
//The following list of variables lets us use letter names of the 
//notes instead of the frequencies.
int C = 1046;
int D = 1175;
int E = 1319;
int F = 1397;
int G = 1568;
int A = 1760;
int B = 1976;
int C1 = 2093;

void setup() {
  // put your setup code here, to run once:
  pinMode(speaker, OUTPUT);  //sets up the speaker as an output
}

void loop() {
  song();
}

void MakeNote(int NoteNumber, int duration)
{
  // "stacatto" note, on for 1/2 of duration, off for 1/2 of duration
  tone(speaker, NoteNumber);
  delay(duration/2);
  noTone(speaker);
  delay(duration/2);
}

void MakeRest(int duration)
{
  noTone(speaker);
  delay(duration);
}

void song(int duration)
{
  MakeNote(C, duration*2);
  MakeNote(D, duration);
  MakeNote(F, duration*2);
  MakeNote(C, duration);
  MakeNote(E, duration*2);
  MakeNote(G, duration);
}

void song()
{
  int duration = 200; // Change the number here to make the song faster or slower.
  song(duration);
}
