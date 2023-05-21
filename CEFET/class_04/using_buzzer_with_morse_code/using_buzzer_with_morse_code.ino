const int buzzerPin = 9 ;
const int toneValue = 500;
const int longLine = 700;
const int shortLine = 400;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin, toneValue, shortLine);
  delay(2000);
  tone(buzzerPin, toneValue, shortLine);
  delay(2000);
  tone(buzzerPin, toneValue, shortLine);
  delay(2000);
  tone(buzzerPin, toneValue, longLine);
  delay(3000);
  tone(buzzerPin, toneValue, shortLine);
  delay(2000);
  tone(buzzerPin, toneValue, shortLine);
  delay(3000);
  tone(buzzerPin, toneValue, longLine);
  delay(3000);
  tone(buzzerPin, toneValue, longLine);
  delay(2000);
  tone(buzzerPin, toneValue, longLine);
  delay(2000);
  tone(buzzerPin, toneValue, longLine);
  delay(3000);
  tone(buzzerPin, toneValue, shortLine);
  delay(2000);
    tone(buzzerPin, toneValue, longLine);
    delay(2000);
    tone(buzzerPin, toneValue, shortLine);
    delay(2000);
}

