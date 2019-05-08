#include <Arduino.h>
#include "../lib/Wire/Wire.h"    // Required for I2C communication
#include "../lib/PCF8574/PCF8574.h" // Required for PCF8574
#include "define.h"

bool led[8][8][8];

PCF8574 expander1;
PCF8574 expander2;
PCF8574 expander3;
PCF8574 expander4;
PCF8574 expander5;
PCF8574 expander6;
PCF8574 expander7;
PCF8574 expander8;

#include "functions.h"

void error(uint8_t nr, bool stop){
    if(!stop){
      for(int i=0; i<2*nr; i++){
        builtLED_TOG;
        delay(500);
      }
    }else{
      while(true){
        for(int i=0; i<2*nr; i++){
          builtLED_TOG;
          delay(500);
        }
        delay(3000);
      }
    }
}


void initMain(){

  pinMode(8, OUTPUT);

  expander1.begin(0x3C);
  expander2.begin(0x3A);
  expander3.begin(0x39);
  expander4.begin(0x38);
  expander5.begin(0x3E);
  expander6.begin(0x3D);
  expander7.begin(0x3B);
  expander8.begin(0x3F);

}
