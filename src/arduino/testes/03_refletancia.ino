/*
 * TESTE 03 - Sensores de refletância
 *
 * Aproxime cada sensor de uma superfície clara e depois de uma linha preta.
 * Os valores aparecem no monitor serial para comparação.
 *
 * Durante a coleta, use:
 *   r - zera as estatísticas acumuladas
 *   p - imprime mínimo, máximo, média e faixa por sensor
 */

const uint8_t SENSORES[] = {A0, A1, A2, A3};
const uint8_t QUANTIDADE = sizeof(SENSORES) / sizeof(SENSORES[0]);
const unsigned long INTERVALO_AMOSTRA_MS = 100;

uint16_t minimos[QUANTIDADE];
uint16_t maximos[QUANTIDADE];
uint32_t somas[QUANTIDADE];
uint32_t amostras = 0;
unsigned long ultimaAmostra = 0;

void zerarEstatisticas() {
  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    minimos[i] = 1023;
    maximos[i] = 0;
    somas[i] = 0;
  }
  amostras = 0;
}

void imprimirEstatisticas() {
  Serial.println(F("# estatisticas"));
  if (amostras == 0) {
    Serial.println(F("# sem_amostras"));
    return;
  }

  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    Serial.print(F("# A"));
    Serial.print(i);
    Serial.print(F(" min="));
    Serial.print(minimos[i]);
    Serial.print(F(" max="));
    Serial.print(maximos[i]);
    Serial.print(F(" media="));
    Serial.print((float)somas[i] / amostras, 1);
    Serial.print(F(" faixa="));
    Serial.println(maximos[i] - minimos[i]);
  }
  Serial.print(F("# amostras="));
  Serial.println(amostras);
}

void processarComandos() {
  while (Serial.available() > 0) {
    char comando = Serial.read();
    if (comando == 'r' || comando == 'R') {
      zerarEstatisticas();
      Serial.println(F("# estatisticas_resetadas"));
    } else if (comando == 'p' || comando == 'P') {
      imprimirEstatisticas();
    }
  }
}

void setup() {
  Serial.begin(115200);
  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    pinMode(SENSORES[i], INPUT);
  }
  zerarEstatisticas();
  Serial.println(F("\n=== TESTE 03: SENSORES DE LINHA ==="));
  Serial.println(F("Mova os sensores sobre o piso claro e sobre a linha preta."));
  Serial.println(F("Envie R para zerar ou P para imprimir estatisticas."));
  Serial.println(F("tempo_ms,sensor_A0,sensor_A1,sensor_A2,sensor_A3"));
}

void loop() {
  processarComandos();
  unsigned long agora = millis();
  if (agora - ultimaAmostra < INTERVALO_AMOSTRA_MS) return;
  ultimaAmostra = agora;

  Serial.print(millis());
  for (uint8_t i = 0; i < QUANTIDADE; i++) {
    uint16_t valor = analogRead(SENSORES[i]);
    if (valor < minimos[i]) minimos[i] = valor;
    if (valor > maximos[i]) maximos[i] = valor;
    somas[i] += valor;
    Serial.print(',');
    Serial.print(valor);
  }
  amostras++;
  Serial.println();
}
