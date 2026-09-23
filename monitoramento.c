#include <stdio.h>

int main() {

    const float TEMP_MIN = -50.0;
    const float TEMP_MAX = 100.0;

    float limite;
    float temperatura;
    float soma = 0;
    float media;
    float maior = 0;
    float menor = 0;
    float percentualAcima;

    int quantidade = 0;
    int quantidadeAcima = 0;
    int consecutivasAcima = 0;

    printf("=== MONITORAMENTO DE TEMPERATURAS ===\n\n");

    
    do {

        printf("Digite o limite de temperatura entre -50 e 100: ");
        scanf("%f", &limite);

        if (limite < TEMP_MIN || limite > TEMP_MAX) {
            printf("Limite invalido. Tente novamente.\n\n");
        }

    } while (limite < TEMP_MIN || limite > TEMP_MAX);


    printf("\nLimite definido: %.2f C\n", limite);
    printf("O programa sera encerrado quando houver\n");
    printf("3 temperaturas consecutivas acima do limite.\n\n");


    
    while (consecutivasAcima < 3) {

        
        do {

            printf("Digite a temperatura: ");
            scanf("%f", &temperatura);

            if (temperatura < TEMP_MIN || temperatura > TEMP_MAX) {
                printf("Temperatura invalida. Digite novamente.\n");
            }

        } while (temperatura < TEMP_MIN || temperatura > TEMP_MAX);


        
        quantidade++;

     
        soma = soma + temperatura;


       
        if (quantidade == 1) {

            maior = temperatura;
            menor = temperatura;

        } else {

            if (temperatura > maior) {
                maior = temperatura;
            }

            if (temperatura < menor) {
                menor = temperatura;
            }
        }


        
        if (temperatura > limite) {

            quantidadeAcima++;
            consecutivasAcima++;

            printf("Temperatura acima do limite.\n");
            printf("Temperaturas consecutivas acima: %d\n\n",
                   consecutivasAcima);

        } else {

           
            consecutivasAcima = 0;

            printf("Temperatura dentro do limite.\n");
            printf("Contagem consecutiva reiniciada.\n\n");
        }
    }


   
    media = soma / quantidade;

    percentualAcima =
        (quantidadeAcima * 100.0) / quantidade;


    
    printf("\n=== ALERTA ===\n");

    printf("Foram registradas 3 temperaturas consecutivas\n");
    printf("acima do limite.\n");

    printf("Monitoramento encerrado automaticamente.\n");


  
    printf("\n=== RELATORIO FINAL ===\n");

    printf("Limite definido: %.2f C\n", limite);

    printf("Quantidade de leituras: %d\n",
           quantidade);

    printf("Media das temperaturas: %.2f C\n",
           media);

    printf("Maior temperatura: %.2f C\n",
           maior);

    printf("Menor temperatura: %.2f C\n",
           menor);

    printf("Quantidade acima do limite: %d\n",
           quantidadeAcima);

    printf("Percentual acima do limite: %.2f%%\n",
           percentualAcima);


    return 0;
}
