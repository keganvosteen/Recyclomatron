//send motors to center position to attach bracket
//Prof is using dig pins 2 & 3

#include<Servo.h>

Servo Servo1;
float Servo1Home = 90;
int Servo1Pin = 2;

Servo Servo2;
float Servo2Home = 90;
int Servo2Pin = 3;

void setup() {
  // put your setup code here, to run once:
  Servo1.attach(Servo1Pin);
  Servo1.write(Servo1Home);
  
  Servo1.attach(Servo2Pin);
  Servo1.write(Servo2Home);

}

void loop() {
  // put your main code here, to run repeatedly:

}
