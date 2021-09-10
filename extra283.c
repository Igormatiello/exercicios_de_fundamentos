/*)3) Gerar uma matriz 10x10 preenchida com o número 1 e mostrar a matriz. Em seguida, preencher com 0 as
diagonais principal e secundária e mostrar a matriz.

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
        int coluna=10,linha=10, mat[linha][coluna],mat2[linha][coluna],i,j,aux;
        gerarMatrizInteiroComLimiteInferior(linha,coluna,mat,1,1);
        printf("===MATRIZ ORIGINAL===\n");
        mostrarMatrizInteiro(linha,coluna,mat);

        aux=(coluna-1);
        for(i=0; i<linha; i++)
        {
            for (j=0; j<coluna; j++)
            {
                if (i==j || aux==j)
                {
                    mat2[i][j]=0;
                }
                else
                {
                    mat2[i][j]=mat[i][j];
                }

            }
            aux--;

        }
        printf("\n\n====MATRIZ ATUAL====\n");
        mostrarMatrizInteiro(linha,coluna,mat2);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
