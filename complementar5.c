/*) 3) Dado um vetor de n números reais, informar os elementos que compõem o vetor e o número de vezes que
cada um deles ocorre no vetor. Sugestão: Ordenar o vetor antes de verificar a ocorrência dos elementos no
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
        int tamanho=10,vet[tamanho];
        gerar_vetor(vet,tamanho,50);
        printf("===VETOR===\n");
        mostra_vetor(vet,tamanho);
        printf("\nMenor: %d\n",retornaMenor(vet,tamanho));
         printf("\nMaior: %d\n",retornaMaior(vet,tamanho));


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}



