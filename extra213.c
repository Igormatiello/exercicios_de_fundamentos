/*3) (DESAFIO) Fazer um programa que receba um valor inteiro, que se refere a quantidade de linhas de um
tri�ngulo. Implementar no pr�prio programa uma fun��o que recebe como par�metro esse valor e imprime um
tri�ngulo
 */

#include <stdio.h>
#include <ctype.h>

void funcao13(int linha)
{

    char ch;
    int i,k,l,suporte=1,linhaaux;
    linhaaux=linha;
    ch='*';
    for (i=1; i<=linha; i++) //linha
    {


        for (l=(linhaaux-1); l>=1; l--) //espa�amento
        {
            printf(" ");
        }

        for (k=1; k<=suporte; k++) //quantidade de estrelas
        {
            printf("%c",ch);

        }
        suporte=suporte+2;






        printf("\n");
        linhaaux=linhaaux-1;

    }


}



int main(void)
{
    int linha;
    char repetir,ch;
    do
    {
        printf("Informe a quantidade de linhas do triangulo: ");
        scanf("%d",&linha);
        funcao13(linha);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



