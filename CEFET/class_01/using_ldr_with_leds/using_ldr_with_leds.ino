const int PinLedRGB = 8;
const int PinLdr = A0;
void setup() {
  Serial.begin(9600);
  pinMode(PinLedRGB,OUTPUT);
  pinMode(PinLdr, INPUT);
}

void loop() {
  int valueOfLdr = analogRead(PinLdr);

  Serial.println(valueOfLdr);
  valueOfLdr >= 900 ? digitalWrite(PinLedRGB, HIGH) : digitalWrite(PinLedRGB, LOW);

                               
}
