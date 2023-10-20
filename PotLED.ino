int PotPin = A5; //only input, no definition
int PotValue = 0; //store potentiometer value

int LEDPin =3; //digital pin for LED (needs to be PWM pin)
int LEDValue = 0; //will store value to be written to LED

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //arbitrary communication rate
  pinMode(LEDPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  PotValue = analogRead(PotPin); //number between 0 and 1023
  Serial.print("The potentiometer value is: ");
  Serial.println(PotValue);
  //analogWrite requires a number between 0 and 255
  //analogRead takes in a number between 0 and 1023
  LEDValue = map(PotValue,0,1023,0,255);
  analogWrite(LEDPin,LEDValue+;


}
