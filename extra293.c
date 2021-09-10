/*)3) Fazer uma função para gerar um vetor com números aleatórios entre 1 e um limite superior informado, sem
números repetidos, com o seguinte protótipo:
void gerarVetorSemRepeticao(int vetor[], int tamanho, int limite)
Usar essa função nos exercícios 4 a 6.
Atenção: O valor do limite dos números aleatórios nunca deve menor que o tamanho do vetor



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

        int limite2,tamanho;
        do
        {
            printf("Informe o tamanho do vetor: ");
            scanf("%d",&tamanho);
        }
        while(tamanho<=0);

        do
        {
            printf("Informe o limite superior do vetor: ");
            scanf("%d",&limite2);
        }
        while(limite2<tamanho);
        int vet[tamanho];
        printf("===VETOR===\n");
        gerarVetorSemRepeticao(vet, tamanho,limite2);
        mostra_vetor(vet,tamanho);





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
