#include <LiquidCrystal.h>

#define UVPort A5
LiquidCrystal LCD(2,3,4,6,7,8,9,10,11,12,13);


void setup() {
  LCD.begin(2,16);
  Serial.begin(9600);
  pinMode(UVPort, INPUT);
}

void loop() {
  int valueFromInput = analogRead(UVPort);
  long value = map(valueFromInput, 0, 1023, 0, 10);
  Serial.println(valueFromInput);
  delay(100);
  LCD.write(valueFromInput);
}
