///////////////////////////////////////////////////////////////////////////////
// Circuit Playground Tap Detect
//
// Author: Carter Nelson
// MIT License (https://opensource.org/licenses/MIT)

#include <Adafruit_CircuitPlayground.h>

#define TAP_THRESHOLD       15          // Tap detect threshold

bool tapDetected;

///////////////////////////////////////////////////////////////////////////////
void tapCallback() {
  tapDetected = true;
}

///////////////////////////////////////////////////////////////////////////////
void setup(void) {
  Serial.begin(9600);

  CircuitPlayground.begin();
  CircuitPlayground.setAccelRange(LIS3DH_RANGE_8_G);
  CircuitPlayground.setAccelTap(1, TAP_THRESHOLD);
  
  attachInterrupt(digitalPinToInterrupt(7), tapCallback, FALLING);

  tapDetected = false;

  CircuitPlayground.setBrightness(150); //set brightness between 0 and 255
}

///////////////////////////////////////////////////////////////////////////////
void loop() {
  if (tapDetected) {
    Serial.println("TAP!");
    tapDetected = false;
    
    CircuitPlayground.setPixelColor(0, 255,   0,   0);
    delay(100);

    CircuitPlayground.clearPixels();
  }
}
