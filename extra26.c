/* Fa�a um programa que leia o pre�o de uma mercadoria com diferen�a de um m�s (ler o valor da
mercadoria no m�s passado e no m�s atual) e calcule a taxa de infla��o mensal dessa mercadoria. A infla��o
� o percentual da diferen�a de pre�os (atual menos o anterior) sobre o pre�o anterior*/

#include <stdio.h>
int main(void)
{
    float anterior, atual, inflacao;

    printf("Informe o pre�o da mercadoria no mes anterior: ");
    scanf("%f", &anterior);
    printf("Informe o pre�o da mercadoria no mes atual: ");
    scanf("%f", &atual);
    inflacao= (( atual - anterior) / anterior)*100;

    printf("A taxa de infla�ao da mercadoria �, em percentual %.1f\n",inflacao);
    return 0;
}
