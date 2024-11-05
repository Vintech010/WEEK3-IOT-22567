#include <Arduino.h>

void setup(){
  Serial.begin(115200);
  delay(250); //250ms = 0.25s
  Serial.print("ESP32 Touch Test!");
  pinMode(13,OUTPUT);//PIN GIOP13 connect to LED
  digitalWrite(13,LOW);//PIN GIOP13 = OFF
  }

void loop(){
  if (touchRead(T6)< 45)
  {
    Serial.println("Touch");
    Serial.println(touchRead(T6)); //give value using T6
    digitalWrite(13,HIGH); // PIN GPOI13 = ON(1)
  }
  else{
    Serial.println("Touch");
    Serial.println(touchRead(T6)); //give value using T6
    digitalWrite(13,LOW); // PIN GPOI13 = OFF(0)
  }
  delay(1000); //1000ms = 1s
}