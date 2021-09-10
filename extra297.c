/*)7) (Desafio) Gerar um vetor (pode conter valores repetidos) com 15 valores aleatórios entre 1 e 20. Ordenar o
vetor. Mostrar o vetor. Gerar um novo vetor apenas com os valores que se repetem no vetor anterior. Mostrar
o vetor.
Dica: Poderá ser criada uma função com o protótipo int existeNoVetor(int vet[], int tamanho,
int valor) que recebe como parâmetros o vetor, o tamanho do vetor e um valor e retorna o número de
vezes que esse valor ocorre no vetor


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
        int vet[tamanho];
        gerar_vetorcomlimite(vet, tamanho,1,limite2);
        printf("\n\n===VETOR===\n");
        ordenaVetor(vet,tamanho);
        mostra_vetor(vet,tamanho);



        printf("\n\n===REPETIDOS===\n");
        for(i=0; i<tamanho; i++)
        {
            if (existeNoVetor(vet,tamanho,vet[i])>=2)
            {
                printf("%d\t",vet[i]);
                i=i+existeNoVetor(vet,tamanho,vet[i]);
            }
        }






        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
