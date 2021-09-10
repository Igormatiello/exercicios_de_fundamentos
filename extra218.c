/*8) (DESAFIO) Desenvolva uma função que receba um número inteiro positivo e ímpar e imprima um diamante
de asteriscos. Escreva um programa para validar a entrada e chamar a função.
 */

#include <stdio.h>
#include <ctype.h>
void funcao_diamante(int num)
{
    char ch;
    ch='*';
    int metade,i,j,k,suporte,auxiliar;
    metade=(num/2)+1;
    auxiliar=metade;
    suporte=1;
    for (i=1; i<=num; i++)//linhas
    {
        for (k=1; k <=auxiliar ; k++ ) //espaçamentos
        {
            printf(" ");
        }
        if (i<metade)
        {
            auxiliar--;
        }
        if (i>=metade)
        {
            auxiliar++;
        }
        for (j=1; j<=suporte; j++) //asteriscos
        {
            printf("%c",ch);

        }
        if (i<metade)
        {
            suporte=suporte+2;

        }
        if (i>=metade)
        {
            suporte=suporte-2;;
        }
        printf("\n");

    }

}



int main(void)
{

    int num;
    char repetir;
    do
    {
        do
        {
            printf("Informe um numero impar: ");
            scanf("%d",&num);

            if (num%2==0)
            {
                printf("Numero invalido!!!\n");
            }
        }
        while(num%2==0);



        funcao_diamante(num);



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



