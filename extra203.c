/*3) Fazer duas fun��es: uma para calcular o fatorial de um n�mero e a outra para mostrar o fatorial de um
n�mero. Ambas as fun��es devem ser implementadas em um arquivo de cabe�alho chamado "fatorial.h".
Elaborar um programa que use essas fun��es para:
a) Calcular e mostrar o fatorial dos n�meros entre 1 e 8.
b) Calcular e mostrar o fatorial de um valor informado pelo usu�rio. Continuar a leitura enquanto forem
informados valores positivos*/

#include <stdio.h>
#include <ctype.h>
#include "fatorial.h"


int main(void)
{

    int num,k;
    char repetir,opcao;
    do
    {
        printf("A - Fatorial entre 1 e 8\n");
        printf("B - Fatorial de um numero\n");
        printf("Opcao: ");
        setbuf(stdin,NULL);
        scanf("%c",&opcao);

        switch(opcao)
        {
        case 'a':
        case 'A':

            for (num=1; num<=8; num++)
            {

                printf("%d! = \t",num);
                impri_fat(num);
                res_primo(num);


            }
            break;
        case 'B':
        case 'b':
            do
            {
                printf("Informe um numero: ");
                scanf("%d",&num);


                if (num>=1)
                {
                    printf("%d! = \t",num);
                    impri_fat(num);
                    res_primo(num);
                }
            }
            while(num>=1);


        }





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}

