# Shield Robótica IFRN-SC — placa oficial do projeto

A placa mostrada pela equipe e documentada no [Mapa Shield](https://jacio-m.github.io/Mapa-Shield/) é a placa oficial que será usada no protótipo. Os arquivos originais do projeto Eagle estão em [`projeto-eagle/original/`](projeto-eagle/original/). O pacote possui variantes diferentes (`lobo8` e `lobo9`) e deve ser tratado apenas como material de referência, nunca como fonte da pinagem operacional.

## Arquivos organizados

- [`projeto-eagle/original/Shield-Robotica-IFRN-SC.zip`](projeto-eagle/original/Shield-Robotica-IFRN-SC.zip): pacote original recebido.
- [`mapa/`](mapa/README.md): índice de apoio para conferência visual da placa.
- O ZIP contém os arquivos Eagle originais; eles ainda não foram extraídos nesta árvore.

## Pinagem confirmada pelo mapa da placa física

| Conector/função | Pinos do Arduino | Observação |
| --- | --- | --- |
| `MOTORES-DC` | D7, D6, D5, D4 | Respectivamente L298N `IN1`, `IN2`, `IN3`, `IN4` |
| Alimentação dos motores | VCC, GND | Alimentação da ponte H/motores |
| Chave geral | VCC, GND | Interrupção da alimentação |
| Motor A | Saída da L298N | Motor redutor CHR-GM25-370 6 V |
| Motor B | Saída da L298N | Motor redutor CHR-GM25-370 6 V |
| `SERVO-A` | D9 | PWM |
| `SERVO-B` | D8 | PWM |
| `REFLETANCIA` | A0, A1, A2, A3 | Quatro sensores analógicos |
| `SONAR_ESQUERDO` | D22, D24 | VCC, TRIG/ECHO, GND |
| `SONAR_FRONT` | D16, D17 | Serial2: TX2/RX2 |
| `SONAR_DIREITO` | D23, D25 | TRIG/ECHO |
| `ITG/MPU` | D21, D20, D2 | SCL, SDA e interrupção |
| `COR-B-I2C` | D50, D20, D21 | Seleção/controle e I²C |
| `COR-A-I2C` | D38, D20, D21 | Seleção/controle e I²C |
| `COR-B` | D44, D42, D40 | Sensores de cor |
| `COR-A` | D32, D30, D28 | Sensores de cor |
| LEDs da placa | D53, D51, D49 | LED1, LED2 e LED3 |
| Botões | D29, D33, D41 | S1, S2 e S3 |
| `RASP-COM` | D14, D15 | Serial3: TX3/RX3 |
| `RASP-SUPPLY` | VCC, GND | Alimentação auxiliar |
| Medidor de tensão | +5 V, GND, VIN | Confirmar divisor e tensão máxima |

## Encoder dos motores

O CHR-GM25-370 pode possuir encoder com canais A e B, mas os conectores `MOTOR-A` e `MOTOR-B` representados no mapa expõem apenas a alimentação do motor. Não há uma pinagem dedicada documentada para os encoders neste shield. A leitura de encoder exige fiação externa para pinos livres e confirmação de VCC, GND, nível lógico e canais A/B.

## Componentes usados no mapa

- Ponte H L298N.
- Dois motores redutores CHR-GM25-370, 6 V, aproximadamente 210 RPM.
- Arduino Mega como controlador.
- Três sonares e quatro sensores de refletância.
- Servos nos canais A e B.
- MPU/ITG no barramento I²C.

## Relação com o arquivo Eagle

O mapa online da placa física indica `SONAR_FRONT` em D16/D17, três sonares e botões em D29, D33 e D41. A tabela baseada na variante `lobo9` foi descartada para evitar que o firmware seja montado com a pinagem errada.

## Pendências de montagem

1. Confirmar a ordem física dos fios TRIG/ECHO nos conectores dos sonares.
2. Confirmar a polaridade dos motores e corrigir o sentido por software se necessário.
3. Confirmar se `ENA/ENB` da L298N estão habilitados.
4. Medir a tensão da alimentação dos motores e do Arduino antes de instalar a placa.
5. Verificar se o medidor de tensão possui divisor compatível com a entrada usada.

## Fontes técnicas

- [Mapa Shield da equipe](https://jacio-m.github.io/Mapa-Shield/).
- [Arduino Mega 2560 — documentação oficial](https://docs.arduino.cc/hardware/mega-2560/).
- [L298 — datasheet da STMicroelectronics](https://www.st.com/resource/en/datasheet/l298.pdf).
- [Motor CHR-GM25-370 com encoder](https://www.proesi.com.br/motor-dc-com-enconder-e-adaptador-6v-210rpm).
