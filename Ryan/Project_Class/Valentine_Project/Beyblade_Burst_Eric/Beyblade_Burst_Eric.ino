// Play with the code in this sketch! Go to line 44 to change the notes that are played. Go to line 500 to play with the tempo/speed.  

int speaker = 11;   //speaker is attached to pin 5
int reedSwitch = 5;   //aluminum foil is attached to pin 6
int sensorValue;   

//notes
int As = 932;
int B = 987;
int Cs = 1108;
int Ds = 1244;
int E = 1319;
int Fs = 1480;
int Gs = 1661;

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
  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*5);

  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*5); 

  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*2); 
  MakeNote(E, duration*2);
  MakeNote(Ds, duration*2); 
  MakeNote(Cs, duration*2); 
  MakeNote(Cs, duration*2);
  MakeNote(Ds, duration*2); 

  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*5);

  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*5); 

  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*2); 
  MakeNote(E, duration*2);
  MakeNote(Ds, duration*2); 
  MakeNote(Cs, duration*2); 
  MakeNote(Cs, duration*2);
  MakeNote(B, duration*2); 

    MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*5);

  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*5); 

  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*2); 
  MakeNote(E, duration*2);
  MakeNote(Ds, duration*2); 
  MakeNote(Cs, duration*2); 
  MakeNote(Cs, duration*2);
  MakeNote(Ds, duration*2); 

  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*5); 

  MakeNote(B, duration); //Change the letter to change the note that plays.
  MakeNote(As, duration);
  MakeNote(B, duration);
  MakeNote(Fs, duration*6); 
  MakeNote(Bhi, duration*2);
  MakeNote(Gs, duration*2); 
 
}

void song()
{
  int duration = 200; // Change the number here to make the song faster or slower.
  song(duration);

}
  
