#include <Arduino.h>
#include "../lib/Wire/Wire.h"    // Required for I2C communication
#include "../lib/PCF8574/PCF8574.h" // Required for PCF8574
#include "functions.h"

#define builtLED 	(1<<PB0)
#define builtLED_ON	PORTB |= builtLED
#define builtLED_OFF	PORTB &= ~builtLED
#define builtLED_TOG	PORTB ^= builtLED

bool led[8][8][8];

PCF8574 expander1;
PCF8574 expander2;
PCF8574 expander3;
PCF8574 expander4;
PCF8574 expander5;
PCF8574 expander6;
PCF8574 expander7;
PCF8574 expander8;

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
#include <PCF8574.h>
#include <Wire.h>

#define builtLED   (1<<PB0)
#define builtLED_ON PORTB |= builtLED
#define builtLED_OFF  PORTB &= ~builtLED
#define builtLED_TOG  PORTB ^= builtLED

PCF8574 expander1;
PCF8574 expander2;
PCF8574 expander3;
PCF8574 expander4;
PCF8574 expander5;
PCF8574 expander6;
PCF8574 expander7;
PCF8574 expander8;

#define lvl1 0
#define lvl2 1
#define lvl3 2
#define lvl4 3
#define lvl5 14
#define lvl6 15
#define lvl7 16
#define lvl8 17

void 

void setup()
{
  pinMode(lvl1, OUTPUT);
  pinMode(lvl2, OUTPUT);
  pinMode(lvl3, OUTPUT);
  pinMode(lvl4, OUTPUT);
  pinMode(lvl5, OUTPUT);
  pinMode(lvl6, OUTPUT);
  pinMode(lvl7, OUTPUT);
  pinMode(lvl8, OUTPUT);
  pinMode(8, OUTPUT);

  expander1.begin(0x3F);
  expander2.begin(0x3B);
  expander3.begin(0x3D);
  expander4.begin(0x3E);
  expander5.begin(0x38);
  expander6.begin(0x3c);
  expander7.begin(0x3A);
  expander8.begin(0x39);

  for(int i=0; i<8; i++){
    expander1.pinMode(i, OUTPUT);
    expander2.pinMode(i, OUTPUT);
    expander3.pinMode(i, OUTPUT);
    expander4.pinMode(i, OUTPUT);
    expander5.pinMode(i, OUTPUT);
    expander6.pinMode(i, OUTPUT);
    expander7.pinMode(i, OUTPUT);
    expander8.pinMode(i, OUTPUT);
  }
}

void loop()
{
  
}