#include "ADNS3050.h"
#include <SPI.h>

void setup() {
  startup();

}

void loop() {
  byte id = 0;
  id= Read(PROD_ID);
  if (id == 9){
 Serial.println("Communication Succesful");
  }
Serial.println(id);
delay(1000);



}
