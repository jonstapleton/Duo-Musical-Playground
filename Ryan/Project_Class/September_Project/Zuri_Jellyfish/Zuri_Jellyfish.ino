// Play with the code in this sketch! Go to line 44 to change the notes that are played. Go to line 500 to play with the tempo/speed.  

int speaker = 5;   //speaker is attached to pin 5
int aluminumFoil = 9;   //aluminum foil is attached to pin 6
int sensorValue;   

//notes
int A = 880;
int B = 987;
int C = 1108;
int D = 1175;
int E = 1319;
int F = 1480; //actually F#
int G = 1568;
int AHi = 1760;

void setup() {
  // put your setup code here, to run once:
  pinMode(speaker, OUTPUT);  //sets up the speaker as an output
  pinMode(aluminumFoil, INPUT);   //sets up the pointer finger as an input
  digitalWrite(aluminumFoil, HIGH);  //initializes the sensor
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = digitalRead(aluminumFoil);  //reads information from the sensor
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
  MakeNote(A, duration);
  MakeNote(A, duration/2); //Change the letter to change the note that plays.
  MakeNote(A, duration/2);
  MakeNote(A, duration);
  MakeNote(B, duration);
  MakeNote(D, duration*4);
  MakeNote(F, duration);
  MakeNote(F, duration/2);  
  MakeNote(F, duration/2);
  MakeNote(F, duration);
  MakeNote(E, duration);
  MakeNote(D, duration*4);
  MakeNote(B, duration);
  MakeNote(B, duration/2); //Change the letter to change the note that plays.
  MakeNote(B, duration/2);
  MakeNote(B, duration);
  MakeNote(C, duration);
  MakeNote(D, duration*4);
  MakeNote(A, duration);
  MakeNote(A, duration/2); //Change the letter to change the note that plays.
  MakeNote(A, duration/2);
  MakeNote(A, duration);
  MakeNote(B, duration);
  MakeNote(A, duration*4);
  MakeNote(A, duration);
  MakeNote(A, duration/2); //Change the letter to change the note that plays.
  MakeNote(A, duration/2);
  MakeNote(A, duration);
  MakeNote(B, duration);
  MakeNote(D, duration*4);
  MakeNote(F, duration);
  MakeNote(F, duration/2);  
  MakeNote(F, duration/2);
  MakeNote(F, duration);
  MakeNote(E, duration);
  MakeNote(D, duration*2); 
  MakeNote(D, duration);
  MakeNote(E, duration);
  MakeNote(F, duration*2);
  MakeNote(G, duration);
  MakeNote(F, duration);
  MakeNote(E, duration*2);
  MakeNote(F, duration);  
  MakeNote(E, duration);
  MakeNote(D, duration*4);

}

void song()
{
  int duration = 275; // Change the number here to make the song faster or slower.
  song(duration);

}
  
