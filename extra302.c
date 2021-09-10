/*) 2) Escreva um programa que conta e exibe, separadamente, a quantidade de caracteres alfabéticos e de
dígitos numéricos existentes em um texto de até 100 caracteres fornecido pelo usuário.



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
            if (texto[i]>='A' && texto[i]<='Z')
            {
                contagem++;
            }
            if (texto[i]>='a' && texto[i]<='z')
            {
                contagem++;
            }
            if (texto[i]>='0' && texto[i]<='9')
            {
                dig++;
            }



            i++;


        }


        printf("Existem %d caracteres alfabeticos no texto\n",contagem);
        printf("Existem %d digitos na frase\n",dig);




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
