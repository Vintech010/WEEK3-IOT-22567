#include <Arduino.h>

void setup(){
  Serial.begin(115200);
  Serial.print("Hello World");
}

void loop(){
  Serial.println("This is loop code");
  delay(1000); //1000ms = 1s
}