

/*4) Gerar um vetor A de inteiros com 10 elementos aleat�rios entre 1 e 10 e construir um vetor B de mesma
dimens�o com os mesmos elementos de A, mas em ordem invertida, ou seja, o primeiro elemento de A ser� o
�ltimo de B, o segundo elemento de A ser� o pen�ltimo de B e assim sucessivamente.
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
         int tamanho=10, limite=10,i;

        int vetor[tamanho];


        gerar_vetor(vetor,tamanho,limite);
         printf("\n\n===VETOR A===\n");
        mostra_vetor(vetor,tamanho);

  int vetorB[tamanho],k=0;
         for (k=(tamanho-1),i=0; k>=0; k--,i++)
    {
        vetorB[k]=vetor[i];


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
