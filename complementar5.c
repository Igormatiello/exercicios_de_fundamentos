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



