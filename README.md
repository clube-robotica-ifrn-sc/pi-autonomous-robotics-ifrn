<p align="center">
  <img src="assets/img/Campus%20Santa%20Cruz%20-%20Logo_Negat%20Hor.png" alt="Logo IFRN Campus Santa Cruz" width="260" />
</p>

# Tinkerer: construção de robô autônomo e avaliação do conhecimento em robótica na OBR

[![Instituição](https://img.shields.io/badge/IFRN-Campus%20Santa%20Cruz-green.svg)](https://portal.ifrn.edu.br/)
[![Competição](https://img.shields.io/badge/OBR-N%C3%ADvel%202%20%7C%20N%C3%ADvel%205-blue.svg)](https://www.obr.org.br/)
[![Hardware](https://img.shields.io/badge/Hardware-Arduino%20MEGA%202560-00979D.svg)](https://www.arduino.cc/)
[![Simulação](https://img.shields.io/badge/Simula%C3%A7%C3%A3o-sBotics-orange.svg)](https://sbotics.net/)
![Linguagem](https://img.shields.io/badge/Linguagem-C%2B%2B%20%2F%20C%23-orange.svg)
[![Licença](https://img.shields.io/badge/Licen%C3%A7a-MIT-yellow.svg)](LICENSE)

> Repositório do estudo de caso desenvolvido no Instituto Federal de Educação, Ciência e Tecnologia do Rio Grande do Norte (IFRN) – Campus Santa Cruz.

## 1. Apresentação

Este projeto investiga a construção de um robô autônomo e a avaliação do conhecimento em robótica no contexto da Olimpíada Brasileira de Robótica (OBR). A proposta reúne desenvolvimento de hardware, simulação, programação e fundamentação teórica em uma base acadêmica e reutilizável.

O Tinkerer é um robô autônomo de baixo custo, baseado na plataforma Arduino Mega 2560, projetado para executar tarefas de seguimento de linha, detecção de obstáculos, transposição de rampas e resgate em ambientes físico e simulado.

## 2. Objetivos

### Objetivo geral

Construir e documentar um robô autônomo para a OBR e analisar como o desenvolvimento do protótipo contribui para a aprendizagem e a avaliação do conhecimento em robótica no IFRN Campus Santa Cruz.

### Objetivos específicos

Entre os principais objetivos, destacam-se:

- desenvolver uma plataforma robótica funcional e de baixo custo;
- implementar um modelo equivalente no simulador sBotics;
- produzir documentação técnica e material de apoio para futuras equipes;
- avaliar conhecimentos de eletrônica, microcontroladores, programação e robótica;
- promover a integração entre teoria, prática, simulação e trabalho em equipe.

## 3. Frentes do projeto

O projeto está organizado em três frentes complementares:

1. **Robô físico (Nível 2):** seguimento de linha, desvio de obstáculos, transposição de rampas e mecanismo de resgate.
2. **Robô virtual (Nível 2):** modelo implementado em C# no ambiente sBotics.
3. **Formação e avaliação (Nível 5):** fundamentos de eletrônica digital, microcontroladores, lógica de programação e questões para acompanhar a aprendizagem.

A base documental foi concebida para reduzir retrabalho, registrar evidências e apoiar a inserção de novas equipes no desenvolvimento do projeto.

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

O repositório está na etapa de organização e consolidação da base do projeto. A estrutura já separa documentação, hardware, simulação, testes e código-fonte; os módulos de implementação serão preenchidos conforme os incrementos de desenvolvimento e as validações do protótipo.
.
├── README.md
├── LICENSE
├── assets/                 # Imagens e materiais visuais
├── docs/
│   ├── arquitetura/        # Arquitetura e decisões técnicas
│   ├── teoria/             # Fundamentos e material de apoio
│   └── relatorios/         # Testes, reuniões e resultados
├── hardware/
│   ├── 3d/                 # Peças e modelos mecânicos
│   ├── componentes/        # Lista e documentação de componentes
│   └── esquematicos/       # Esquemas e diagramas eletrônicos
├── script/                 # Scripts de automação e suporte
└── src/
  ├── arduino/            # Firmware do robô físico
  ├── common/             # Código compartilhado
  ├── sbotics/            # Robô virtual e componentes do sBotics
  └── tests/              # Testes e cenários de validação
```

### Organização por área funcional

- `docs/`: documentação técnica, relatórios, referências teóricas e materiais de apoio.
- `hardware/`: esquemáticos eletrônicos, peças mecânicas, modelos 3D e materiais de montagem.
- `src/arduino/`: código específico para o microcontrolador Arduino.
- `src/sbotics/`: implementação e testes do robô no ambiente virtual sBotics.
- `src/common/`: bibliotecas e utilitários reutilizáveis.
- `src/tests/`: cenários de validação e testes de comportamento.

## 6. Destaques do projeto

- Controle PID discreto para ajuste de trajetória sobre a linha.
- Arquitetura modular de baixo custo, com foco em soluções acessíveis.
- Mecanismo de resgate em impressão 3D, acionado por servomotor.
- Validação planejada em ambiente físico e virtual.
- Documentação técnica aberta para apoiar aprendizagem e continuidade.

## 7. Metodologia de desenvolvimento

O projeto é conduzido em ciclos de desenvolvimento e validação, permitindo evolução incremental do protótipo, da simulação e da documentação.

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

## Avaliação da aprendizagem

A avaliação combina evidências do processo e do resultado. Serão considerados a compreensão de eletrônica e microcontroladores, a capacidade de explicar sensores e atuadores, a implementação de algoritmos, o desempenho nos cenários físico e virtual e o registro das decisões da equipe.

Os instrumentos previstos incluem material de apoio, questões teóricas, atividades práticas, testes de simulação e relatórios de evolução. Cada registro deve informar data, objetivo, método, resultado observado e conclusão, distinguindo metas planejadas de resultados já medidos.

## Documentação relacionada

- [Documentação do projeto](docs/README.md)
- [Arquitetura](docs/arquitetura/README.md)
- [Base teórica](docs/teoria/README.md)
- [Relatórios e validações](docs/relatorios/README.md)
- [Código-fonte](src/README.md)
- [Componentes do sBotics](src/sbotics/components.md)

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
