const int PinRedLed = 22;
const int PinYellowLed = 23;
const int PinGreenLed = 24;
const int PinLdr = A0;
int valueOfLdr = 0;
void setup() {
  Serial.begin(9600);
  pinMode(PinRedLed, OUTPUT);
  pinMode(PinYellowLed, OUTPUT);
  pinMode(PinGreenLed, OUTPUT);
  pinMode(PinLdr, INPUT);
}

void loop() {
  Serial.println(valueOfLdr);
 
  do{
    valueOfLdr = analogRead(PinLdr);
    digitalWrite(PinGreenLed, HIGH);
    delay(10000);
    digitalWrite(PinGreenLed, LOW);
    digitalWrite(PinYellowLed, HIGH);
    delay(3000);
    digitalWrite(PinYellowLed, LOW);
    digitalWrite(PinRedLed, HIGH);
    delay(7000);
    digitalWrite(PinRedLed,LOW);
  }while(valueOfLdr>=900)
    digitalWrite(PinGreenLed, LOW);
    digitalWrite(PinYellowLed, LOW);
    digitalWrite(PinRedLed,LOW);

}
