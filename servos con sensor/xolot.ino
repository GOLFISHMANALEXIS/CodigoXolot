#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

const int trigPin1 = 9;  // Pin de salida del primer sensor ultrasónico
const int echoPin1 = 10; // Pin de entrada del primer sensor ultrasónico
const int trigPin2 = 6;  // Pin de salida del segundo sensor ultrasónico
const int echoPin2 = 7;  // Pin de entrada del segundo sensor ultrasónico
const int buttonPin = 8;

boolean servosInverted = false;

void setup() {
  Serial.begin(9600);
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);

  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
}

void loop() {
  // Medir la distancia utilizando el primer sensor ultrasónico
  long duration1, distance1;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = duration1 * 0.034 / 2;

  // Medir la distancia utilizando el segundo sensor ultrasónico
  long duration2, distance2;
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = duration2 * 0.034 / 2;

  // Verificar si el botón ha sido presionado
  if (digitalRead(buttonPin) == LOW) {
    servo1.write(55);
    servo2.write(55);
    servo3.write(55);
    servo4.write(55);
    delay(500);
  } else {
    if (distance1 <= 10 || distance2 <= 10) {
      if (servosInverted) {
        servo1.write(0);
        servo2.write(0);
        servo3.write(0);
        servo4.write(0);
      } else {
        servo1.write(110);
        servo2.write(110);
        servo3.write(110);
        servo4.write(110);
      }
      servosInverted = !servosInverted;

      // Imprimir la distancia en el monitor serie
      Serial.print("Distancia 1: ");
      Serial.print(distance1);
      Serial.print(" | Distancia 2: ");
      Serial.println(distance2);

      delay(500);
    }
  }
}
