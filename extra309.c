/*) 9) Criar uma função para concatenar duas strings.
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
        char texto1[100],texto2[100];
        int i=0,j=0;
        printf("Informe uma string: ");
        setbuf(stdin, NULL);
        gets(texto1);
        printf("Informe outra string: ");
        setbuf(stdin, NULL);
        gets(texto2);

        while(texto1[i] != '\0')
        {

            i++;

        }
        i--;
        while(texto2[j] != '\0')
        {

            j++;

        }
        j--;


        juntaString(texto1,texto2,i,j);









        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
