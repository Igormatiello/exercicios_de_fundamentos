

/*7) Na biblioteca "vetores.h" criar uma função com o protótipo void
gerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo,
int limPositivo) para gerar um vetor com valores positivos e negativos em um intervalo.
A instrução para gerar valores inteiros positivos e negativos em um intervalo é:
vetor[i] = rand() % (limPositivo + limNegativo + 1) - limNegativo;
Usando essa função:
Gerar um vetor A de inteiros com 100 elementos, com valores entre -50 e +50. Em seguida, armazenar no
vetor B somente os valores positivos do vetor A
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
        int vetor[100],i;

        gerarVetorPositivoNegativo(vetor,100,50,50);
        printf("===VETOR A===\n");
        mostra_vetor(vetor,100);


        int vetorB[100],j=0;

        for (i=0; i<100; i++)
        {
            if (vetor[i]>0)
            {
                vetorB[j]=vetor[i];
                j++;

            }
        }

        printf("\n\n===VETOR B===\n");
        mostra_vetor(vetorB,j);



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
