#include "ADNS3050.h"
#include <SPI.h>
#include <Mouse.h>

byte x = 0;
byte y = 0;

void setup() {
startup();//setup communication

pinMode(8,INPUT_PULLUP);
pinMode(9,INPUT_PULLUP);
Mouse.begin(); //start mouse emulation

}


void loop() {
x = getX();
y = 0-getY();
Mouse.move(x,y,0);//Move the cursor

  if(digitalRead(9)==0){ //if the the left mouse button is pressed, press it
    Mouse.press(MOUSE_LEFT);
    while(digitalRead(9)==0){// while it is pressed move the cursor if the mouse is moved
      x = getX();
y = 0-getY();
  Mouse.move(x,y,0);
  delay(10);
    }
  }
   Mouse.release();//release the left mouse button
   
    if(digitalRead(8)==0){//if the the right mouse button is pressed, press it
    Mouse.press(MOUSE_RIGHT);
    while(digitalRead(8)==0){{// while it is pressed move the cursor if the mouse is moved
    x = getX();
    y = 0-getY();
  Mouse.move(x,y,0);
      delay(10);
    }
    }
  
Mouse.release(MOUSE_RIGHT);//release the right mouse button
}
}
