#include <Arduino.h>
#include "led_control.h"
#include "serial_comm.h"

int myFunction(int, int);

void setup() {

    Serial.begin(9600);  
    LED_Init(LED_BUILTIN);  

}

void loop() {
      Serial_ProcessCommand(); 
}


int myFunction(int x, int y) {
  return x + y;
}