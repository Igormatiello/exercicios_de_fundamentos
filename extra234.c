

/*2) Gerar um vetor A de inteiros com 8 elementos aleatórios entre 1 e 10. Construir um vetor B de mesma
dimensão com os elementos de A multiplicados por 2.
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"


int main(void)
{


    char repetir;
    do
    {
        int tamanho=8, limite=10,i;

        int vetor[tamanho];


        gerar_vetor(vetor,tamanho,limite);
        printf("\n\n===VETOR A===\n");
        mostra_vetor(vetor,tamanho);



        int vetorB[tamanho],k=0;

        for (i=0; i<tamanho; i++)
        {
            vetorB[k]=2* vetor[i];
            k++;

        }
        printf("\n\n===VETOR B===\n");
        mostra_vetor(vetorB,tamanho);
        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
