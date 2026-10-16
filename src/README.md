# Código-fonte

Este diretório reúne os módulos de software do projeto.

## Organização

- `arduino/`: firmware do robô embarcado.
- `common/`: bibliotecas e utilitários reutilizáveis.
- `sbotics/`: lógica da simulação virtual.
- `tests/`: testes automatizados ou cenários de verificação.

O firmware inicial de bancada está em [`arduino/Tinkerer/Tinkerer.ino`](arduino/Tinkerer/Tinkerer.ino). Ele cobre leitura de linha, controle diferencial, PID PD e parada por botão; os demais módulos devem ser integrados depois dos testes unitários.

Os sketches independentes para validar cada componente físico estão em
[`arduino/testes/`](arduino/testes/). Eles devem ser carregados individualmente
no Arduino Mega, seguindo o procedimento descrito no README daquele diretório.

## Recomendação

Manter separação clara entre lógica embarcada, compartilhada e simulada para evitar acoplamento e facilitar manutenção. Os procedimentos de validação estão em [`tests/README.md`](tests/README.md).
