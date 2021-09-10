/*) 4) Ler um texto e armazenar a primeira palavra desse texto em outra string. Mostrar a string armazenada.
Observação: Colocar ‘\0’ na nova string após o último caractere útil para indicar final da mesma.


*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {
        char texto[100],palavra[100];
        int i=0;
        printf("Informe um texto com ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);

        while(texto[i] != ' ')
        {
            palavra[i]=texto[i];
            i++;


        }
        palavra[i]='\0';

        printf("A primeira palavra eh: %s\n",palavra);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
