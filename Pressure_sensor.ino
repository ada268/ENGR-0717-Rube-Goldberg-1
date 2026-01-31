//https://arduinogetstarted.com/tutorials/arduino-force-sensor

void setup() {
  pinMode(LED_BUILTIN,OUTPUT); //setting builtin LED as output
  pinMode(A0,INPUT); //setting pin A0 as an input
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
  if(analogRead(A0)>200)
  {
    digitalWrite(LED_BUILTIN,HIGH); //turns on LED if the pressure sensor is pressed
  }
  else
  {
    digitalWrite(LED_BUILTIN,LOW); //turns off LED if the pressure sensor is not pressed
  }
}
