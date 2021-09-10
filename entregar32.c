

/*2) Gerar um vetor com 50 elementos (valores aleatórios), com valor até 100. Armazenar em um vetor os
números pares e em outro os números ímpares. Mostrar os três vetores. Dica: Declarar os três vetores com
tamanho 50, na pior hipótese todos os números gerados seriam pares ou ímpares.
Uma solução mais otimizada: primeiro percorrer o vetor e contar quantos valores há de cada tipo e em
seguida declarar os vetores com o tamanho exato, obtido da contagem.

 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include "vetores.h"


int main(void)
{


    char repetir;
    do
    {
        int tamanho=50,limite=101,contPar=0,contImpar=0,j=0,k=0,i;



        int vetor[tamanho];
        gerar_vetor(vetor,tamanho,limite);
        printf("\n===VETOR===\n");
        mostra_vetor(vetor,tamanho);


        for (i=0; i<tamanho; i++)
        {
            if (vetor[i]%2==0)
            {
                contPar++;
            }
            else
            {
                contImpar++;
            }
        }
        int vetorPar[contPar], vetorImpar[contImpar];


        for (i=0; i<tamanho; i++)
        {
            if (vetor[i]%2==0)
            {
                vetorPar[j]=vetor[i];
                j++;
            }
            else
            {
                vetorImpar[k]=vetor[i];
                k++;
            }

        }
        printf("\n\n===PARES===\n");
        mostra_vetor(vetorPar,contPar);
        printf("\n\n===IMPARES===\n");
        mostra_vetor(vetorImpar,contImpar);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
