

/*1) Gerar um vetor de inteiros com 15 elementos aleatórios entre 1 e 25. Gerar outros dois vetores, um
contendo os valores pares e outro os ímpares. Mostrar os três vetores
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    int vetor[15],  i, contPar, contImpar, j, k;
    char opcao;

    do
    {
        GerarVetorInteiroDe1aLimite(vetor, 15, 25);
        printf("\n=== VETOR COMPLETO ===\n");
        MostrarVetorInteiro(vetor, 15);

        contPar=0;
        contImpar=0;

        for(i=0; i<15; i++)
        {
            if(vetor[i]%2 == 0)
            {
                contPar++;
            }
            else
            {
                contImpar++;
            }
        }

        int vetorPar[contPar], vetorImpar[contImpar];

        j=0;
        k=0;

        for(i=0; i<15; i++)
        {
            if(vetor[i] % 2 == 0)
            {
                vetorPar[j] = vetor[i];
                j++;
            }
            else
            {
                vetorImpar[k] = vetor[i];
                k++;
            }
        }
        printf("\n\n=== VETOR DE PARES ===\n");
        MostrarVetorInteiro(vetorPar,j);
        printf("\n\n=== VETOR DE IMPARES ===\n");
        MostrarVetorInteiro(vetorImpar,k);

        printf("\n\n\nDeseja repetir o programa (S ou N)? ");
        setbuf(stdin, NULL);
        scanf("%c",&opcao);

    }while(opcao == 'S' || opcao == 's');

    return 0;
}
