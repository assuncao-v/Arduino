#include <LiquidCrystal.h>
LiquidCrystal LCD(2,3,4,6,7,8,9,10,11,12,13);

void setup() {
  LCD.begin(2,16);
}

void loop() {
  LCD.clear();
  for(int i = 0; i < 16; i++){
    LCD.scrollDisplay();
    LCD.setCursor(i,0);
    LCD.print("Caio esta do lado do Vitor");
    delay(1000);
    LCD.clear();
  }
}
