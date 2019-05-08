/*
"z" od 1 do 8 to tak na prawde od 12 do 5


*/

#include <Wire.h>    // Required for I2C communication
#include <PCF8574.h> // Required for PCF8574

bool led[8][8][8];

PCF8574 expander1;
PCF8574 expander2;
PCF8574 expander3;
PCF8574 expander4;
PCF8574 expander5;
PCF8574 expander6;
PCF8574 expander7;
PCF8574 expander8;

void setup() {

  expander1.begin(0x3C);
  expander2.begin(0x3A);
  expander3.begin(0x39);
  expander4.begin(0x38);
  expander5.begin(0x3E);
  expander6.begin(0x3D);
  expander7.begin(0x3B);
  expander8.begin(0x3F);
      
      pinMode(12, INPUT);    
      pinMode(11, INPUT);
      pinMode(10, INPUT);
      pinMode(9, INPUT);
      pinMode(8, INPUT);
      pinMode(7, INPUT);
      pinMode(6, INPUT);
      pinMode(5, INPUT);

  zapal(1, 1, 1);
}

void loop() {
    zapal(1, 1, 1);
    delay(1000);
    zapal(8, 1, 1);
    delay(1000);
    zapal(1, 8, 1);
    delay(1000);
    zapal(8, 8, 1);
    delay(1000);
    zapal(1, 1, 8);
    delay(1000);
    zapal(8, 1, 8);
    delay(1000);
    zapal(1, 8, 8);
    delay(1000);
    zapal(8, 8, 8);
    delay(1000);
}

