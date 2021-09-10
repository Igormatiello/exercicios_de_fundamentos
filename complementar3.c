/*)20) Faça um programa que recebe um vetor A[15] com valores inteiros e positivos e retorna um vetor B com a
quantidade de divisores de cada valor em A.



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

    int vetor[15];
    gerar_vetor(vetor,15,10);
    printf("===Vetor A===\n");
    mostra_vetor(vetor,15);
retornaDivisoresDeUmVetor(vetor,15);



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
