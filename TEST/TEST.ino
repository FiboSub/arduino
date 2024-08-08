#include <Servo.h>

Servo s;  // create servo object to control a servo

void setup() {
  pinMode(2, OUTPUT);
  s.attach(2);  // attaches the servo on pin 9 to the servo object

  s.writeMicroseconds(1500);
  delay(6000);

  // for (int i = 1500; i <= 1900; i += 50) {
  //   s.writeMicroseconds(i);
  //   delay(1000);
  // }
}

void loop() {
  s.writeMicroseconds(1600);
}
