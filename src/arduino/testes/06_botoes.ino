/*
 * TESTE 06 - Botões e LEDs
 *
 * Pressione S1, S2 ou S3. O LED correspondente deve acender enquanto
 * o botão estiver pressionado.
 */

const uint8_t BOTOES[] = {29, 33, 41};
const uint8_t LEDS[] = {53, 51, 49};
const uint8_t QUANTIDADE = 3;

void setup() {
  Serial.begin(115200);
  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    pinMode(BOTOES[i], INPUT_PULLUP);
    pinMode(LEDS[i], OUTPUT);
  }
  Serial.println(F("\n=== TESTE 06: BOTÕES E LEDS ==="));
  Serial.println(F("Pressione cada botão e observe o LED correspondente.\n"));
}

void loop() {
  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    bool pressionado = digitalRead(BOTOES[i]) == LOW;
    digitalWrite(LEDS[i], pressionado);
    Serial.print(F("Botão S"));
    Serial.print(i + 1);
    Serial.print(F(": "));
    Serial.println(pressionado ? F("pressionado - LED aceso") : F("livre - LED apagado"));
  }
  Serial.println();
  delay(250);
}
