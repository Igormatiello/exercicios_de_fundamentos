

/*1) O que faz o algoritmo a seguir:
declare A[30], B[30], i, k como inteiro
repetir i = 0, até i < 30, passo 1
leia A[i]
escrevaA[i]
fim-repetir
k ← 0
repetir i = 0, i < 30, passo 1
se ( A[i] <> 0 ) then
b[k] ← a[i]
k ← k + 1
fim-se
fim-repetir
repetir i = 0, até i < k, passo 1
escreva B[i]
fim-repetir
Implemente uma solução na linguagem C para esse algoritmo. Para gerar os elementos do vetor A, deve ser
utilizada a função para gerar valores aleatórios e a função para mostrar os valores do vetor. Considere que os
valores do vetor devem estar compreendidos em um intervalo de 0 a 100
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
        int vetA[30],vetB[30],i,k;
        gerar_vetor(vetA, 30, 100);
        printf("\n===VETOR A===\n");
        mostra_vetor(vetA,30);

        k=0;

        for (i=0; i<30; i++)
        {

            if (vetA[i]!=0)
            {
                vetB[k]=vetA[i];
                k++;
            }
        }
        printf("\n\n===VETOR B===\n");
        mostra_vetor(vetB,k);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
