#include <Adafruit_NeoPixel.h>

#define PIN 8 

Adafruit_NeoPixel led = Adafruit_NeoPixel(3, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  led.begin();
  led.show(); 
  led.setBrightness(255);  // Set this to max brightness, so the name can be more viewable
}

void loop() {
  led.show();
  movement();
  movement();
}

void movement() {
  for (int i; i < 200 ; i++) {
    for(int j=0; j<led.numPixels(); j++) {
      led.setPixelColor(j, led.Color(i+30,0,0));  
    }
    led.show();
    delay(5);
  }
  for (int i = 200; i > 0; i--) {
    for(int j=0; j<led.numPixels(); j++) {
      led.setPixelColor(j, led.Color(i+30,0,0));
    }
    led.show();
    delay(5);
  }
}
