# Metas e atividades do projeto

Este documento organiza o plano de execução em metas, atividades, responsáveis, indicadores, períodos e formas de comprovação. Foi separado da proposta para facilitar o acompanhamento.

[Voltar à proposta do projeto](Projeto-de-Pesquisa-Tinkerer.md) · [DOCX original](Projeto-de-Pesquisa-Tinkerer-Original.docx)

---

_Construção de robô autônomo e avaliação do conhecimento em robótica na OBR — IFRN Campus Santa Cruz_

## Meta 1 — 01/06/2026 até 16/08/2026

**Descrição da Meta:** Elaboração do projeto de pesquisa e apresentação como Projeto Integrador

| Ordem | Descrição | Responsável | Indicador Quantitativo | Qtd. | Período | Indicador Qualitativo | Forma de Comprovação |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | Redação do documento de projeto (resumo, justificativa, fundamentação, objetivos, metodologia, resultados esperados), conforme Edital nº 01/2026-PROPI/RE/IFRN | Antonny Adryan de Andrade | Documento de projeto finalizado | 1 | De 01/06/2026 até 30/06/2026 | Documento submetido no SUAP | Documento SUAP |
| 2 | Apresentação do projeto como Projeto Integrador para banca/turma | Jácio Mauê do Nascimento Silva | Apresentações realizadas | 1 | De 01/07/2026 até 16/08/2026 | Feedback da banca incorporado ao refinamento do escopo e cronograma | Slides/Ata de apresentação |

## Meta 2 — 17/08/2026 até 06/09/2026

**Descrição da Meta:** Levantamento de requisitos da OBR e seleção de componentes

| Ordem | Descrição | Responsável | Indicador Quantitativo | Qtd. | Período | Indicador Qualitativo | Forma de Comprovação |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | Análise dos regulamentos das modalidades prática (N2), virtual (N2) e teórica (N5) da OBR e elaboração de checklist de conformidade | Gervásio Filho Souza de Lima | Checklist de requisitos elaborado | 1 | De 17/08/2026 até 24/08/2026 | Cobertura de todos os requisitos técnicos das três modalidades | Documento/checklist |
| 2 | Levantamento, cotação e aquisição de componentes eletrônicos e estruturais (Arduino MEGA 2560, sensores, ponte H, servo, garra reaproveitada) | Cícero Bento Dantas Fernandes | Lista de componentes especificados e adquiridos | 1 | De 25/08/2026 até 06/09/2026 | Custo total do protótipo inferior a R$ 800,00 | Notas fiscais/Fotos/relatório |

## Meta 3 — 07/09/2026 até 01/11/2026

**Descrição da Meta:** Desenvolvimento do protótipo via sprints ágeis (Scrum)

| Ordem | Descrição | Responsável | Indicador Quantitativo | Qtd. | Período | Indicador Qualitativo | Forma de Comprovação |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | Sprint 1 (MVP): implementação do seguimento de linha em trecho reto e calibração inicial do PID | Antonny Adryan de Andrade | Percentual de acerto no seguimento de linha | 80 (%) | De 07/09/2026 até 20/09/2026 | Ausência de overshoot superior a 5 cm em curvas fechadas | Vídeo/relatório de testes |
| 2 | Sprint 2: desvio de obstáculos (HC-SR04) e lógica de navegação, com ajuste de ganhos PID em curvas | Cícero Bento Dantas Fernandes | Distância mínima de desvio validada | 15 (cm) | De 21/09/2026 até 04/10/2026 | Robô desvia sem colisão em 100% das tentativas testadas | Vídeo/relatório de testes |
| 3 | Sprint 3: transposição de rampa (sensor Tilt) e acionamento da garra (servo) | Gervásio Filho Souza de Lima | Número de estados da FSM implementados | 5 | De 05/10/2026 até 18/10/2026 | Transições de estado ocorrendo de forma determinística, sem conflito entre rotinas | Vídeo/relatório de testes |
| 4 | Sprint 4: integração total do sistema e finalização do firmware | Jácio Mauê do Nascimento Silva | Protótipo funcional integrado | 1 | De 19/10/2026 até 01/11/2026 | Robô executa o percurso completo (linha, rampa, resgate) sem intervenção humana | Vídeo do protótipo |

