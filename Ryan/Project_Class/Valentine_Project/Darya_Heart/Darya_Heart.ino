// Play with the code in this sketch! Go to line 44 to change the notes that are played. Go to line 500 to play with the tempo/speed.  

int speaker = 5;   //speaker is attached to pin 5
int reedSwitch = 9;   //aluminum foil is attached to pin 6
int sensorValue;   

//notes
int Elow = 329;
int A = 440;
int B = 493;
int Cs = 554;
int D = 587;
int E = 659;
int Fs = 739;
int Gs = 830;
int Ahigh = 880;
int Bhigh = 987;


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
  MakeNote(E, duration); //Change the letter to change the note that plays.
  MakeNote(Ahigh, duration);
  MakeNote(Fs, duration); 
  MakeNote(Ahigh, duration);
  MakeNote(E, duration);
  MakeNote(Cs, duration/2);
  MakeNote(E, duration/2);
  MakeNote(D, duration/2);
  MakeNote(Cs, duration/2);
  MakeNote(B, duration);
  MakeNote(A, duration);
  MakeNote(Elow, duration/2);
  MakeNote(Elow, duration/2);
  MakeNote(A, duration);
  MakeNote(B, duration);
  MakeNote(Cs, duration/2);
  MakeNote(D, duration/2);
  MakeNote(E, duration/2);
  MakeNote(Cs, duration/2);
  MakeNote(B, duration);
  MakeNote(Cs, duration/2);
  MakeNote(D, duration/2);

  MakeNote(E, duration); 
  MakeNote(Ahigh, duration);
  MakeNote(Fs, duration); 
  MakeNote(Ahigh, duration);
  MakeNote(E, duration);
  MakeNote(Cs, duration/2);
  MakeNote(E, duration/2);
  MakeNote(D, duration/2);
  MakeNote(Cs, duration/2);
  MakeNote(B, duration);
  MakeNote(A, duration);
  MakeNote(Cs, duration/2);
  MakeNote(Cs, duration/2);
  MakeNote(Fs, duration); 
  MakeNote(Ahigh, duration);
  MakeNote(Bhigh, duration/2); 
  MakeNote(Ahigh, duration/2);
  MakeNote(Gs, duration/2); 
  MakeNote(Fs, duration/2);
  MakeNote(E, duration*2); 
  
}

void song()
{
  int duration = 400; // Change the number here to make the song faster or slower.
  song(duration);

}
  
