/*)5) Gerar uma matriz 10x2 com valores de 1 a 6. A primeira coluna da matriz � a base e a segunda o
expoente. Utilizando a fun��o pot�ncia, gerar um vetor que armazena a pot�ncia obtida a partir dos valores
da matriz. A fun��o pot�ncia ser� utilizada para calcular a pot�ncia (base elevada a um expoente) e n�o para
gerar o vetor. O valor obtido do c�lculo ser� armazenado no vetor.

*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "matrizes.h"



int main(void)
{
    char repetir;
    do
    {
        int coluna=2,linha=10, mat[linha][coluna],i,j,vetor[10];
        gerarMatrizInteiroComLimiteInferior(linha,coluna,mat,1,6);
        printf("===MATRIZ===\n");
        mostrarMatrizInteiro(linha,coluna,mat);



        printf("\n\n\===CALCULA DA POTENCIA===\n");
        printf("BASE\tEXPOENTE\tRESULTADO\n");

        for(i=0; i<linha; i++)
        {

            printf("%2d\t%2d\t\t",mat[i][0],mat[i][1]);
            vetor[i]=potencia(mat[i][0],mat[i][1]);
            printf("%6d\n",vetor[i]);
        }

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
