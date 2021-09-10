

/*9) Uma locadora de vídeos armazena em um vetor A de 300 posições a quantidade de filmes retirados por
seus clientes durante o ano. A locadora está fazendo uma promoção e para cada 10 filmes retirados, o cliente
tem direito a uma locação grátis. Faça um programa que crie um vetor B contendo a quantidade de locações
gratuitas a que cada cliente tem direito. Declare ambos os vetores com valores inteiros

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
        int vetorA[100],i,vetorB[100];
        gerar_vetor(vetorA,100,100);
        printf("===VETOR A===\n");
        mostra_vetor(vetorA,100);

        for (i=0; i<100; i++)
        {
            vetorB[i]=floor(vetorA[i]/10);

        }
        printf("\n\n===VETOR B===\n");
        mostra_vetor(vetorB,100);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
