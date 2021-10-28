//REFERENCE: https://learn.adafruit.com/circuit-playground-fruit-drums/caternuson-tone-piano

#include <Adafruit_CircuitPlayground.h>

#define CAP_THRESHOLD   400

#define DO 264 
#define RE 297
#define MI 330
#define FA 352
#define SO 396
#define LA 440
#define SI 495
#define DOI 528


uint8_t pads[] = {3, 2, 0, 1, 12, 6, 9, 10};
uint8_t numberOfPads = sizeof(pads)/sizeof(uint8_t);

void takeAction(uint8_t pad) {
  
  Serial.print("PAD "); Serial.print(pad); Serial.print(" playing note: ");
  switch (pad) {
    case 3:
      Serial.println("H");
  CircuitPlayground.clearPixels();
  CircuitPlayground.playTone(MI, 100, false);
  CircuitPlayground.setPixelColor(0, 255,   255,   0);
  CircuitPlayground.setPixelColor(1, 255,   255,   0);
  CircuitPlayground.setPixelColor(2,   255,   255,   0);
  CircuitPlayground.setPixelColor(3,   255,   255,   0);
  CircuitPlayground.setPixelColor(4,  255,   255,   0);
  
  CircuitPlayground.setPixelColor(5, 255,   255,   0);
  CircuitPlayground.setPixelColor(6, 255,   255,   0);
  CircuitPlayground.setPixelColor(7, 255,   255,   0);
  CircuitPlayground.setPixelColor(8, 255,   255,   0);
  CircuitPlayground.setPixelColor(9, 255,   255,   0);

  delay(500);
      break;
    case 2:
      Serial.println("D");
  CircuitPlayground.playTone(RE, 100, false);
  CircuitPlayground.setPixelColor(0, 255,   69,   0);
  CircuitPlayground.setPixelColor(1, 255,   69,   0);
  CircuitPlayground.setPixelColor(2,   255,   69,   0);
  CircuitPlayground.setPixelColor(3,   255,   69,   0);
  CircuitPlayground.setPixelColor(4,  255,   69,   0);
  
  CircuitPlayground.setPixelColor(5, 255,   69,   0);
  CircuitPlayground.setPixelColor(6, 255,   69,   0);
  CircuitPlayground.setPixelColor(7, 255,   69,   0);
  CircuitPlayground.setPixelColor(8, 255,   69,   0);
  CircuitPlayground.setPixelColor(9, 255,   69,   0);
  delay(500);
      break;
    case 0:
      Serial.println("E");
  CircuitPlayground.playTone(DO, 100, false);
  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1, 255,   0,   0);
  CircuitPlayground.setPixelColor(2,   255,   0,   0);
  CircuitPlayground.setPixelColor(3,   255,   0,   0);
  CircuitPlayground.setPixelColor(4,  255,   0,   0);
  
  CircuitPlayground.setPixelColor(5, 255,   0,   0);
  CircuitPlayground.setPixelColor(6, 255,   0,   0);
  CircuitPlayground.setPixelColor(7, 255,   0,   0);
  CircuitPlayground.setPixelColor(8, 255,   0,   0);
  CircuitPlayground.setPixelColor(9, 255,   0,   0);
  delay(500);
      break;
    case 1:
      Serial.println("F");
  CircuitPlayground.playTone(SI, 100, false);
  CircuitPlayground.setPixelColor(0, 0,   255,   false);
  CircuitPlayground.setPixelColor(0,  139, 0, 255);
  CircuitPlayground.setPixelColor(1,  139, 0, 255);
  CircuitPlayground.setPixelColor(2,    139, 0, 255);
  CircuitPlayground.setPixelColor(3,   139, 0, 2555);
  CircuitPlayground.setPixelColor(4,   139, 0, 255);
  
  CircuitPlayground.setPixelColor(5,  139, 0, 2555);
  CircuitPlayground.setPixelColor(6,  139, 0, 255);
  CircuitPlayground.setPixelColor(7,  139, 0, 255);
  CircuitPlayground.setPixelColor(8,  139, 0, 255);
  CircuitPlayground.setPixelColor(9,  139, 0, 255);
  delay(500);
      break;
    case 6:
      Serial.println("A");
  CircuitPlayground.playTone(LA, 100, false);
  CircuitPlayground.setPixelColor(0, 46, 43, 95);
  CircuitPlayground.setPixelColor(1, 46, 43, 95);
  CircuitPlayground.setPixelColor(2,   46, 43, 95);
  CircuitPlayground.setPixelColor(3,   46, 43, 95);
  CircuitPlayground.setPixelColor(4,  46, 43, 95);
  
  CircuitPlayground.setPixelColor(5, 46, 43, 95);
  CircuitPlayground.setPixelColor(6, 46, 43, 95);
  CircuitPlayground.setPixelColor(7, 46, 43, 95);
  CircuitPlayground.setPixelColor(8, 46, 43, 95);
  CircuitPlayground.setPixelColor(9, 46, 43, 95);
  delay(500);
      break;
    case 9:
      Serial.println("B");
  CircuitPlayground.playTone(SO, 100, false);
  CircuitPlayground.setPixelColor(0, 0,   0,   255);
  CircuitPlayground.setPixelColor(1, 0,   0,   255);
  CircuitPlayground.setPixelColor(2,   0,   0,   255);
  CircuitPlayground.setPixelColor(3,   0,   0,   255);
  CircuitPlayground.setPixelColor(4,  0,   0,   255);
  
  CircuitPlayground.setPixelColor(5, 0,   0,   255);
  CircuitPlayground.setPixelColor(6, 0,   0,   255);
  CircuitPlayground.setPixelColor(7, 0,   0,   255);
  CircuitPlayground.setPixelColor(8, 0,   0,   255);
  CircuitPlayground.setPixelColor(9, 0,   0,   255);
  delay(500);
      break;
    case 12:
      Serial.println("G");
       CircuitPlayground.playTone(DOI, 100, false);
      break;
    case 10:
      Serial.println("C");
  CircuitPlayground.playTone(FA, 100, false);
  CircuitPlayground.setPixelColor(0, 0,   255,   0);
  CircuitPlayground.setPixelColor(1, 0,   255,   0);
  CircuitPlayground.setPixelColor(2,   0,   255,   0);
  CircuitPlayground.setPixelColor(3,   0,   255,   0);
  CircuitPlayground.setPixelColor(4,  0,   255,   0);
  
  CircuitPlayground.setPixelColor(5, 0,   255,   0);
  CircuitPlayground.setPixelColor(6, 0,   255,   0);
  CircuitPlayground.setPixelColor(7, 0,   255,   0);
  CircuitPlayground.setPixelColor(8, 0,   255,   0);
  CircuitPlayground.setPixelColor(9, 0,   255,   0);
  delay(500);
      break;
    default:
      Serial.println("THIS SHOULD NEVER HAPPEN.");
  }
}
boolean capButton(uint8_t pad) {
  if (CircuitPlayground.readCap(pad) > CAP_THRESHOLD) {
    return true;  
  } else {
    return false;
  }
}

void setup() {
  Serial.begin(9600); 
  CircuitPlayground.setBrightness(255);
  CircuitPlayground.begin();

}

void loop() {

 CircuitPlayground.clearPixels();
  for (int i=0; i<numberOfPads; i++) {
    if (capButton(pads[i])) {
      
      takeAction(pads[i]);
    }
  }
}
