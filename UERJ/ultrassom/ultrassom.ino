#define trig 2
#define echo 3
#define led 7
void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {

  //pinMode(trig,OUTPUT);
  digitalWrite(trig, LOW); 
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  //pintMode(echo, INPUT);
  int duration = pulseIn(echo, HIGH);
  int cm = (duration/2)/ 29.1;

  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  //Caso o ultrassom detecte um objeto a uma proximidade de 10cm ou menor, o LED será acesso, caso não, o LED ficará desligado.
  cm <= 10 ? digitalWrite(led,HIGH) : digitalWrite(led, LOW);
}
