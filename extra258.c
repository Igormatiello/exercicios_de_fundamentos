

/*8) Gerar um vetor A de inteiros com 100 elementos aleatórios entre 0 e 10. Criar um vetor B float que conterá
os valores do vetor A divididos pelo maior valor contido no vetor A. Mostrar os dois vetores.

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
        int vetorA[100],i,maior,j=0;
        gerar_vetor(vetorA,100,11);
        printf("===VETOR A===\n");
        mostra_vetor(vetorA,100);

        maior=vetorA[0];
        for (i=0; i<100; i++)
        {
            if (vetorA[i]>maior)
            {
                maior=vetorA[i];
            }
        }
        printf("Maior valor: %d\n\n",maior);

        float vetorB[100];

        for (i=0; i<100; i++)
        {

            vetorB[j]=(float)vetorA[i]/maior;
            j++;
        }
        printf("\n===VETOR B===\n");
        mostrarVetorFloat(vetorB,100);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
