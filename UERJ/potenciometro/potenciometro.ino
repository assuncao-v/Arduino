#define pot A0
#define led 5

void setup() {
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(pot);
  long valueTransformed = map(value,0,1025,0,255);
  Serial.println(valueTransformed);
  analogWrite(led, valueTransformed);
}
