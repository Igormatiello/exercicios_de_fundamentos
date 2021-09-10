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


    printf("Informe o custo do espetaculo teatral: ");
    scanf("%f", &custo);
    printf("Informe o valor do convite: ");
    scanf("%f", &convite);

    quacon= (custo/convite);
    qualuc=  quacon * 1.25;


    printf(" Quantidade de convites que sao necessarios para cobrir o espetaculo: %.0f\n", ceil(quacon));
    printf(" Quantidade de convites que sao necessarios para ter um lucro acima: %.0f\n", ceil(qualuc));



    return 0;

}