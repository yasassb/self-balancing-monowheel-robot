#include <ESP32Servo.h>

Servo servo;

void servo_init() {

  ESP32PWM::allocateTimer(3);
  servo.setPeriodHertz(50);  // standard 50 hz servo
  servo.attach(servo_pin, 500, 2400);
  delay(10);
  drive_servo(&init_servo_pos);
  Serial.println("Servo Initialized");
}

void drive_servo(int* angle) {

  servo.write(*angle);
}