 #include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

const int trigPin = 9;     // Pin de salida del sensor ultrasónico
const int echoPin = 10;    // Pin de entrada del sensor ultrasónico
const int buttonPin = 8;   // Pin para el botón

boolean servosInverted = false; // Indica si los servos están invertidos

void setup() {
  Serial.begin(9600);
  servo1.attach(2); // Pin de control del servo 1
  servo2.attach(3); // Pin de control del servo 2
  servo3.attach(4); // Pin de control del servo 3
  servo4.attach(5); // Pin de control del servo 4

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  pinMode(buttonPin, INPUT_PULLUP); // Configurar el pin del botón con resistencia pull-up
  
  servo1.write(0); // Inicialmente, todos los servos en 0°
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
}

void loop() {
  // Medir la distancia utilizando el sensor ultrasónico
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Verificar si el botón ha sido presionado
  if (digitalRead(buttonPin) == LOW) {
    // Mover todos los servos a la posición de 0 grados
    servo1.write(0);
    servo2.write(0);
    servo3.write(0);
    servo4.write(0);
    delay(500); // Esperar un poco después de mover los servos
  } else {
    // Cambiar la posición de los servos intercaladamente con inversiones en el giro
    if (distance <= 10) {
      if (servosInverted) {
        servo1.write(0);
        servo2.write(180);
        servo3.write(0);
        servo4.write(180);
      } else {
        servo1.write(180);
        servo2.write(0);
        servo3.write(180);
        servo4.write(0);
      }
      servosInverted = !servosInverted; // Cambiar el estado de inversión
      
      // Imprimir la distancia en el monitor serie
      Serial.print("Distancia: ");
      Serial.println(distance);
      
      // Esperar un poco antes de realizar la siguiente medición
      delay(500);
    }
  }
}
