# Plano de execução e evidências

Este documento converte a proposta de pesquisa em tarefas verificáveis. Uma meta só deve ser marcada como concluída quando houver uma evidência vinculada, como código, esquemático, planilha, vídeo, relatório ou aprovação institucional.

## Estado em 16/10/2026

| Frente | Estado | Evidência atual | Próxima ação |
| --- | --- | --- | --- |
| Projeto de pesquisa | Em revisão | [`Projeto-de-Pesquisa-Tinkerer.md`](Documentação-Projeto-Pesquisa/Projeto-de-Pesquisa-Tinkerer.md) | Corrigir inconsistências éticas, técnicas e de metas |
| Requisitos OBR | Em revisão | [`docs/obr/2026/Checklist-OBR-2026.md`](../obr/2026/Checklist-OBR-2026.md) | Atualizar itens com situação e fonte |
| Arquitetura física | Inicial | [`hardware/esquematicos/pinagem.md`](../../hardware/esquematicos/pinagem.md) | Confirmar componentes e conexões com a equipe |
| Shield Robótica IFRN-SC | Placa oficial definida | [`hardware/pcb/README.md`](../../hardware/pcb/README.md) e [Mapa Shield](https://jacio-m.github.io/Mapa-Shield/) | Confirmar continuidade, polaridade, ENA/ENB e alimentação |
| Lista de materiais | Inicial | [`hardware/componentes/BOM.md`](../../hardware/componentes/BOM.md) | Preencher modelos, quantidades, preços e notas fiscais |
| Firmware Arduino | Esqueleto funcional sem encoder | [`src/arduino/Tinkerer/Tinkerer.ino`](../../src/arduino/Tinkerer/Tinkerer.ino) | Ajustar pinos, instalar componentes e testar em bancada |
| Simulação sBotics | Protótipo de código | [`src/sbotics/code/controle_robot`](../../src/sbotics/code/controle_robot) | Registrar cenários, resultados e limitações da API |
| Testes | Não iniciado | [`src/tests/README.md`](../../src/tests/README.md) | Executar testes de sensores, motores e pista |
| Pesquisa com estudantes | Bloqueada | Não há instrumento nem aprovação anexados | Confirmar tramitação ética antes da coleta |

## Critério de evidência

Para cada teste, registrar:

- data, versão do código e responsáveis;
- objetivo e condições do ensaio;
- componentes e configuração utilizados;
- resultado medido, incluindo falhas;
- vídeo, fotografia, log ou planilha quando aplicável;
- conclusão e próxima decisão.

## Sequência recomendada

1. Confirmar aprovação institucional e ética para qualquer questionário.
2. Fechar a lista de materiais e validar a pinagem antes de energizar o robô.
3. Testar alimentação, sensores e motores separadamente.
4. Decidir se os encoders serão ligados por uma fiação externa ao shield.
5. Validar seguimento de linha em trecho reto.
6. Integrar obstáculo, rampa e garra gradualmente.
7. Repetir o protocolo físico e o virtual com a mesma versão registrada.
8. Publicar resultados medidos e atualizar o cronograma.
