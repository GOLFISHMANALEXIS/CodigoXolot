#include <Servo.h>

Servo servo1;
Servo servo2;
int angulo1 = 90; // Ángulo inicial del primer servo
int angulo2 = 90; // Ángulo inicial del segundo servo
int botonPin = 2; // Pin del botón
bool servo1Activo = true; // Variable para alternar entre los servos

void setup() {
  servo1.attach(3); // Conecta el primer servo al pin 9
  servo2.attach(4); // Conecta el segundo servo al pin 10
  pinMode(botonPin, INPUT_PULLUP); // Configura el pin del botón como entrada con resistencia pull-up
  servo1.write(angulo1); // Mueve el primer servo a la posición inicial de 90°
  servo2.write(angulo2); // Mueve el segundo servo a la posición inicial de 90°
}

void loop() {
  if (digitalRead(botonPin) == LOW) { // Si se presiona el botón
    // Alterna entre los servos
    if (servo1Activo) {
      angulo1 += 10; // Incrementa el ángulo del primer servo en 10 grados
      if (angulo1 > 180) angulo1 = 0; // Reinicia el ángulo a 0 grados si supera 180 grados
      servo1.write(angulo1); // Mueve el primer servo al nuevo ángulo
    } else {
      angulo2 += 10; // Incrementa el ángulo del segundo servo en 10 grados
      if (angulo2 > 180) angulo2 = 0; // Reinicia el ángulo a 0 grados si supera 180 grados
      servo2.write(angulo2); // Mueve el segundo servo al nuevo ángulo
    }
    servo1Activo = !servo1Activo; // Alterna entre los servos
    delay(100); // Pequeña pausa para evitar múltiples pulsos del botón
  }
}
