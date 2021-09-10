/*)7) Escreva um programa que leia dois vetores com 10 elementos cada e gere um terceiro vetor de 20 elementos, cujos
valores deverão ser compostos pelos elementos intercalados dos dois outros vetores. Ao final, o programa deverá
mostrar os dois vetores originais e o terceiro vetor com os valores intercalados.

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
        int vetor[10],vetor2[10],tamanho=10, limite=20,i,uniao[20],j=0, k=0;
        printf("Vetor A:\n");
        gerar_vetorcomlimite(vetor,tamanho,1,limite);
        mostra_vetor(vetor,tamanho);
        printf("\n");
        system("\npause\n");
        printf("\n\nVetor B:\n");
        gerar_vetorcomlimite(vetor2,tamanho,1,limite);
        mostra_vetor(vetor2,tamanho);

        for (i=0; i<(tamanho*2); i++)
{
    uniao[i]=vetor[j];
    j++;
    i++;
    uniao[i]=vetor2[k];
    k++;


}
printf("\n\nVetor Uniao\n");
mostra_vetor(uniao,20);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}



