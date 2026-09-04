# Arquitetura do Projeto

## Visão geral

O robô é composto por três camadas principais:

1. `hardware`: sensores, atuadores e estrutura mecânica.
2. `firmware`: controle do microcontrolador e lógica embarcada.
3. `simulação`: comportamento do robô no ambiente virtual sBotics.

## Estrutura funcional proposta

- Sensores: linha, obstáculos, encoders e demais dispositivos.
- Atuadores: motores, servomotor e mecanismo de resgate.
- Controle: lógica de seguimento de linha, decisão de rota e operação de navegação.
- Comunicação: integração entre módulos e organização do código.

## Objetivo

Garantir que o projeto fique modular, reutilizável e fácil de evoluir por novas equipes ou sprints.
