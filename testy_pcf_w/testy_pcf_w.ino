#include <PCF8574.h>
#include <Wire.h>

#define builtLED   (1<<PB0)
#define builtLED_ON PORTB |= builtLED
#define builtLED_OFF  PORTB &= ~builtLED
#define builtLED_TOG  PORTB ^= builtLED

PCF8574 expander [9];

int lvl[9] = {-1, 0, 2, 3, 14, 15, 16, 17};

void setup()
{
  for(int i=1; i<=8; i++){
    pinMode(lvl[i], OUTPUT);
    digitalWrite(lvl[i], LOW);
  }
  pinMode(8, OUTPUT);
  builtLED_ON;

  expander[1].begin(0x3F);
  expander[2].begin(0x3B);
  expander[3].begin(0x3D);
  expander[4].begin(0x3E);
  expander[5].begin(0x39);
  expander[6].begin(0x3A);
  expander[7].begin(0x3C);
  expander[8].begin(0x38);

  for(int i=1; i<=8; i++){
    for(int j=0; j<8; j++){
      expander[i].pinMode(j, OUTPUT);
      expander[i].digitalWrite(j, HIGH);
    }
  }
}

void loop()
{
//  digitalWrite(lvl[1], HIGH);
//  for(int i=1; i<=8; i++){
//    for(int j=0; j<4; j++){
//      expander[i].digitalWrite(j, LOW);
//    }
//    for(int j=7; j>=4; j--){
//      expander[i].digitalWrite(j, LOW);       
//    }
//  }
  delay(100);
  builtLED_TOG;
  for(int i=1; i<=8; i++){
    for(int j=0; j<4; j++){
      expander[i].digitalWrite(j, HIGH);
    }
    for(int j=7; j>=4; j--){
      expander[i].digitalWrite(j, HIGH);
    }
  }
  
}
