
int speaker = 5;
int aluminumFoil = A5;
int sensorValue;

//notes


int FS = 740;
int G = 784;
int A = 880;
int B = 987;
int CS = 1108;
int D = 1175;
int E = 1318;


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
  MakeNote(D, duration*4);
  MakeNote(CS,duration*4);
  MakeNote(B, duration*2);
  MakeNote(FS, duration*2);
  MakeNote(FS, duration);
  MakeNote(FS, duration);  
  MakeNote(FS, duration);  
  MakeNote(FS, duration);  
  MakeNote(FS, duration);  
  MakeNote(B, duration);
  MakeNote(B, duration);
  MakeNote(B, duration);
  MakeNote(B, duration*2);
  MakeNote(A, duration); 
  MakeNote(B, duration*2);
  MakeNote(G, duration*3);
  MakeNote(G, duration);
  MakeNote(G, duration);
  MakeNote(G, duration);
  MakeNote(G, duration);
  MakeNote(B, duration);
  MakeNote(B, duration);
  MakeNote(B, duration);
  MakeNote(B, duration);
  MakeNote(B, duration*2);
  MakeNote(CS, duration);
  MakeNote(D, duration*2);
  MakeNote(A, duration*3);
  MakeNote(A, duration);
  MakeNote(A, duration);
  MakeNote(A, duration);
  MakeNote(A, duration);
  MakeNote(D, duration);
  MakeNote(D, duration);
  MakeNote(D, duration);
  MakeNote(D, duration*2);
  MakeNote(E, duration);
  MakeNote(E, duration*2);
  MakeNote(CS, duration*7);
  MakeNote(D, duration*4);
  MakeNote(CS, duration*4);
  MakeNote(B, duration*8);
  
}

void song()
{
  int duration = 161; // Change the number here to make the song faster or slower.
  song(duration);
}

 
