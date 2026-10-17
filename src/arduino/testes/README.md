# Sketches de teste de bancada

Cada arquivo é um sketch independente para carregar no Arduino Mega 2560.
Carregue somente um sketch por vez e mantenha as rodas suspensas nos testes de
motor.

| Sketch | Verifica |
| --- | --- |
| [`01_serial_led.ino`](01_serial_led.ino) | Arduino, comunicação serial e LED de status |
| [`02_motores.ino`](02_motores.ino) | Motor A e motor B em três velocidades |
| [`03_refletancia.ino`](03_refletancia.ino) | Quatro sensores analógicos de linha |
| [`04_sonares.ino`](04_sonares.ino) | Sonares esquerdo, frontal e direito |
| [`05_servos.ino`](05_servos.ino) | Servo A e Servo B |
| [`06_botoes.ino`](06_botoes.ino) | S1, S2, S3 e LEDs da placa |
| [`07_i2c.ino`](07_i2c.ino) | Presença de dispositivos no barramento I²C |

## Procedimento

1. Confira VCC, GND e a alimentação dos motores antes de energizar.
2. Abra o monitor serial em `115200 baud`, salvo indicação contrária.
3. Registre o sketch, a bateria e a pinagem no relatório de teste.
4. Desligue a alimentação antes de trocar fios ou componentes.

### Refletância

No sketch [`03_refletancia.ino`](03_refletancia.ino), mantenha cada sensor sobre uma superfície por
alguns segundos e envie `P` no monitor serial para registrar mínimo, máximo,
média e faixa. Envie `R` antes de cada condição (piso claro e linha preta),
para que as estatísticas não misturem as duas medições. Salve as linhas CSV e
o resumo no registro de teste; elas permitem comparar contraste e repetibilidade
antes de definir o limiar usado no firmware principal.

O sketch de sonares usa a tabela da pinagem oficial (`D22/D24`, `D16/D17`
e `D23/D25`) e assume a ordem `TRIG/ECHO`. Confirme a ordem física dos fios
antes de conectar. O teste de I²C apenas detecta endereços; ele não substitui
o teste específico do IMU ou do sensor de cor.
