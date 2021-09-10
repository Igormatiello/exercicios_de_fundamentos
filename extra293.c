/*)3) Fazer uma fun��o para gerar um vetor com n�meros aleat�rios entre 1 e um limite superior informado, sem
n�meros repetidos, com o seguinte prot�tipo:
void gerarVetorSemRepeticao(int vetor[], int tamanho, int limite)
Usar essa fun��o nos exerc�cios 4 a 6.
Aten��o: O valor do limite dos n�meros aleat�rios nunca deve menor que o tamanho do vetor



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
