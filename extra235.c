

/*3) Gerar um vetor A de inteiros com 7 elementos aleatórios entre 1 e 10. Construir um vetor B de mesmo
tamanho, sendo que cada elemento de B deverá ser o elemento de A correspondente multiplicado por sua
posição (ou índice), ou seja, B[i] = A[i] * i.
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
        int tamanho=7, limite=10,i;

        int vetor[tamanho];


        gerar_vetor(vetor,tamanho,limite);
        printf("\n\n===VETOR A===\n");
        mostra_vetor(vetor,tamanho);



        int vetorB[tamanho],k=0;

        for (i=0; i<tamanho; i++)
        {
            vetorB[k]=i *vetor[i];
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
