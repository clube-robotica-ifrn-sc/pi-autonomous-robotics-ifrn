/*
 * TESTE 07 - Barramento I2C
 *
 * O Arduino procura dispositivos conectados nos pinos SDA e SCL.
 * No Mega 2560, SDA = D20 e SCL = D21.
 */

#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(115200);
  Serial.println(F("\n=== TESTE 07: BARRAMENTO I2C ==="));
  Serial.println(F("Procurando sensores em SDA (D20) e SCL (D21)...\n"));
}

void loop() {
  uint8_t encontrados = 0;
  Serial.println(F("Nova busca:"));
  for (uint8_t endereco = 1; endereco < 127; endereco++) {
    Wire.beginTransmission(endereco);
    uint8_t erro = Wire.endTransmission();
    if (erro == 0) {
      Serial.print(F("Dispositivo encontrado no endereço 0x"));
      if (endereco < 16) Serial.print('0');
      Serial.println(endereco, HEX);
      encontrados++;
    }
  }
  Serial.print(F("Total de dispositivos encontrados: "));
  Serial.println(encontrados);
  delay(2000);
}
