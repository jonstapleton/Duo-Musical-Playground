int speaker = 5;
int aluminumFoil = 6;
int sensorValue;

int C = 1046;
int D = 1175;
int E = 1319;
int F = 1397;
int G = 1568;
int A = 1760;
int B = 1976;
int C1 = 2093;

void setup() {

  pinMode(speaker, OUTPUT);
  pinMode(aluminumFoil, INPUT);
  digitalWrite(aluminumFoil, HIGH);  //initializes the sensor
}

void loop() {
  sensorValue = digitalRead(aluminumFoil);
  Serial.println(sensorValue);  //send sensorValue to computer
  delay(100);  //delay 1/10 of a second. This keeps the computer from crashing when you use println.
  if (sensorValue == LOW)
  {
    song();
  }
}

void MakeNote(int NoteNumber, int duration)
{
  // "stacatto" note, on for 1/2 of duration, off for 1/2 of duration
  tone(speaker, NoteNumber);
  delay(duration/2);
  noTone(speaker);
  delay(duration/2);
}

void songA(int duration)
{
  MakeNote(C, duration);
  MakeNote(C, duration);
  MakeNote(G, duration);
  MakeNote(G, duration);
  MakeNote(A, duration);
  MakeNote(A, duration);
  MakeNote(G, duration*2);
  MakeNote(F, duration);
  MakeNote(F, duration);
  MakeNote(E, duration);
  MakeNote(E, duration);
  MakeNote(D, duration);
  MakeNote(D, duration);
  MakeNote(C, duration*2);
}

void songB(int duration)
{
  MakeNote(G, duration);
  MakeNote(G, duration);
  MakeNote(F, duration);
  MakeNote(F, duration);
  MakeNote(E, duration);
  MakeNote(E, duration);
  MakeNote(D, duration*2);
}

void song()
{
  int duration = 500; // controls tempo of song
  songA(duration);
  songB(duration);
  songB(duration);
  songA(duration);
}
 
