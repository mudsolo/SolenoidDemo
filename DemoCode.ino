/*
  Solenoid Demo

  Turns a Solenoid on, then off, while interchangably turning another Solenoid off, then on.

  Utlilizes an ATtiny85, with special libraries needed to burn bootloader and upload code. 

  modified 19 May 2026
  by mudcup

*/
// Rename your pins
int leftSol = 0;
int rightSol = 1;

// Identify output pins
void setup() {
  pinMode(leftSol, OUTPUT);
  pinMode(rightSol, OUTPUT);
}

void loop() {
  digitalWrite(leftSol, HIGH);  // Activate Left Side
  digitalWrite(rightSol, LOW); 
  delay(1000);                      // wait
  digitalWrite(leftSol, LOW);   
  digitalWrite(rightSol, HIGH); // Activate Right Side
  delay(1000);                      // wait 
}
