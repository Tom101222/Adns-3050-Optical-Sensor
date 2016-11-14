#include "ADNS3050.h"
#include <SPI.h>

void setup() {
  startup(2000);

}

void loop() {
  byte id = 0;
  id= Read(PROD_ID);
Serial.println(id);
delay(1000);



}
