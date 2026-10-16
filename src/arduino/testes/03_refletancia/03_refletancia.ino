/*
 * TESTE 03 - Sensores de refletância
 *
 * Aproxime cada sensor de uma superfície clara e depois de uma linha preta.
 * Os valores aparecem no monitor serial para comparação.
 */

const uint8_t SENSORES[] = {A0, A1, A2, A3};
const uint8_t QUANTIDADE = sizeof(SENSORES) / sizeof(SENSORES[0]);

void setup() {
  Serial.begin(115200);
  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    pinMode(SENSORES[i], INPUT);
  }
  Serial.println(F("\n=== TESTE 03: SENSORES DE LINHA ==="));
  Serial.println(F("Mova os sensores sobre o piso claro e sobre a linha preta."));
  Serial.println(F("tempo_ms,sensor_A0,sensor_A1,sensor_A2,sensor_A3"));
}

void loop() {
  Serial.print(millis());
  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    Serial.print(',');
    Serial.print(analogRead(SENSORES[i]));
  }
  Serial.println();
  delay(100);
}
