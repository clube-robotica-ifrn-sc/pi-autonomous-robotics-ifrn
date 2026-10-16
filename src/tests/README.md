# Protocolo de validação

Os testes devem ser executados por etapas e registrados em relatórios separados. O código testado, a pinagem e a configuração da bateria precisam ser identificados em cada registro.

## Testes de bancada

1. **Continuidade e polaridade:** verificar curto entre VCC e GND, polaridade da bateria e tensão de cada trilho.
2. **Arduino:** carregar o firmware, confirmar comunicação serial e observar estabilidade por cinco minutos.
3. **Motores:** testar cada motor em baixa, média e alta velocidade; registrar sentido, ruído e aquecimento.
4. **Sensores de linha:** medir leituras sobre piso claro e linha preta; registrar limiares e repetibilidade.
5. **Ultrassônico:** medir obstáculos a 10, 20, 30 e 50 cm; registrar erro e leituras inválidas.
6. **Servo e garra:** executar 50 ciclos sem carga e 50 ciclos com o objeto padrão; registrar falhas.

## Testes de integração

- trecho reto de pelo menos 2 m;
- curvas abertas e fechadas;
- obstáculo parado;
- rampa e retomada da linha;
- captura e deposição da vítima;
- parada pelo botão e recuperação após perda de linha.

## Métricas

| Métrica | Método | Meta inicial |
| --- | --- | --- |
| Seguimento de linha | tentativas concluídas sem sair da pista | ≥ 80% |
| Desvio de obstáculo | tentativas sem colisão | 100% no conjunto validado |
| Garra | apreensões corretas em 50 ciclos | 100% no teste de bancada |
| Percurso físico | 30 tentativas válidas | < 4 min em ≥ 70% |
| Simulação | cinco cenários documentados | ≥ 80% de sucesso |

Metas são critérios planejados até que existam medições. Resultados devem ser publicados com denominador, condições e falhas observadas.
