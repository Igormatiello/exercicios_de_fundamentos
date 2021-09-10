/*) 3) Dado um vetor de n n�meros reais, informar os elementos que comp�em o vetor e o n�mero de vezes que
cada um deles ocorre no vetor. Sugest�o: Ordenar o vetor antes de verificar a ocorr�ncia dos elementos no
mesmo.
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
        int tamanho;
        printf("Informe a quantidade de elementos do vetor: ");
        scanf("%d",&tamanho);


        float vetor[tamanho];
        int i,j,contador;
        for (i=0; i<tamanho; i++)
        {
            printf("Valor do elementos %d do vetor: ",i);
            scanf("%f",&vetor[i]);
        }

        printf("\n===VETOR===\n");
        mostrarVetorFloat(vetor,tamanho);
        printf("\n\n===VETOR ORDENADO===\n");
        ordenaVetorFloat(vetor,tamanho);
        mostrarVetorFloat(vetor,tamanho);


        for (i=0; i<tamanho; i++)
        {
            contador=0;
            for(j=0; j<tamanho; j++)
            {
                if (vetor[j]==vetor[i])
                {
                    contador++;
                }
            }
            printf("\n\n%.1f ocorre %d vezes\n",vetor[i],contador);
            i=i+contador-1;

        }

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}



