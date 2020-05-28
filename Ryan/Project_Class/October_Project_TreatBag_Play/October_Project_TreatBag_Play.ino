//We would change these values to match the circuitry of a particular child's project. 
int led = A4;
int speaker = 5;
int aluminumFoil = A5;
int sensorValue;
int buttonPin1 = 5;

/*Music note to frequency converter. This allows us to use note names later 
in our code rather than frequencies measured in hertz (which gets very confusing).*/
int C = 1046;
int D = 1175;
int E = 1319;
int Eb = 1245;
int F = 1397;
int F0 = 698;   //We used 0 to represent sharp notes. The # sign has another function in this programming language.
int F = 1480;
int G = 1568;
int A = 1760;
int Ab = 1661;
int B = 1976;
int Bb = 1865;
int Bb0 = 932;
int C1 = 2093;

//No need for children to interact with the following. 
void setup() {

  pinMode(led, OUTPUT);  //The LED is an output because it does something in the world.
  pinMode(speaker, OUTPUT);
  pinMode(aluminumFoil, INPUT);
  digitalWrite(aluminumFoil, HIGH);  //initializes the sensor
  Serial.begin(9600);    //initialize serial port. 9600 is the Arduino stardard communication speed. Tells lilypad to talk to computer at the speed of 9600 bits per second.
  pinMode(buttonPin1, INPUT_PULLUP);
}


/*No need for children to interact with the following.The code in this section tells 
the microcontroller that there is a sensor which receives a value (made of aluminum foil 
on the actual project). If the value received is greater than 1000, blink the lights. 
Otherise (in this case, when someone touches the foil), play the song.*/ 
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

/*The following section is where children could change the blink pattern of their lights. 
This particular example turns on for 1 second (1000 miliseconds) and turns off for
1/100 of a second. Everything in this section repeats.*/
void blinkPattern()
{
  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);   
  delay(100);             
} 

//No need for children to interact with the following. 
void MakeNote(int NoteNumber, int duration)
{
  // "stacatto" note, on for 1/2 of duration, off for 1/2 of duration
  tone(speaker, NoteNumber);
  delay(duration/2);
  noTone(speaker);
  delay(duration/2);
}

//No need for children to interact with the following. 
void MakeRest(int duration)
{
  noTone(speaker);
  delay(duration);
}

*/This is where composing happens. Children use the note names listed at the beginning of 
the sketch, then give the rhythm, or duration. Duration with no multiplier/divider, 
is set by the number in the following section. Using a multiplier or 
divider, children can use longer and shorter note values. For example to make a half note,  
children enter *2. For eigth notes, /2. This is the song that will play when the microcontroller 
senses that someone is touching the foil.*/
void song(int duration)
{
  MakeNote(Bb0, duration*2);
  MakeNote(C, duration);
  MakeNote(D, duration*3);
  MakeNote(Bb0, duration*2);
  MakeNote(Eb, duration*2);
  MakeNote(D, duration);
  MakeNote(Bb0, duration*5);
  MakeNote(Eb, duration);
  MakeNote(Eb, duration*2);
  MakeNote(D, duration);
  MakeNote(Bb0, duration*1.5);
  MakeNote(F0, duration/2);
  MakeNote(Bb0, duration);
  MakeNote(C, duration);
  MakeNote(D, duration*8);
  

}

//Children can play with this number to change the tempo or the length of duration in the section above. 
void song()
{
  int duration = 200; // Change the number here to make the song faster or slower.
  song(duration);
}

 
