/*)8) (Desafio) Gerar um vetor (pode conter valores repetidos) com 15 valores entre 1 e 20. Ordenar o vetor.
Copiar esses valores para outro vetor sem os elementos repetido


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

        int limite2=20,tamanho=15,i;
        int vet[tamanho],vet2[tamanho];
        gerar_vetorcomlimite(vet, tamanho,1,limite2);
        printf("\n\n===VETOR===\n");
        ordenaVetor(vet,tamanho);
        mostra_vetor(vet,tamanho);



        printf("\n\n===NAO REPETIDOS===\n");
        int j,repete=0,aux=0;

        for(i=0; i<tamanho; i++)
        {
            repete=0;
            for (j=0; j<tamanho; j++)
            {
                if (vet[i]==vet[j])
                {
                    repete++;
                }
            }
            if (repete==1)
            {
                vet2[aux]=vet[i];
                aux++;
            }


        }
        mostra_vetor(vet2,aux);






        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
