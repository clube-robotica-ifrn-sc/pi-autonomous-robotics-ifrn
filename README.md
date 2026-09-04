<p align="center">
  <img src="assets/img/Campus%20Santa%20Cruz%20-%20Logo_Negat%20Hor.png" alt="Logo IFRN Campus Santa Cruz" width="260" />
</p>

# Projeto Integrador: Robô Autônomo para a Olimpíada Brasileira de Robótica

[![Instituição](https://img.shields.io/badge/IFRN-Campus%20Santa%20Cruz-green.svg)](https://portal.ifrn.edu.br/)
[![Competição](https://img.shields.io/badge/OBR-N%C3%ADvel%202%20%7C%20N%C3%ADvel%205-blue.svg)](https://www.obr.org.br/)
[![Plataforma](https://img.shields.io/badge/Hardware-Arduino%20MEGA%202560-00979D.svg)](https://www.arduino.cc/)
[![Simulador](https://img.shields.io/badge/Virtual-sBotics%20(C%23)-purple.svg)](https://sbotics.net/)
[![Linguagem](https://img.shields.io/badge/Linguagem-C%2B%2B%20%2F%20C%23-orange.svg)]
[![Licença](https://img.shields.io/badge/Licen%C3%A7a-MIT-yellow.svg)](LICENSE)

> Repositório com materiais, códigos, simulações e documentação técnica do projeto integrador desenvolvido no Instituto Federal de Educação, Ciência e Tecnologia do Rio Grande do Norte (IFRN) – Campus Santa Cruz.

## 1. Apresentação

Este projeto tem como objetivo desenvolver e documentar uma solução tecnológica para a participação de estudantes em competições de robótica educacional, com foco na Olimpíada Brasileira de Robótica (OBR). A proposta foi estruturada como uma iniciativa acadêmica e aplicada, reunindo desenvolvimento de hardware, simulação, programação e fundamentos teóricos em uma base consolidada e reutilizável.

A solução contempla o desenvolvimento de um robô autônomo de baixo custo, baseado na plataforma Arduino Mega 2560, capaz de executar tarefas relacionadas ao seguimento de linha, detecção de obstáculos, transposição de rampas e resgate de objetos em ambiente simulado e físico.

## 2. Objetivo geral

O repositório centraliza uma solução replicável e de baixo custo para a construção e validação de robôs autônomos voltados à OBR, com abordagem pedagógica e técnica que favorece a formação profissional e o aprendizado em áreas como eletrônica, microcontroladores, programação, automação e desenvolvimento de sistemas embarcados.

Entre os principais objetivos, destacam-se:

- desenvolver uma plataforma robótica funcional para a modalidade presencial da OBR;
- implementar um modelo equivalente em ambiente virtual utilizando o simulador sBotics;
- produzir documentação técnica e material de apoio para futuras equipes;
- promover a integração entre teoria, prática e metodologia de trabalho em equipe.

## 3. Escopo do projeto

O projeto está organizado em três frentes complementares:

1. Modalidade prática presencial (Nível 2): robô físico com seguimento de linha, desvio de obstáculos, transposição de rampas e mecanismo de resgate.
2. Modalidade virtual (Nível 2): modelo implementado e validado em ambiente simulado em C#.
3. Modalidade teórica (Nível 5): material de apoio com fundamentos em eletrônica digital, microcontroladores, lógica de programação e banco de questões resolvidas.

A base documental foi concebida para reduzir retrabalho, padronizar processos e acelerar a inserção de novas equipes no desenvolvimento do projeto.

## 4. Estado atual da estrutura

O repositório apresenta a organização inicial do projeto, com pastas destinadas à documentação, ao hardware, à simulação, aos testes e ao código-fonte. Neste momento, os diretórios de implementação ainda estão vazios e o projeto se encontra na etapa de planejamento e consolidação dos requisitos.

A prioridade atual é definir claramente o fluxo de trabalho do projeto e dividir as responsabilidades entre:

- firmware do robô e sensores;
- lógica compartilhada e utilitários;
- simulação virtual no sBotics;
- testes e validação comportamental;
- documentação de arquitetura, materiais e relatórios.

### Próximos passos recomendados

1. Definir a arquitetura funcional do robô e seus módulos eletrônicos.
2. Estabelecer a padronização de nomenclatura e organização de arquivos.
3. Separar o código em camadas: hardware, lógica, simulação e testes.
4. Registrar requisitos, decisões técnicas e evidências de validação em documentação.
5. Criar checklist de desenvolvimento por sprint para acompanhar evolução do projeto.

## 5. Estrutura do repositório

```text
.
├── README.md
├── LICENSE
├── docs/
│   ├── arquitetura/
│   ├── teoria/
│   └── relatorios/
├── hardware/
│   ├── esquematicos/
│   ├── 3d/
│   └── componentes/
├── src/
│   ├── arduino/
│   ├── sbotics/
│   ├── common/
│   └── tests/
├── script/
├── assets/
├── .github/
├── .gitignore
└── LICENSE
```

### Organização por área funcional

- `docs/`: documentação técnica, relatórios, referências teóricas e materiais de apoio.
- `hardware/`: esquemáticos eletrônicos, peças mecânicas, modelos 3D e materiais de montagem.
- `src/arduino/`: código-fonte específico para o microcontrolador Arduino e módulos embarcados.
- `src/sbotics/`: implementação e testes do robô no ambiente virtual sBotics.
- `src/common/`: bibliotecas, utilitários e rotinas compartilhadas.
- `src/tests/`: cenários de validação e testes de comportamento.
- `script/`: scripts de automação, compilação e suporte ao desenvolvimento.
- `assets/`: imagens, diagramas, vídeos e outros materiais visuais.
- `.github/`: templates e fluxos de colaboração do repositório.
- `LICENSE`: termos de distribuição e uso do projeto.

## 6. Destaques do projeto

- Controle PID discreto para ajuste de trajetória sobre a linha.
- Arquitetura modular de baixo custo, com foco em soluções acessíveis e adaptáveis.
- Mecanismo de resgate em impressão 3D, acionado por servomotor.
- Validação em ambiente físico e virtual, ampliando a robustez da solução.
- Documentação técnica aberta, estruturada para apoiar aprendizagem e continuidade de projetos.

## 7. Metodologia de desenvolvimento

O projeto foi conduzido com abordagem ágil, organizada em ciclos de desenvolvimento e validação por etapas, permitindo evolução incremental do protótipo, da simulação e da documentação.

### Backlog de incrementos

| Incremento | Escopo principal |
| :--- | :--- |
| **Inc. 1** | Seguimento de linha com sensores IR e leitura de encoders. |
| **Inc. 2** | Integração de detecção de obstáculos e controle PID em rampas. |
| **Inc. 3** | Implementação do mecanismo de resgate com garra 3D e servomotor. |
| **Inc. 4** | Integração total do robô físico e compatibilidade com o ambiente sBotics. |
| **Inc. 5** | Produção do material teórico e consolidação da documentação do projeto. |

### Critérios de aceitação e indicadores

| Tarefa | Indicador | Meta |
| :--- | :--- | :--- |
| Seguimento de linha | Desvios da faixa preta | ≤ 3 desvios com duração inferior a 2 segundos |
| Desvio de obstáculos | Taxa de sucesso | ≥ 95% |
| Transposição de rampa | Tempo de subida | < 3 segundos sem perda de tração |
| Resgate de vítima | Captura e deposição | ≥ 70% |
| Tempo do percurso físico | Tempo total de pista | ≤ 4 min 30 s |
| Desempenho virtual | Conclusão da missão | ≥ 80% |
| Simulado teórico | Acertos em prova | ≥ 70% |

## 8. Resultados esperados

1. Prototipagem e validação de um robô autônomo capaz de concluir a pista da OBR em tempo competitivo.
2. Implementação de um modelo virtual replicável e funcional no simulador sBotics.
3. Redução de custos de desenvolvimento e acesso à tecnologia por meio de uma solução de baixo custo.
4. Fortalecimento da formação técnica e acadêmica dos estudantes por meio de projetos aplicados.
5. Ampliação da documentação e da base de conhecimento para futuras equipes e projetos institucionais.

## 9. Equipe e orientação

### Discentes

- [Antonny Adryan de Andrade](http://lattes.cnpq.br/3764943485025248)
- [Cícero Bento Dantas Fernandes](http://lattes.cnpq.br/9661989505513469)
- [Gervásio Filho Souza de Lima](http://lattes.cnpq.br/8523883028703687)
- [Jácio Mauê do Nascimento Silva](http://lattes.cnpq.br/1822484917550390)

### Orientação

- [Prof. Gutemberg Santos Santiago](http://lattes.cnpq.br/1423358177316450) — Orientador principal
- [Prof. Karlo Sérgio Medeiros Leopoldino](http://lattes.cnpq.br/1397392760629073) — Coorientador

### Instituição

- Instituto Federal de Educação, Ciência e Tecnologia do Rio Grande do Norte (IFRN) — Campus Santa Cruz
- Curso Técnico de Nível Médio em Informática na Forma Integrada

## 10. Licença

Este projeto é distribuído sob a licença MIT. Consulte o arquivo [LICENSE](LICENSE) para obter mais detalhes.

---

<p align="center">
  <strong>IFRN Campus Santa Cruz</strong><br>
  <em>Projeto Integrador em Robótica Educacional</em>
</p>
