/*) 7) Criar uma fun��o para inverter uma string.
Exemplo:
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "vetores.h"



int main(void)
{
    char repetir;
    do
    {
        char texto[100];
        int i=0;
        printf("Informe uma string: ");
        setbuf(stdin, NULL);
        gets(texto);

        while(texto[i] != '\0')
        {

            i++;

        }
        i--;
        invertestring(texto,i);






        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
