#include "led_control.h"

int ledPin;

void LED_Init(int pin) {
    ledPin = pin;
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);
}

void LED_On() {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED is ON");
}

void LED_Off() {
    digitalWrite(ledPin, LOW);
    Serial.println("LED is OFF");
}