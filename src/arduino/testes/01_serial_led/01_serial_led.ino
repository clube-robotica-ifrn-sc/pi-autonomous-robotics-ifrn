/*
 * TESTE 01 - LED e comunicação serial
 *
 * Este teste confirma que o Arduino está ligado, executando o programa
 * e conversando com o computador.
 */

const uint8_t STATUS_LED = 13;

void setup() {
  pinMode(STATUS_LED, OUTPUT);
  Serial.begin(115200);
  Serial.println(F("\n=== TESTE 01: LED E SERIAL ==="));
  Serial.println(F("Se esta mensagem apareceu, o Arduino esta funcionando."));
  Serial.println(F("O LED deve piscar uma vez por segundo.\n"));
}

void loop() {
  static bool ligado = false;
  ligado = !ligado;
  digitalWrite(STATUS_LED, ligado);
  Serial.println(ligado ? F("LED aceso") : F("LED apagado"));
  delay(1000);
}
