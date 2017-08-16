#include <Audio.h>
#include <Wire.h>
#include <SPI.h>

boolean midiStatus = true;
AudioSynthWaveform       waveform0;
AudioSynthWaveform       waveform1;
AudioOutputAnalog        dac1;
AudioConnection          patchCord1(waveform0, dac1);

void setup(){

  Serial.begin(57600);
  
  AudioMemory(16);
  dac1.analogReference(EXTERNAL);
  
  waveform0.begin(0.4, 200, WAVEFORM_SAWTOOTH);
  waveform1.begin(0.4, 200, WAVEFORM_SAWTOOTH);
  Wire.begin(5);
  Wire.onReceive(receiveEvent);

}

void loop(){
  
  
}

void receiveEvent (int howMany) {
  while(Wire.available() > 0) {
    char messageType = Wire.receive();
    int n = Wire.receive();
    int vp = Wire.receive();
    int c = Wire.receive();
    
    if(messageType == 'a' && midiStatus == true) {
     /* if(n == 30) {
        waveform7.frequency(360 * vp + 0.25);
      }
      if(n == 31){
        waveform1.frequency(360 * vp + 0.25);
      }
      if(n == 32) {
        waveform2.frequency(360 * vp + 0.25);
      }
      if(n == 33) {
        waveform3.frequency(360 * vp + 0.25);
      }
      if(n == 34) {
        waveform4.frequency(360 * vp + 0.25);
      }
      if(n == 35) {
        waveform5.frequency(360 * vp + 0.25);
      }
      */if(n == 36) {
        waveform1.frequency(360 * vp + 0.25);
      }
      /*if(n == 37) {
        waveform8.frequency(360 * vp + 0.25);
      }
      if(n == 38) {
        waveform1.amplitude(360 * vp + 0.25);
      }
      if(n == 39) {
        waveform2.amplitude(360 * vp + 0.25);
      }
      if(n == 40) {
        waveform3.amplitude(360 * vp + 0.25);
      }
      if(n == 41) {
        waveform4.amplitude(360 * vp + 0.25);
      }
      if(n == 42) {
        waveform5.amplitude(360 * vp + 0.25);
      }
      if(n == 43) {
        waveform6.amplitude(360 * vp + 0.25);
      }
      if(n == 44) {
        waveform8.amplitude(360 * vp + 0.25);
      }
      if(n == 45) {
        waveform7.amplitude(360 * vp + 0.25);
      }*/
      delay(5);
    }
    if(messageType == 'n' && midiStatus == true) {
      usbMIDI.sendNoteOn(n, vp, c);
      delay(5);
    }
    if(messageType == 'o' && midiStatus == true) {
      usbMIDI.sendNoteOff(n, vp, c);
      delay(5);
    }
    delay(5);
  }
  usbMIDI.send_now();
}
