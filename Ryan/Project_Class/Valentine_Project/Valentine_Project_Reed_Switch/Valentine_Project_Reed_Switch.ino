// Play with the code in this sketch! Go to line 44 to change the notes that are played. Go to line 500 to play with the tempo/speed.  

int speaker = 5;   //speaker is attached to pin 5
int reedSwitch = A4;   //aluminum foil is attached to pin 6
int sensorValue;   

//notes
int B = 987;
int C = 1046;
int D = 1175;
int E = 1319;
int Fs = 1480;
int G = 1568;
int A = 1760;
int Bhi = 1976;


void setup() {
  // put your setup code here, to run once:
  pinMode(speaker, OUTPUT);  //sets up the speaker as an output
  pinMode(reedSwitch, INPUT);   //sets up the pointer finger as an input
  digitalWrite(reedSwitch, HIGH);  //initializes the sensor
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = digitalRead(reedSwitch);  //reads information from the sensor
  if (sensorValue==LOW)
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

void MakeRest(int duration)
{
  noTone(speaker);
  delay(duration);
}

void song(int duration)
{
  MakeNote(D, duration); //Change the letter to change the note that plays.
  MakeNote(D, duration);
  MakeNote(D, duration);
  MakeNote(D, duration*2);
  MakeNote(B, duration);
  MakeNote(E, duration*2);
  MakeNote(E, duration);
  MakeNote(E, duration*3);

  MakeNote(D, duration); //Change the letter to change the note that plays.
  MakeNote(D, duration);
  MakeNote(D, duration);
  MakeNote(D, duration*2);
  MakeNote(B, duration);
  MakeNote(E, duration*6);

  MakeNote(D, duration*6); 
  MakeNote(E, duration*6);
  MakeNote(Fs, duration*6);
  MakeRest(duration*6);

  MakeNote(E, duration); //Change the letter to change the note that plays.
  MakeNote(E, duration);
  MakeNote(E, duration);
  MakeNote(E, duration*2);
  MakeNote(C, duration);
  MakeNote(Fs, duration*2);
  MakeNote(Fs, duration);
  MakeNote(Fs, duration*3);

  MakeNote(E, duration); //Change the letter to change the note that plays.
  MakeNote(E, duration);
  MakeNote(E, duration);
  MakeNote(E, duration*2);
  MakeNote(C, duration);
  MakeNote(Fs, duration*6);

  MakeNote(E, duration*6); 
  MakeNote(Fs, duration*6);
  MakeNote(D, duration*6);
  MakeRest(duration*5);

  MakeNote(D, duration);
  MakeNote(G, duration*2);
  MakeNote(G, duration);
  MakeNote(G, duration*2);
  MakeNote(G, duration);
  MakeNote(G, duration*3);
  MakeNote(D, duration*2);
  MakeNote(D, duration);
  MakeNote(E, duration*2);
  MakeNote(E, duration);
  MakeNote(E, duration*2);
  MakeNote(E, duration);
  MakeNote(E, duration*5);

  MakeNote(E, duration);
  MakeNote(A, duration*2);
  MakeNote(A, duration);
  MakeNote(A, duration*2);
  MakeNote(A, duration);
  MakeNote(A, duration*3);
  MakeNote(E, duration*2);
  MakeNote(E, duration);
  MakeNote(Fs, duration*2);
  MakeNote(E, duration);
  MakeNote(Fs, duration*2);
  MakeNote(G, duration);
  MakeNote(A, duration*6);

  MakeNote(D, duration); //Change the letter to change the note that plays.
  MakeNote(D, duration);
  MakeNote(D, duration);
  MakeNote(D, duration*2);
  MakeNote(B, duration);
  MakeNote(E, duration*2);
  MakeNote(E, duration);
  MakeNote(E, duration*3);

  MakeNote(D, duration); //Change the letter to change the note that plays.
  MakeNote(D, duration);
  MakeNote(D, duration);
  MakeNote(D, duration*2);
  MakeNote(G, duration);
  MakeNote(Bhi, duration*6);

  MakeNote(E, duration*6); 
  MakeNote(Bhi, duration*6);
  MakeNote(G, duration*6);
  MakeRest(duration*6);
}

void song()
{
  int duration = 200; // Change the number here to make the song faster or slower.
  song(duration);

}
  
