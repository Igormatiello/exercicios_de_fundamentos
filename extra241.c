

/*10) O que faz o algoritmo a seguir:
declare vet[80], i como inteiro
repetir i = 0, até i < 80, passo 1
leia vet[i]
fim-repetir
menor ← vet[0]
posicaomenor ← 0
repetir i = 0, até i < 80, passo 1
se ( vet[i] < menor ) then
menor ← vet(i)
posicaomenor ← i
fim-se
fim-repetir
escreva ‘menor = ’, menor, ‘na posicao =’, posicaomenor
Implemente a solução na linguagem C para esse algoritmo. Devem ser utilizadas as funções para gerar
aleatoriamente os valores do vetor e mostrar os elementos do vetor, que se encontram em vetores.h. Considere
que os valores do vetor devem estar compreendidos em um intervalo de 0 a 100
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
        int vet[80],i,menor,posicao;
        gerar_vetor(vet, 80, 100);
        printf("\n===VETOR===\n");
        mostra_vetor(vet,80);

        menor=vet[0];
        posicao=0;


        for (i=0; i<80; i++)
        {
            if (vet[i]<menor)
            {
                menor=vet[i];
                posicao=i;
            }
        }
        printf("\n\nMenor valor eh %d e esta na posicao %d\n",menor,posicao);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
