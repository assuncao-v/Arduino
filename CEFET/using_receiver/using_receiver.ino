#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver; //This wil create the driver to communicate.

const int pinLed = 4;
String str = "";
int statusLed = 0;

void setup() {
  driver.init();
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, LOW);
}

void loop() {
  uint8_t buf[RH_ASK_MAX_MESSAGE_LEN];
  uint8_t buflen = sizeof(buf);

  if(driver.recv(buf, &buflen)){
    str = "";
    int i;

    for(int i = 0; i < buflen; i++){
      str += (char)buf[i];
    }
    if((str.equals("led") && (statusLed ==0 ))){
      statusLed = 1;
      digitalWrite(pinLed, HIGH);
    }else{
      if((str.equals("led") && (statusLed == 1))){
        statusLed = 0;
        digitalWrite(pinLed, LOW);
      }
    }
  }
}
