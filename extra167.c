
/*7) O Tri�ngulo de Floyd � um tri�ngulo formado com n�meros naturais. O tri�ngulo come�a em 1 no canto
superior esquerdo e continua a escrever a sequ�ncia de n�meros naturais de tal modo que cada linha cont�m
um n�mero a mais do que a linha anterior. Escreva um programa que leia um n�mero inteiro positivo n e em
seguida imprima n linhas do Tri�ngulo de Floyd
*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int num;
        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d",&num);
        }
        while(num<0);
        int j,i,valor=0,quebra;
        quebra=1;
        for (i=0; i<=num; i++) //linha
        {
            for (j=1; j<=i; j++) //numeros
            {
                valor=valor+1;
                printf("%d\t",valor);
                quebra=quebra+1;
            }
            printf("\n");


        }
        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;

}



