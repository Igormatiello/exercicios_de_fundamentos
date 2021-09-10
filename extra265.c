/*) 5) Ler um texto e imprimir o inverso do texto.
*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {

        char texto[150],inverso[150];
        int i=0,j;


        printf("Informe um texto com ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);
        while(texto[i] != '\0')
        {
            i++;
        }
        i--;
        j=0;
        while(i>=0)
        {
            inverso[j]=texto[i];
            i--;
            j++;
        }


        printf("====TEXTO INVERSO=====\n");
        puts(inverso);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
