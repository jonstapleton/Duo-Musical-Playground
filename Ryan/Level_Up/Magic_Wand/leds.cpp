#include "leds.h"
#include <Adafruit_CircuitPlayground.h>

void PixelColor(led Aled){
  CircuitPlayground.setPixelColor(Aled.Pixel, Aled.R, Aled.G, Aled.B);
}

void PixelColors(led* leds, int numleds){
  for(int i = 0; i < numleds; i++){
    PixelColor(leds[i]);
  }
}

