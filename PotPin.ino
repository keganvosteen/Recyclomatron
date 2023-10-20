int PotPin = A5; //only input, no definition
int PotValue = 0; //store potentiometer value

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //arbitrary communication rate
  

}

void loop() {
  // put your main code here, to run repeatedly:
  PotValue = analogRead(PotPin);
  Serial.print("The potentiometer value is: ");
  Serial.println(PotValue);

}
