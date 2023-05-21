const auto buttonPin = 2;

const auto carRedLedPin = 3;
const auto carYellowLedPin = 5;
const auto carGreenLedPin = 6;

const auto pedRedLedPin = 10;
const auto pedGreenLedPin = 9;

const auto crossTime = 10000;//Time to people cross the street and the cars too.

auto changeTime = 0;
void setup(){
  pinMode(buttonPin, INPUT);
  
  pinMode(carRedLedPin, OUTPUT);
  pinMode(carYellowLedPin, OUTPUT);
  pinMode(carGreenLedPin, OUTPUT);
  
  pinMode(pedRedLedPin, OUTPUT);
  pinMode(pedGreenLedPin, OUTPUT);  
  
  //Default settings
  digitalWrite(carGreenLedPin, HIGH);
  digitalWrite(pedRedLedPin, HIGH);

}

void loop(){
  int state = digitalRead(buttonPin);
  if(state == HIGH && ((millis() - changeTime) > crossTime))
    changeLights();
}

void changeLights(){
  digitalWrite(carGreenLedPin, LOW);
	digitalWrite(carYellowLedPin, HIGH);
  delay(1500);
  digitalWrite(carYellowLedPin, LOW);
  digitalWrite(carRedLedPin, HIGH);
	delay(500);
  digitalWrite(pedRedLedPin, LOW);
  digitalWrite(pedGreenLedPin, HIGH);
  delay(crossTime);
  for(auto x = 0; x < 10; x++){
		digitalWrite(pedGreenLedPin, HIGH);
		delay(250);
    digitalWrite(pedGreenLedPin, LOW);
    delay(250);
    }	
	digitalWrite(pedRedLedPin, HIGH);
	delay(1500);
  digitalWrite(carRedLedPin, LOW);
	digitalWrite(carGreenLedPin, HIGH);
	
  changeTime = millis();
}
