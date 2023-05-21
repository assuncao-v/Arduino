const int pinLeds[] = {13,12,11,10,9,8,7,6,5,4};
const int pinPot = 0;
int ledDelay;
int direction = 1;
int currentLed = 0;
unsigned long changeTime = 0;


void setup(){
  for(auto pin:pinLeds){
    pinMode(pinLeds[pin], OUTPUT);
  }
  changeTime = millis();
  Serial.begin(9600);
}

void loop(){
  ledDelay = analogRead(pinPot);
  if((millis() - changeTime) > ledDelay){
    changeLeds();
    changeTime = millis();
  }
}

void changeLeds(){
  for(auto pin:pinLeds){
    digitalWrite(pinLeds[pin], LOW);
  }
  digitalWrite(pinLeds[currentLed], HIGH);
  currentLed += direction;
  if(currentLed == 9)
    direction = -1;
  if(currentLed == 0)
    direction = 1;
  
}