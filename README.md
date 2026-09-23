# Projeto de Monitoramento de Temperaturas

## 1. Identificação

**Nome do aluno: Carlos Eduardo Nunes Siqueira
**Disciplina:** Algoritmos e pensamento computacional
**Professora:** Profa. Karla Sartin  
**Título do projeto:** Monitoramento de Temperaturas

## 2. Objetivo

O objetivo deste projeto é desenvolver um programa em linguagem C para realizar o monitoramento de temperaturas.

O programa recebe um limite de temperatura e depois realiza várias leituras. Durante o monitoramento, ele verifica se as temperaturas estão acima do limite e identifica quando ocorrem três temperaturas consecutivas acima desse valor.

Quando isso acontece, o monitoramento é encerrado automaticamente e o programa apresenta um relatório com os resultados obtidos.

## 3. Funcionamento do programa

Primeiro, o usuário informa o limite de temperatura que será utilizado durante o monitoramento.

Depois disso, o programa solicita as temperaturas uma por uma.

As entradas são verificadas para evitar valores inválidos. Caso seja informado um valor fora da faixa permitida, o programa solicita uma nova entrada.

Cada temperatura válida é utilizada nos cálculos do programa.

Quando uma temperatura é maior que o limite definido, o programa aumenta a quantidade de temperaturas acima do limite e também aumenta o contador de temperaturas consecutivas.

Caso seja digitada uma temperatura que não esteja acima do limite, o contador de temperaturas consecutivas volta para zero.

O monitoramento continua até que sejam registradas três temperaturas consecutivas acima do limite.

Ao final, o programa apresenta:

- quantidade de leituras;
- média das temperaturas;
- maior temperatura registrada;
- menor temperatura registrada;
- quantidade de temperaturas acima do limite;
- percentual de temperaturas acima do limite.

## 4. Estruturas de repetição utilizadas

Foram utilizadas as estruturas `while` e `do...while`.

O `do...while` foi utilizado na validação das entradas. Essa estrutura foi escolhida porque o programa precisa solicitar um valor pelo menos uma vez antes de verificar se ele é válido.

O `while` foi utilizado para controlar o monitoramento das temperaturas. Enquanto não existirem três temperaturas consecutivas acima do limite, o programa continua solicitando novas leituras.

A combinação das duas estruturas permite controlar tanto a validação dos dados quanto a repetição das leituras.

## 5. Como executar

Para compilar o programa utilizando o GCC:

```bash
gcc monitoramento.c -o monitoramento
