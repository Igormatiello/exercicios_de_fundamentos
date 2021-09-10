/*) 4) Fazer uma função para contar a quantidade de caracteres de uma string, incluindo espaços, e outra função
não incluindo espaços.
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
        int contSpace=0,i=0;


        printf("Informe um texto com ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);
        while(texto[i] != '\0')
        {
            if (texto[i]==' ')
            {
                contSpace++;
            }

            i++;
        }
        printf("Numero de caracteres com espaco: %d\n",i);
        printf("Numero de caracteres sem espaco: %d\n",(i-contSpace));


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
