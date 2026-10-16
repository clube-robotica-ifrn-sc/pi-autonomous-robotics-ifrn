/*
 * TESTE 02 - Motores
 *
 * Deixe as rodas suspensas antes de iniciar. O teste aumenta a velocidade
 * gradualmente, para e depois gira os motores no sentido contrario.
 */

const uint8_t MOTOR_A_IN1 = 7;
const uint8_t MOTOR_A_IN2 = 6;
const uint8_t MOTOR_B_IN1 = 5;
const uint8_t MOTOR_B_IN2 = 4;

void motor(uint8_t in1, uint8_t in2, int16_t velocidade) {
  velocidade = constrain(velocidade, -255, 255);
  if (velocidade > 0) {
    analogWrite(in1, velocidade);
    analogWrite(in2, 0);
  } else if (velocidade < 0) {
    analogWrite(in1, 0);
    analogWrite(in2, -velocidade);
  } else {
    analogWrite(in1, 0);
    analogWrite(in2, 0);
  }
}

void parar() {
  motor(MOTOR_A_IN1, MOTOR_A_IN2, 0);
  motor(MOTOR_B_IN1, MOTOR_B_IN2, 0);
}

void setup() {
  pinMode(MOTOR_A_IN1, OUTPUT);
  pinMode(MOTOR_A_IN2, OUTPUT);
  pinMode(MOTOR_B_IN1, OUTPUT);
  pinMode(MOTOR_B_IN2, OUTPUT);
  Serial.begin(115200);
  parar();
  Serial.println(F("\n=== TESTE 02: MOTORES ==="));
  Serial.println(F("Deixe as rodas suspensas e observe o sentido de giro."));
  Serial.println(F("Nao encoste nas rodas enquanto estiverem girando.\n"));
}

void loop() {
  const int16_t velocidades[] = {80, 140, 220};
  for (uint8_t i = 0; i < 3; i++) {
    Serial.print(F("Os dois motores: frente, velocidade "));
    Serial.println(velocidades[i]);
    motor(MOTOR_A_IN1, MOTOR_A_IN2, velocidades[i]);
    motor(MOTOR_B_IN1, MOTOR_B_IN2, velocidades[i]);
    delay(2000);
    parar();
    delay(1000);
  }

  Serial.println(F("Os dois motores: reverso, velocidade 100"));
  motor(MOTOR_A_IN1, MOTOR_A_IN2, -100);
  motor(MOTOR_B_IN1, MOTOR_B_IN2, -100);
  delay(2000);
  parar();
  delay(3000);
}
