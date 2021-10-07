#include <Wire.h>  
#include <Adafruit_Sensor.h>  
#include <Adafruit_TSL2561_U.h>  
#include <Adafruit_NeoPixel.h>  
  
#define PIN 8  
Adafruit_NeoPixel strip = Adafruit_NeoPixel(4, PIN, NEO_GRB + NEO_KHZ800);  
  
    
Adafruit_TSL2561_Unified tsl = Adafruit_TSL2561_Unified(TSL2561_ADDR_FLOAT, 12345); 

//REFERENCE: TSL2561 example code (mainly for lux sensor purpose), and I added in lines to make it works,and match to my project.
  
void displaySensorDetails(void)  
{  
  sensor_t sensor;  
  tsl.getSensor(&sensor);  
  Serial.println("------------------------------------");  
  Serial.print  ("Sensor:       "); Serial.println(sensor.name);  
  Serial.print  ("Driver Ver:   "); Serial.println(sensor.version);  
  Serial.print  ("Unique ID:    "); Serial.println(sensor.sensor_id);  
  Serial.print  ("Max Value:    "); Serial.print(sensor.max_value); Serial.println(" lux");  
  Serial.print  ("Min Value:    "); Serial.print(sensor.min_value); Serial.println(" lux");  
  Serial.print  ("Resolution:   "); Serial.print(sensor.resolution); Serial.println(" lux");   
  Serial.println("------------------------------------");  
  Serial.println("");  
  delay(500);  
}  
  
  
void configureSensor(void)  
{  
  /* You can also manually set the gain or enable auto-gain support */  
  // tsl.setGain(TSL2561_GAIN_1X);      /* No gain ... use in bright light to avoid sensor saturation */  
  // tsl.setGain(TSL2561_GAIN_16X);     /* 16x gain ... use in low light to boost sensitivity */  
  tsl.enableAutoRange(true);            /* Auto-gain ... switches automatically between 1x and 16x */  
  
  /* Changing the integration time gives you better sensor resolution (402ms = 16-bit data) */  
  tsl.setIntegrationTime(TSL2561_INTEGRATIONTIME_13MS);      /* fast but low resolution */  
  // tsl.setIntegrationTime(TSL2561_INTEGRATIONTIME_101MS);  /* medium resolution and speed   */  
  // tsl.setIntegrationTime(TSL2561_INTEGRATIONTIME_402MS);  /* 16-bit data but slowest conversions */  
  
  
  /* Update these values depending on what you've set above! */   
  Serial.println("------------------------------------");  
  Serial.print  ("Gain:         "); Serial.println("Auto");  
  Serial.print  ("Timing:       "); Serial.println("13 ms");  
  Serial.println("------------------------------------");  
}  
  
   
void setup(void)  
{  
  Serial.begin(9600);  
  Serial.println("Light Sensor Test"); Serial.println("");  
   
  if(!tsl.begin())  
  {  
    Serial.print("Ooops, no TSL2561 detected ... Check your wiring or I2C ADDR!");  
    while(1);  
  }  

  displaySensorDetails();  
  
  configureSensor();    
  Serial.println("");  
    
  #if defined (__AVR_ATtiny85__)  
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);  
  #endif  
    
  strip.begin();  
  strip.show(); // Initialize all pixels to 'off' 
  strip.setBrightness(255);  // max brightness 
}  
  
void loop(void)  
{  
  sensors_event_t event;  
  tsl.getEvent(&event);  
  
  if (event.light)  
  {  
    Serial.print(event.light); Serial.println(" lux");  
  }  
  else  
  {  
    Serial.println("Sensor overload");  
  }   
//if-else statement
// more than lux 19,will displays as a green light 
if (event.light > 19)  
{  
    colorWipe(strip.Color(0,255,0), 60);  
}  
//less than lux 18, will displays as a red light. Meaning other person should back up.(Social distance)
else if ((event.light > 1) && (event.light < 18))   
{  
    colorWipe(strip.Color(255,0,0), 60);  
}    
}    
void colorWipe(uint32_t j, uint8_t wait) {    
  for(uint16_t i=0; i<strip.numPixels(); i++) {    
      strip.setPixelColor(i, j);    
      strip.show();       
  }    
}   
