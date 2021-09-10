/*) 1) Escreva um programa que calcule e escreva a quantidade de letras maiúsculas existentes em um texto de
até 100 caracteres fornecido pelo usuário



*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {
        char texto[100];
        int contagem=0,i=0;
        printf("Informe um texto com ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);

        while(texto[i] != '\0')
        {
            if (texto[i]>='A' && texto[i]<='Z')
            {
                contagem++;
            }


            i++;


        }


        printf("Existem %d caracteres alfabeticos maisculos no texto\n",contagem);




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
