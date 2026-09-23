# Projeto de Monitoramento de Temperaturas

## 1. Identificação

- **Nome do aluno:** Carlos Eduardo Nunes Siqueira
- **Disciplina:** Algoritmos e Pensamento Computacional
- **Professora:** Profa. Karla Sartin
- **Título do projeto:** Monitoramento de Temperaturas

## 2. Objetivo

O objetivo deste projeto é desenvolver um programa em linguagem C para realizar o monitoramento de temperaturas.

O programa permite definir um limite de temperatura e depois realizar várias leituras. Durante o monitoramento, ele verifica se as temperaturas estão acima do limite e controla quantas temperaturas consecutivas ultrapassaram esse valor.

Quando são registradas três temperaturas consecutivas acima do limite, o programa encerra o monitoramento automaticamente e apresenta um relatório final.

## 3. Funcionamento do programa

Primeiro, o usuário informa o limite de temperatura que será utilizado no monitoramento.

O programa aceita valores entre -50 e 100 graus. Caso o usuário digite um valor fora dessa faixa, o programa informa que o valor é inválido e solicita uma nova entrada.

Depois de definir o limite, o programa começa a solicitar as temperaturas.

Cada temperatura válida é utilizada para realizar os cálculos do programa.

Quando uma temperatura é maior que o limite definido, o programa:

- aumenta a quantidade de temperaturas acima do limite;
- aumenta o contador de temperaturas consecutivas acima do limite.

Caso seja digitada uma temperatura que esteja dentro do limite, o contador de temperaturas consecutivas volta para zero.

O monitoramento continua enquanto não forem registradas três temperaturas consecutivas acima do limite.

Quando isso acontece, o programa encerra automaticamente e apresenta:

- quantidade de leituras realizadas;
- média das temperaturas;
- maior temperatura registrada;
- menor temperatura registrada;
- quantidade de temperaturas acima do limite;
- percentual de temperaturas acima do limite.

## 4. Estruturas de repetição utilizadas

Foram utilizadas as estruturas `while` e `do...while`.

O `do...while` foi utilizado na validação das entradas. Ele foi escolhido porque o programa precisa solicitar um valor pelo menos uma vez antes de verificar se ele é válido.

O `while` foi utilizado para controlar o monitoramento das temperaturas.

Enquanto não forem registradas três temperaturas consecutivas acima do limite, o programa continua solicitando novas temperaturas.

A combinação das duas estruturas permite controlar a validação dos valores e também a repetição das leituras.

## 5. Como executar

Para compilar o programa utilizando o GCC:

```bash
gcc monitoramento.c -o monitoramento
