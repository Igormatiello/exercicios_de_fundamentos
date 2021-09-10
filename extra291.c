/*)7) Ler duas notas de 3 alunos e armazen�-los em uma matriz, fazer a m�dia de cada aluno e armazen�-la em
um vetor. Validar para que seja informado um valor de 0 a 10 para as notas. Validar separadamente cada
nota. Contar e mostrar quantos alunos est�o acima da m�dia (maior ou igual a 7,0) e quantos est�o abaixo da
m�dia (menor que 7,0). Validar para que n�o seja realizada uma divis�o por zero no c�lculo da m�dia.
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
