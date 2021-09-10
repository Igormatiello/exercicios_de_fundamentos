/* Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da
prestação. Calcule o valor a ser pago por meio da fórmula:
Valor com juros = Prestação + (Prestação * Taxa /100) */

#include <stdio.h>

int main(void)
{
    float prestacao, taxa, valor;
    printf("Informe o valor da prestação: ");
    scanf("%f", &prestacao);
    printf("Informe a taxa de juros pelo atraso: ");
    scanf("%f", &taxa);

    valor =prestacao + (  prestacao * (taxa /100) );


    printf("Valor total com juros: %.2f\n", valor);

    return 0;

}

