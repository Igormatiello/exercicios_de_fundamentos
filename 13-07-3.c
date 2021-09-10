/*)3) Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuário. Cada
data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o segundo, o mês e o terceiro, o
ano.
*/

#include <stdio.h>

    int main(void)
    {
    int dia1,mes1,ano1,ano2,mes2,dia2;
    printf("Informe a primeira data\n");
    printf("Escreva dia(dd): ");
    scanf("%d",&dia1);
    printf("Escreva mes(mm): ");
    scanf("%d",&mes1);
    printf("Escreva ano(aaaa): ");
    scanf("%d",&ano1);

    printf("Informe a segunda data\n");
    printf("Escreva dia(dd): ");
    scanf("%d",&dia2);
    printf("Escreva mes(mm): ");
    scanf("%d",&mes2);
    printf("Escreva ano(aaaa): ");
    scanf("%d",&ano2);

    if ((ano1 > ano2) || ((ano1==ano2) && (mes1>mes2)) || ((ano1==ano2) && (mes1==mes2) && (dia1>dia2)))
    {
        printf("A maior data eh:%d/%d/%d\n",dia1,mes1,ano1);
    }
    if ((ano1 < ano2) || ((ano1==ano2) && (mes1<mes2)) || ((ano1==ano2) && (mes1==mes2) && (dia1<dia2)))
    {
        printf("A maior data eh:%d/%d/%d\n",dia2,mes2,ano2);
    }





    return 0;
    }
