# Sketches de teste de bancada

Cada pasta contém um sketch independente para carregar no Arduino Mega 2560.
Carregue somente um sketch por vez e mantenha as rodas suspensas nos testes de
motor.

| Sketch | Verifica |
| --- | --- |
| `01_serial_led` | Arduino, comunicação serial e LED de status |
| `02_motores` | Motor A e motor B em três velocidades |
| `03_refletancia` | Quatro sensores analógicos de linha |
| `04_sonares` | Sonares esquerdo, frontal e direito |
| `05_servos` | Servo A e Servo B |
| `06_botoes` | S1, S2, S3 e LEDs da placa |
| `07_i2c` | Presença de dispositivos no barramento I²C |

## Procedimento

1. Confira VCC, GND e a alimentação dos motores antes de energizar.
2. Abra o monitor serial em `115200 baud`, salvo indicação contrária.
3. Registre o sketch, a bateria e a pinagem no relatório de teste.
4. Desligue a alimentação antes de trocar fios ou componentes.

### Refletância

No sketch `03_refletancia`, mantenha cada sensor sobre uma superfície por
alguns segundos e envie `P` no monitor serial para registrar mínimo, máximo,
média e faixa. Envie `R` antes de cada condição (piso claro e linha preta),
para que as estatísticas não misturem as duas medições. Salve as linhas CSV e
o resumo no registro de teste; elas permitem comparar contraste e repetibilidade
antes de definir o limiar usado no firmware principal.

O sketch de sonares usa a tabela da pinagem oficial (`D22/D24`, `D16/D17`
e `D23/D25`) e assume a ordem `TRIG/ECHO`. Confirme a ordem física dos fios
antes de conectar. O teste de I²C apenas detecta endereços; ele não substitui
o teste específico do IMU ou do sensor de cor.
