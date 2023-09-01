#include <Stepper.h>
#include <Servo.h>

#define STEPS 32
#define MOTOR_IN1 2
#define MOTOR_IN2 3
#define MOTOR_IN3 4
#define MOTOR_IN4 5

Stepper stepper(STEPS, MOTOR_IN4, MOTOR_IN2, MOTOR_IN3, MOTOR_IN1);

Servo servo1;
Servo servo2;

const int trigPin = 9;
const int echoPin = 10;
const int buttonPin = 7;

boolean servosInverted = false;

void setup() {
  Serial.begin(9600);
  servo1.attach(6); // Use un pin diferente para el servo 1
  servo2.attach(8); // Use un pin diferente para el servo 2

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  stepper.setSpeed(100); // Establece una velocidad predeterminada para el motor
  stepper.step(0); // Asegura que el motor esté detenido al inicio
}

void loop() {
  int val = analogRead(A0);
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (digitalRead(buttonPin) == LOW) {
    servo1.write(0);
    servo2.write(0);
    delay(500);
  } else {
    if (distance <= 10) {
      if (servosInverted) {
        servo1.write(0);
        servo2.write(180);
      } else {
        servo1.write(180);
        servo2.write(0);
      }
      servosInverted = !servosInverted;
      Serial.print("Distancia: ");
      Serial.println(distance);

      delay(500);
    } else {
      // Control del motor basado en el valor del joystick
      if ((val > 500) && (val < 523)) {
        stepper.step(0); // Detener el motor
      } else if (val >= 523) {
        int speed_ = map(val, 523, 1023, 5, 500);
        stepper.setSpeed(speed_);
        stepper.step(1);
      } else if (val <= 500) {
        int speed_ = map(val, 500, 0, 5, 500);
        stepper.setSpeed(speed_);
        stepper.step(-1);
      }
    }
  }
}
