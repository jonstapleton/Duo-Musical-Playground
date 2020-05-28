int led = 6;
int speaker = 5;
int aluminumFoil = A5;
int sensorValue;

//notes

int A = 1760;
int B = 1976;
int C = 2093;
int D = 2349;
int E = 2637;
int F = 2793;
int G = 3135;
int AHi = 3520;

void setup() {

  pinMode(led, OUTPUT);  //The LED is an output because it does something in the world.
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
    blinkPattern();
  }
  else
  {
    song(); 
  }
}

void blinkPattern()
{
  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);   
  delay(100);            
//  digitalWrite(led, HIGH);  
//  delay(100);             
//  digitalWrite(led, LOW);    
//  delay(25);    
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
  MakeNote(D, duration*2);
  MakeNote(E ,duration);
  MakeNote(F, duration);
  MakeNote(D, duration);
  MakeNote(E, duration);
  MakeNote(F, duration);
  MakeNote(E, duration*2);
  MakeNote(E, duration);
  MakeNote(F, duration);
  MakeNote(G, duration*2);
  MakeNote(F, duration);
  MakeNote(E, duration);
  MakeNote(D, duration*2);

  MakeNote(D, duration*2);
  MakeNote(E ,duration);
  MakeNote(F, duration);
  MakeNote(D, duration);
  MakeNote(E, duration);
  MakeNote(F, duration);
  MakeNote(E, duration*2);
  MakeNote(E, duration);
  MakeNote(F, duration);
  MakeNote(G, duration);
  MakeNote(F, duration);
  MakeNote(E, duration);
  MakeNote(C, duration);
  MakeNote(D, duration*2);

}

void song()
{
  int duration = 350; // Change the number here to make the song faster or slower.
  song(duration);
}

 
