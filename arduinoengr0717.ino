#include "L9110.h"


L9110 driver(6, 7);

void setup() {

  pinMode(A0,INPUT); //setting pin A0 as an input
  Serial.begin(9600);
  Serial.begin(115200);
  Serial.println();
  Serial.println(__FILE__);
  Serial.print("L9110_LIB_VERSION: ");
  Serial.println(L9110_LIB_VERSION);
  Serial.println();

  driver.begin();
}

void loop() {
  Serial.println(analogRead(A0));
  if(analogRead(A0)>200)
  {
  analogWrite(6, 90); // PWM for speed 
  digitalWrite(7, LOW); // opposite pin LOW 
  delay(100);
 }
  else
  {
    
  }
}
