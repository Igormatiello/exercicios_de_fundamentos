/*)6) Gerar dois vetores com 10 elementos cada, os elementos devem ser distintos. Os valores são aleatórios e
entre 1 e 15 para o primeiro vetor e entre 1 e 10 para o segundo vetor. Gerar um terceiro vetor com a
subtração de A por B, ou seja, do vetor A são retirados os valores que estão em B. Mostrar os três vetores.



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

        int limite2=15,tamanho=10;
        int vet[tamanho],vet2[tamanho],i,j,aux=0,vet3[tamanho];
        printf("===VETOR A===\n");
        gerarVetorSemRepeticao(vet, tamanho,limite2);
        mostra_vetor(vet,tamanho);

        printf("\n");
        putchar('\n');
        system("\npause\n");
        printf("\n\n===VETOR B===\n");
        gerarVetorSemRepeticao(vet2, tamanho,10);
        mostra_vetor(vet2,tamanho);

        printf("\n\n===SUBTRACAO===\n");


        for (i=0; i<tamanho; i++)
        {
            vet3[i]=vet[i]-vet2[i];

        }
        mostra_vetor(vet3,tamanho);




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
