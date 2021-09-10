/*)6) Utilizar uma função para gerar um vetor com 10 valores entre 5 e 50. Utilizar uma função para verificar se
cada elemento do vetor é ou não um número primo. Armazenar em outro vetor somente os números que são
primos. Mostrar os dois vetores utilizando função.

*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    do
    {
        int tamanho=10, limite1=5,limite2=50, vet[tamanho],i,contPrimo=0,primos[tamanho];
        gerar_vetorcomlimite(vet,tamanho,limite1,limite2);
        printf("===VETOR===\n");
        mostra_vetor(vet,tamanho);

        for (i=0; i<tamanho; i++)
        {
            if(verifica_primo(vet[i])==0)
            {
                printf("\n%d eh primo",vet[i]);
                primos[contPrimo]=vet[i];
                contPrimo++;


            }
            else
            {
                printf("\n%d nao eh primo",vet[i]);
            }
        }

        printf("\n\n===PRIMOS===\n");

        mostra_vetor(primos,contPrimo);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
