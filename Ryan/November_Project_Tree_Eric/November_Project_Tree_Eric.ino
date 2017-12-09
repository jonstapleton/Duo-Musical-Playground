
int speaker = 5;
int aluminumFoil = A5;
int sensorValue;

//notes
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
  Serial.begin(9600);    //initialize serial port. 9600 is the Arduino stardard communication speed. Tells lilypad to talk to computer at the speed of 9600 bits per second.
}

void loop() {
  sensorValue = analogRead(aluminumFoil);
  Serial.println(sensorValue);  //send sensorValue to computer
  delay(100);  //delay 1/10 of a second. This keeps the computer from crashing when you use println.
  if (sensorValue>1000)
  {

  }
  else
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
  MakeNote(G, duration);
  MakeNote(G ,duration);
  MakeNote(G, duration);
  MakeNote(G, duration);
  MakeNote(E, duration);
  MakeNote(F, duration);
  MakeNote(G, duration*2);
  MakeNote(G, duration);
  MakeNote(G, duration*2);
  MakeNote(G, duration);
  MakeNote(C1, duration);
  MakeNote(C1, duration);
  MakeNote(C1, duration);
  MakeNote(B, duration*2);
  MakeNote(A, duration);
  MakeNote(G, duration*3);
  MakeRest(duration*2);
  MakeNote(G, duration);
  MakeNote(F, duration);  
  MakeNote(F, duration);  
  MakeNote(F, duration);  
  MakeNote(F, duration*2);  
  MakeNote(F, duration);  
  MakeNote(E, duration);  
  MakeNote(E, duration);  
  MakeNote(E, duration);  
  MakeNote(E, duration);  
  MakeNote(E, duration);  
  MakeNote(E, duration); 
  MakeNote(D, duration*2);  
  MakeNote(D, duration);  
  MakeNote(D, duration*2); 
  MakeNote(E, duration);  
  MakeNote(D, duration*3);  
  MakeNote(G, duration); 
  MakeRest(duration*2);
  MakeNote(G, duration);
  MakeNote(G ,duration);
  MakeNote(G, duration);
  MakeNote(G, duration);
  MakeNote(E, duration);
  MakeNote(F, duration);
  MakeNote(G, duration*2);
  MakeNote(G, duration);
  MakeNote(G, duration*2);
  MakeNote(G, duration);
  MakeNote(C1, duration*2);
  MakeNote(C1, duration);
  MakeNote(B, duration*2);
  MakeNote(A, duration);
  MakeNote(G, duration*3);
  MakeRest(duration*2);
  MakeNote(G, duration);
  MakeNote(C1, duration*2);
  MakeNote(C1, duration);
  MakeNote(B, duration*2);
  MakeNote(A, duration);
  MakeNote(G, duration*2);  
  MakeNote(E, duration);
  MakeNote(C, duration*2);
  MakeNote(D, duration);
  MakeNote(E, duration);
  MakeNote(E, duration);
  MakeNote(F, duration);
  MakeNote(E, duration*2);
  MakeNote(D, duration);
  MakeNote(C, duration*3);
  MakeRest(duration*3);

  

}

void song()
{
  int duration = 300; // Change the number here to make the song faster or slower.
  song(duration);
}

 
