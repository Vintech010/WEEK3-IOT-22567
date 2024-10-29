#include <Arduino.h>

#define LED 2
#define LED2 0
#define LED3 4
#define LED4 16

void setup()
{
  pinMode(LED, OUTPUT); //Set pin mode
  pinMode(LED2, OUTPUT); //Set pin mode
  pinMode(LED3, OUTPUT); //Set pin mode
  pinMode(LED4, OUTPUT); //Set pin mode
}

void loop() {
  delay(500); //0.5 sec
  digitalWrite(LED,HIGH); //HIGH = 1
  delay(500); //0.5 sec
  digitalWrite(LED,LOW); //LOW = 0
  delay(500); //0.5 sec
  digitalWrite(LED2,HIGH); //HIGH = 1
  delay(500); //0.5 sec
  digitalWrite(LED2,LOW); //LOW = 0
  delay(500); //0.5 sec
  digitalWrite(LED3,HIGH); //HIGH = 1
  delay(500); //0.5 sec
  digitalWrite(LED3,LOW); //LOW = 0
  delay(500); //0.5 sec
  digitalWrite(LED4,HIGH); //HIGH = 1
  delay(500); //0.5 sec
  digitalWrite(LED4,LOW); //LOW = 0
}