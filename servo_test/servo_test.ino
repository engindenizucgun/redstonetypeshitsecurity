#include <ESP32Servo.h>

Servo myServo;
const int PWM_PIN = 4;

void setup() {
  Serial.begin(115200);
  myServo.setPeriodHertz(50);
  myServo.attach(PWM_PIN, 500, 2500);
}

void loop() {
  myServo.write(90);
  delay(3000);

  myServo.write(0);
  delay(3000);
}
