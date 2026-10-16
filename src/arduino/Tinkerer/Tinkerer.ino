/*
 * Tinkerer - firmware inicial para Arduino Mega 2560
 *
 * Este firmware implementa a base segura para bancada: leitura de cinco
 * sensores de linha, controle diferencial por ponte H, PID PD e parada por
 * botão. Obstáculos, rampa e resgate devem ser integrados somente depois de
 * os testes unitários registrados em src/tests/ serem concluídos.
 */

#include <Arduino.h>

// O shield lobo9 expõe quatro entradas no conector REFLETANCIA: A0..A3.
const uint8_t LINE_PINS[] = {A0, A1, A2, A3};
const int16_t LINE_WEIGHTS[] = {-1500, -500, 500, 1500};
const uint8_t LINE_COUNT = 4;

// Mapa da placa oficial: D7/D6 = L298N IN1/IN2 (motor A) e
// D5/D4 = L298N IN3/IN4 (motor B). Todos são PWM no Mega.
const uint8_t LEFT_IN1 = 7;
const uint8_t LEFT_IN2 = 6;
const uint8_t RIGHT_IN1 = 5;
const uint8_t RIGHT_IN2 = 4;
const uint8_t START_BUTTON = 33;
const uint8_t STATUS_LED = 13;

const int BASE_SPEED = 110;
const int MAX_SPEED = 220;
const float KP = 0.045f;
const float KD = 0.12f;
const int LINE_THRESHOLD = 500;

bool running = false;
int16_t lastError = 0;
unsigned long lastSample = 0;

void setMotor(uint8_t in1, uint8_t in2, int speed) {
  speed = constrain(speed, -255, 255);
  if (speed > 0) {
    analogWrite(in1, speed);
    analogWrite(in2, 0);
  } else if (speed < 0) {
    analogWrite(in1, 0);
    analogWrite(in2, -speed);
  } else {
    analogWrite(in1, 0);
    analogWrite(in2, 0);
  }
}

void stopMotors() {
  setMotor(LEFT_IN1, LEFT_IN2, 0);
  setMotor(RIGHT_IN1, RIGHT_IN2, 0);
}

bool readLine(int16_t &error) {
  long weighted = 0;
  int active = 0;
  for (uint8_t i = 0; i < LINE_COUNT; i++) {
    int value = analogRead(LINE_PINS[i]);
    bool onLine = value < LINE_THRESHOLD;
    if (onLine) {
      weighted += LINE_WEIGHTS[i];
      active++;
    }
  }
  if (active == 0) return false;
  error = weighted / active;
  return true;
}

void setup() {
  for (uint8_t i = 0; i < LINE_COUNT; i++) pinMode(LINE_PINS[i], INPUT);
  pinMode(LEFT_IN1, OUTPUT);
  pinMode(LEFT_IN2, OUTPUT);
  pinMode(RIGHT_IN1, OUTPUT);
  pinMode(RIGHT_IN2, OUTPUT);
  pinMode(START_BUTTON, INPUT_PULLUP);
  pinMode(STATUS_LED, OUTPUT);
  Serial.begin(115200);
  stopMotors();
}

void loop() {
  if (digitalRead(START_BUTTON) == LOW) {
    delay(30);
    if (digitalRead(START_BUTTON) == LOW) {
      running = !running;
      while (digitalRead(START_BUTTON) == LOW) delay(1);
    }
  }

  digitalWrite(STATUS_LED, running ? HIGH : LOW);
  if (!running) {
    stopMotors();
    return;
  }

  unsigned long now = millis();
  float dt = (now - lastSample) / 1000.0f;
  if (dt <= 0.0f || dt > 0.5f) dt = 0.01f;
  lastSample = now;

  int16_t error = 0;
  if (!readLine(error)) {
    stopMotors();
    Serial.println(F("LINE_LOST"));
    return;
  }

  float derivative = (error - lastError) / dt;
  int correction = (int)(KP * error + KD * derivative);
  lastError = error;

  int left = constrain(BASE_SPEED + correction, -MAX_SPEED, MAX_SPEED);
  int right = constrain(BASE_SPEED - correction, -MAX_SPEED, MAX_SPEED);
  setMotor(LEFT_IN1, LEFT_IN2, left);
  setMotor(RIGHT_IN1, RIGHT_IN2, right);

  Serial.print(now);
  Serial.print(',');
  Serial.print(error);
  Serial.print(',');
  Serial.print(left);
  Serial.print(',');
  Serial.println(right);
  delay(10);
}
