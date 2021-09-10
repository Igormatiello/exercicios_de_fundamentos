

/*1) Criar uma fun��o para ordenar os elementos de um vetor de tamanho n, sendo n um n�mero positivo.
Insira essa fun��o na biblioteca "vetores.h" (criada no Exerc�cio 2 - Lista 1) que j� cont�m as fun��es para
gerarVetorInteiro() e mostrarVetorInteiro(), e que podem ser reutilizadas neste exerc�cio. Usar essas fun��es
para gerar a sa�da mostrada no exemplo a seguir
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

        int tamanho,limite;
        do
        {
            printf("Informe o tamanho do vetor: ");
            scanf("%d",&tamanho);
        }
        while(tamanho<=0);
        do
        {
            printf("Informe o limite do vetor: ");
            scanf("%d",&limite);
        }
        while(limite<=0);

        int vetA[tamanho],vetB[tamanho],i;
        gerar_vetor(vetA, tamanho, limite);
        printf("\n===VETOR ORIGINAL===\n");
        mostra_vetor(vetA, tamanho);
        for (i=0; i<tamanho; i++)
        {
            vetB[i]=vetA[i];


        }
        ordenaVetor(vetB,tamanho);
        printf("\n\nVETOR ORDENADO===\n");
        mostra_vetor(vetB,tamanho);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
