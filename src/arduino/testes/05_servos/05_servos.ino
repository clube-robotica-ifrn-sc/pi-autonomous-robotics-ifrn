/*
 * TESTE 05 - Servos da garra
 *
 * Retire qualquer carga e confira se a garra tem espaço para se mover.
 * Os dois servos passam pelas posições inicial, central e final.
 */

#include <Servo.h>

Servo servoA;
Servo servoB;
const uint8_t SERVO_A_PIN = 9;
const uint8_t SERVO_B_PIN = 8;

void setup() {
  Serial.begin(115200);
  servoA.attach(SERVO_A_PIN);
  servoB.attach(SERVO_B_PIN);
  servoA.write(90);
  servoB.write(90);
  Serial.println(F("\n=== TESTE 05: SERVOS ==="));
  Serial.println(F("Confira o movimento dos dois servos sem carga."));
  Serial.println(F("Se houver esforço ou travamento, desligue a alimentação.\n"));
}

void loop() {
  Serial.println(F("Movendo os servos para 0 graus"));
  servoA.write(0);
  servoB.write(0);
  delay(1000);

  Serial.println(F("Movendo os servos para 90 graus"));
  servoA.write(90);
  servoB.write(90);
  delay(1000);

  Serial.println(F("Movendo os servos para 180 graus"));
  servoA.write(180);
  servoB.write(180);
  delay(1000);
}
