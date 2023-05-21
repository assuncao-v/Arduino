const int buzzerPin = 9;
const int ldrPin = 0;
int ldrValue = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);
  tone(buzzerPin, 1000);
  delay(25);
  noTone(buzzerPin);
  delay(ldrValue);
}
