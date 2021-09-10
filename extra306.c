/*) 6) Fazer uma função que verifica se uma substring pertence a uma string.
Exemplo:
String: O gato subiu no telhado
Substring: telha
Resposta: A substring "telha" faz parte da string "O gato subiu no telhado".
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
        char texto[100],palavra[100];

        printf("Informe uma string: ");
        setbuf(stdin, NULL);
        gets(texto);
         printf("Informe uma substring: ");
        setbuf(stdin, NULL);
        gets(palavra);


            if (verificaSubstring(texto,palavra)==1){
            printf("\nA substring \"%s\" faz parte da string \"%s\"\n", palavra,texto);
            }
            else
            {
                printf("\nA substring \"%s\" nao faz parte da string \"%s\"\n", palavra,texto);
            }




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
