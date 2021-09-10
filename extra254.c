

/*4) Na biblioteca "vetores.h" criar função:
a) Com o protótipo void gerarVetorFloat0a1(float vetor[], int tam) que gera
vetor com valores float aleatórios entre 0 e 1, para isso use:
vetor[i] = (float)(rand()) / RAND_MAX;
b) Com o protótipo void gerarVetorFloat0a100(float vetor[], int tam) que gera
vetor com valores float aleatórios entre 0 e 100, para isso use:
vetor[i] = ((float)(rand()) / RAND_MAX)*100;
c) Com o protótipo void mostrarVetorFloat(float vetor[], int tam) que mostra os
elementos de um vetor float.
d) Com o protótipo float somarVetorFloat(float vetor[], int tam) que soma os
elementos de um vetor float.
Usando essas funções:
a) Gerar um vetor do tipo float com 10 elementos aleatórios entre 0 e 1, exibir o vetor e mostrar a soma de
todos os elementos do vetor.
b) Gerar um vetor do tipo float com 50 elementos aleatórios entre 0 e 100 e exibir o vetor. Criar outros dois
vetores numéricos do tipo float, em um deles armazenar os valores menores que 50 e em outro os maiores
que 50. Mostrar os vetores geradosa
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

        int i;
        float vet1[10];
        gerarVetorFloat0a1(vet1,10);
        printf("===VETOR 1===\n");
        mostrarVetorFloat(vet1,10);
        printf("\nSoma= %.1f\n",somarVetorFloat(vet1,10));

        float vet2[50];
        gerarVetorFloat0a100(vet2,50);
        printf("\n\n===VETOR 2===\n");
        mostrarVetorFloat(vet2,50);

        float vet3[50], vet4[50];
        int j=0,k=0;


        for (i=0; i<50; i++)
        {
            if (vet2[i]<50)
            {
                vet3[j]=vet2[i];
                j++;

            }
            if (vet2[i]>50)
            {
                vet4[k]=vet2[i];
                k++;
            }
        }
        printf("\n\n===VETOR 3===\n");
        mostrarVetorFloat(vet3,j);
        printf("\n\n===VETOR 4===\n");
        mostrarVetorFloat(vet4,k);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
