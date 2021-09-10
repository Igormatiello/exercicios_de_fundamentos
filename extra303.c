/*) 3Escreva um programa que informe se em um texto fornecido pelo usuário existem caracteres numéricos.



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
        int contagem=0,i=0,dig=0;
        printf("Informe um texto com ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);

        while(texto[i] != '\0')
        {
            if (texto[i]>='0' && texto[i]<='9')
            {
                dig=1;
            }

            i++;


        }


        if (dig==1)
        {


            printf("Existem caracteres numericos\n");
        }
        else
        {
            printf("Nao existe caractere numerico\n");
        }



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
