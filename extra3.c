/* Escreva um algoritmo que leia o valor de uma presta��o e da taxa de juros cobrada pelo atraso da
presta��o. Calcule o valor a ser pago por meio da f�rmula:
Valor com juros = Presta��o + (Presta��o * Taxa /100) */

#include <stdio.h>

int main(void)
{
    float prestacao, taxa, valor;
    printf("Informe o valor da presta��o: ");
    scanf("%f", &prestacao);
    printf("Informe a taxa de juros pelo atraso: ");
    scanf("%f", &taxa);

    valor =prestacao + (  prestacao * (taxa /100) );


    printf("Valor total com juros: %.2f\n", valor);

    return 0;

}

