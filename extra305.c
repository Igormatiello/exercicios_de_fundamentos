/*) 5) Ler uma string e contar quantos espaços sucessivos ela contém. Armazenar esses valores em um vetor.
Mostrar esse vetor. Por exemplo:
String informada: Tecnologia em Análise e Desenvolvimento de Sistemas.
Vetor: 1 3 2 4 2 2
Há um espaço entre “Tecnologia” e “em”, há três espaços entre “em” e “Análise”, há dois espaços entre
“Análise” e “e”, e assim para os demais.

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
        char texto[100],vetor[50];
        int i=0,cont=0,j=0;
        printf("Informe um texto com ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);

        while(texto[i] != '\0')
        {

            if (texto[i]==' ' )
            {
                cont++;
            }
            if (texto[i]==' ' && texto[i+1]!=' ')
            {
                vetor[j]=cont;

                cont=0;
                j++;
            }
            i++;

        }
        printf("\n\n===ESPACO ENTRE PALAVRAS===\n");
        for (i=0; i<j; i++)
        {
            printf("%d\t",vetor[i]);
        }

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
