#include <Servo.h>

Servo myservo;

int potpin = A0; // Potentiometer pin
int val;

void setup() {
  myservo.attach(3); // Servo signal pin
}

void loop() {
  val = analogRead(potpin); // 0 - 1023
  // Map pot value so center = stop, edges = full speed
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val); // 0=full reverse, 90=stop, 180=full forward
  delay(20);
}