#include <Servo.h>

Servo   servo_1;
String  cadena;
float   angulo;

void setup() {
  servo_1.attach(13); //pwm pin
  Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    cadena = Serial.readStringUntil('\n');
    angulo = cadena.toFloat();
    servo_1.write(angulo);
  }
}
