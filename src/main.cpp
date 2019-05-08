#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);

}

void loop() {
digitalWrite(8, 1);
delay(1000);
digitalWrite(8, 0);
delay(1000);
  // put your main code here, to run repeatedly:
}
