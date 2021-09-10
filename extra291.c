/*)7) Ler duas notas de 3 alunos e armazená-los em uma matriz, fazer a média de cada aluno e armazená-la em
um vetor. Validar para que seja informado um valor de 0 a 10 para as notas. Validar separadamente cada
nota. Contar e mostrar quantos alunos estão acima da média (maior ou igual a 7,0) e quantos estão abaixo da
média (menor que 7,0). Validar para que não seja realizada uma divisão por zero no cálculo da média.
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

        int limite2=9,tamanho=5, vet[tamanho],i;
        gerar_vetorcomlimite(vet,tamanho,1,limite2);
        printf("===VETOR===\n");
        mostra_vetor(vet,tamanho);

        for (i=0; i<tamanho; i++)
        {

            geraEImprimeTabuada(vet[i]);
        }


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
