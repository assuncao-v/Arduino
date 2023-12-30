#include <RH_ASK.h>
#include <SPI.h>
#include "dht.h"

dht DHT; // This will create a object dht
RH_ASK driver; // This will create the driver to communicate.

const int pinDHT11 = A2;

void setup() {
  driver.init();
  Serial.begin(9600);
}

void loop() {
  DHT.read11(pinDHT11);
  char buffer[50];
  sprintf(buffer,"%d", DHT.temperature);
  
  
  
  delay(2000);

  /*const char *temperature = */
  Serial.println(temperature);
  /*if(digitalRead(pinButton) == LOW){
    driver.send((uint8_t *)msg, strlen(msg));
    driver.waitPacketSent();
    delay(200);
  }*/
}
