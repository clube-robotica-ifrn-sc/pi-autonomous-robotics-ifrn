/*
 * TESTE 04 - Sonares
 *
 * Aproxime um obstáculo de cada sensor e confira a distância no monitor
 * serial. Os sensores são lidos um por vez para evitar interferência.
 *
 * Pinagem: esquerdo D22/D24, frontal D16/D17, direito D23/D25.
 * Cada par é TRIG/ECHO. Confirme a ordem física antes de ligar.
 */

struct Sonar {
  const char *nome;
  uint8_t trig;
  uint8_t echo;
};

Sonar sonares[] = {
  {"esquerdo", 22, 24},
  {"frontal", 16, 17},
  {"direito", 23, 25},
};
const uint8_t QUANTIDADE = sizeof(sonares) / sizeof(sonares[0]);

long distanciaCm(const Sonar &sonar) {
  digitalWrite(sonar.trig, LOW);
  delayMicroseconds(3);
  digitalWrite(sonar.trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(sonar.trig, LOW);

  unsigned long duracao = pulseIn(sonar.echo, HIGH, 30000);
  if (duracao == 0) return -1;
  return duracao / 58;
}

void setup() {
  Serial.begin(115200);
  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    pinMode(sonares[i].trig, OUTPUT);
    pinMode(sonares[i].echo, INPUT);
    digitalWrite(sonares[i].trig, LOW);
  }
  Serial.println(F("\n=== TESTE 04: SENSORES ULTRASSÔNICOS ==="));
  Serial.println(F("Aproxime um objeto e compare a distância medida."));
  Serial.println(F("Valor -1 significa que nenhum eco foi recebido.\n"));
}

void loop() {
  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    Serial.print(sonares[i].nome);
    Serial.print('=');
    Serial.print(distanciaCm(sonares[i]));
    Serial.println(F("cm"));
    delay(60);
  }
  Serial.println();
  delay(300);
}
