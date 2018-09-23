struct led
{
  int Pixel;
  float R;
  float G;
  float B;
};

void PixelColor(led Aled);

void PixelColors(led* leds, int numleds);
