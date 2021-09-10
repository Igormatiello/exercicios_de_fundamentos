/*Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deve calcular e mostrar:
a) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo.
b) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo e ainda obter um lucro
de 25%.*/


#include <stdio.h>
#include <math.h>

int main(void)
{
    float custo, convite, quacon, qualuc;


    printf("Informe o valor do custo do espetaculo teatral:R$ ");
    scanf("%f", &custo);
    printf("Informe o valor do convite:R$ ");
    scanf("%f", &convite);

    quacon= (custo/convite);
    qualuc=  quacon * 1.25;

    printf("Para cobrir o custo do espetaculo eh necessario vender %.0f ingressos\n", ceil(quacon));
    printf("Para cobrir o custo do espetaculo e ter um lucro de 25%% eh necessario vender %.0f ingressos\n", ceil(qualuc));

    return 0;

}
