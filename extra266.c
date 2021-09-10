/*) 6) Ler um texto e imprimir o texto na vertical com uma palavra por linha.
*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {

        char texto[150];
        int i=0,acumula=0,j;


        printf("Informe um texto com ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);
        while(texto[i] != '\0')
        {


            if (texto[i]==' ')
            {

                printf("\n");

            }
            else
            {
                printf("%c",texto[i]);
            }


            i++;

        }






        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
