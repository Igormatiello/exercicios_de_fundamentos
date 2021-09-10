/* Faça um programa que leia o preço de uma mercadoria com diferença de um mês (ler o valor da
mercadoria no mês passado e no mês atual) e calcule a taxa de inflação mensal dessa mercadoria. A inflação
é o percentual da diferença de preços (atual menos o anterior) sobre o preço anterior*/

#include <stdio.h>
int main(void)
{
    float anterior, atual, inflacao;

    printf("Informe o preço da mercadoria no mes anterior: ");
    scanf("%f", &anterior);
    printf("Informe o preço da mercadoria no mes atual: ");
    scanf("%f", &atual);
    inflacao= (( atual - anterior) / anterior)*100;

    printf("A taxa de inflaçao da mercadoria é, em percentual %.1f\n",inflacao);
    return 0;
}