## Meta 4 — 24/08/2026 até 25/11/2026

**Descrição da Meta:** Aplicação de questionário diagnóstico sobre conhecimento em robótica (em paralelo às Metas 2 e 3)

| Ordem | Descrição | Responsável | Indicador Quantitativo | Qtd. | Período | Indicador Qualitativo | Forma de Comprovação |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | Elaboração e validação do instrumento de coleta (questionário estruturado) | Antonny Adryan de Andrade | Questionário validado | 1 | De 24/08/2026 até 06/09/2026 | Instrumento aprovado, conforme Edital nº 01/2026 | Instrumento de pesquisa |
| 2 | Aplicação do questionário junto aos discentes do IFRN Campus Santa Cruz | Cícero Bento Dantas Fernandes | Número de respondentes | 100 | De 07/09/2026 até 25/11/2026 | Diversidade de perfis (cursos e níveis de ensino) representada na amostra | Base de dados/planilha de respostas |

## Meta 5 — 02/11/2026 até 15/11/2026

**Descrição da Meta:** Validação do protótipo físico e virtual (sBotics)

| Ordem | Descrição | Responsável | Indicador Quantitativo | Qtd. | Período | Indicador Qualitativo | Forma de Comprovação |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | Testes cronometrados na pista física, com repetições e análise estatística | Jácio Mauê do Nascimento Silva | Tempo médio de percurso | 4 (min, em 70% das tentativas) | De 02/11/2026 até 08/11/2026 | Robô mantém-se dentro da faixa de navegação durante toda a reta | Planilha de testes/vídeo |
| 2 | Validação cruzada no simulador sBotics (C#), com ambiente randomizado | Gervásio Filho Souza de Lima | Taxa de sucesso no sBotics | 80 (%) | De 09/11/2026 até 15/11/2026 | Comportamento do robô consistente entre pista física e simulação | Relatório de validação/prints |

## Meta 6 — 26/10/2026 até 24/11/2026

**Descrição da Meta:** Sistematização do conhecimento em guia técnico aberto (GitHub) e caderno teórico (inicia em paralelo à Sprint 4)

| Ordem | Descrição | Responsável | Indicador Quantitativo | Qtd. | Período | Indicador Qualitativo | Forma de Comprovação |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | Redação e publicação do guia técnico: montagem mecânica, esquemático elétrico, código comentado, calibração, protocolo de testes e solução de problemas | Antonny Adryan de Andrade | Número de páginas | 6 | De 26/10/2026 até 15/11/2026 | Guia permite que uma equipe futura reproduza o protótipo sem apoio direto da equipe original | Link do repositório GitHub |
| 2 | Elaboração do caderno teórico com questões comentadas (Nível 5) sobre eletrônica, programação e robótica | Jácio Mauê do Nascimento Silva | Número de questões comentadas | 20 | De 16/11/2026 até 24/11/2026 | Questões alinhadas à BNCC e ao Parecer CNE/CEB nº 2/2022 | Caderno de questões (PDF) |

## Meta 7 — 01/11/2026 até 01/12/2026

**Descrição da Meta:** Disseminação dos resultados junto à comunidade acadêmica

| Ordem | Descrição | Responsável | Indicador Quantitativo | Qtd. | Período | Indicador Qualitativo | Forma de Comprovação |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | Redação e submissão de artigo/trabalho científico com os resultados do projeto | Antonny Adryan de Andrade | Artigo/trabalho submetido | 1 | De 01/11/2026 até 25/11/2026 | Consistência teórica e metodológica do artigo | Comprovante de submissão |
| 2 | Apresentação do projeto na EXPOTEC e produção de conteúdo multimídia (vídeos/posts) | Cícero Bento Dantas Fernandes | Produtos de divulgação gerados | 2 (apresentação + conteúdo multimídia) | De 26/11/2026 até 01/12/2026 | Engajamento e interesse de novas equipes despertado a partir da divulgação | Fotos/links das publicações |

