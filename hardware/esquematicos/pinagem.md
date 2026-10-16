# Pinagem do Shield Robótica IFRN-SC — placa oficial do projeto

Esta é a pinagem oficial da placa física mostrada pela equipe, conferida com o [Mapa Shield](https://jacio-m.github.io/Mapa-Shield/). O projeto Eagle permanece apenas como referência histórica e não deve substituir este mapa.

| Função/conector | Pinos Mega | Direção | Observação |
| --- | --- | --- | --- |
| L298N IN1/IN2 | D7/D6 | Saída PWM | Motor A |
| L298N IN3/IN4 | D5/D4 | Saída PWM | Motor B |
| Servo A | D9 | Saída PWM | `SERVO-A` |
| Servo B | D8 | Saída PWM | `SERVO-B` |
| Refletância | A0, A1, A2, A3 | Entrada analógica | Quatro sensores |
| Sonar esquerdo | D22, D24 | TRIG/ECHO | Confirmar a ordem |
| Sonar frontal | D16, D17 | TX2/RX2 | Serial2; confirmar uso como TRIG/ECHO |
| Sonar direito | D23, D25 | TRIG/ECHO | Confirmar a ordem |
| MPU/ITG | D20/D21 | SDA/SCL | Interrupção em D2 |
| Cor A/B I²C | D20/D21 | SDA/SCL | Barramento compartilhado |
| Cor A | D28, D30, D32 | Entrada/saída | Conector `COR-A` |
| Cor B | D40, D42, D44 | Entrada/saída | Conector `COR-B` |
| LEDs da placa | D49, D51, D53 | Saída | LED3, LED2, LED1 |
| Botões | D29, D33, D41 | Entrada | S1, S2 e S3 |
| Raspberry Pi | D14/D15 | Serial3 | `RASP-COM` |

## Encoder

Os motores podem possuir canais A/B de encoder, mas a placa oficial só documenta VCC/GND nos conectores dos motores. Os canais A/B não fazem parte da pinagem confirmada do shield e exigem uma ligação externa antes de serem usados no firmware.

## Alimentação

- Alimentação dos motores: borne `VCC/GND` da ponte H.
- Alimentação do shield e periféricos: conferir `5V`, `VIN`, `VCC` e GND na serigrafia.
- O GND do Arduino, L298N, sensores e servos deve ser comum.
- Motores e servos não devem ser alimentados por pinos de I/O.

## Pendências antes de energizar

- [x] Confirmar a placa física usada no projeto.
- [ ] Confirmar TRIG/ECHO de cada sonar com continuidade.
- [ ] Confirmar polaridade dos motores A e B.
- [ ] Confirmar se `ENA/ENB` da L298N estão habilitados.
- [ ] Medir VIN, VCC, 5 V e GND sem carga.
- [ ] Testar a chave geral e o botão de reset.
