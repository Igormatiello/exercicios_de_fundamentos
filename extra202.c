/*2) Fazer uma fun��o para verificar se um n�mero � ou n�o primo. A fun��o ser� implementada em um
arquivo de cabe�alho "primo.h" e dever� retornar 0 se o n�mero for primo ou 1, caso o n�mero n�o seja
primo. Elaborar um programa para usar essa fun��o para:
a) Verificar se um n�mero informado pelo usu�rio � ou n�o um n�mero primo. Validar a entrada para que o
usu�rio informe um n�mero positivo.
b) Mostrar os primos no intervalo entre 1 e 100.
c) Fazer a m�dia dos primos entre 200 e 10*/

#include <stdio.h>
#include <ctype.h>
#include "primo.h"

int main(void)
{
    char repetir,opcao;
    int num,linha=0,contador=0,somatorio=0;
    float media;
    do
    {


        printf("A - Verificar se o numero eh primo\n");
        printf("B - Primos entre 1 e 100\n");
        printf("C - Media dos primos entre 200 e 100\n");
        printf("Opcao: ");
        setbuf(stdin,NULL);
        scanf("%c",&opcao);


        switch(opcao)
        {
        case 'a':
        case 'A':
            do
            {
                printf("Informe um numero positivo: ");
                scanf("%d",&num);
                if (num<=0)
                {
                    printf("Numero invalido\n");
                }
            }
            while(num<1);

            if (primo(num)==0 && num!=1)
            {
                printf("%d eh primo\n",num);
            }
            else
            {

                printf("%d nao eh primo\n",num);
            }
            break;



        case 'b':
        case 'B':

            for (num=1; num<=100; num++)
            {

                if (primo(num)==0 && num!=1)
                {
                    printf("%d\t",num);
                    linha++;
                }
                if (linha%4==0)
                {
                    printf("\n");
                }


            }
            break;

        case 'c':
        case 'C':

            for (num=200; num>=100; num--)
            {
                 if (primo(num)==0 && num!=1)
                 {
                     contador++;
                     somatorio=somatorio+num;
                 }


            }
            if (contador!=0){
            media=(float)somatorio/contador;
            printf("Media dos primos entre 200 e 100: %.2f",media);
            }
            else {
                printf("Nao ha valores primos\n");
            }
            break;




        }





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');





}
