/*)2) Gerar uma matriz 5x5 com números randômicos, no intervalo de 1 a 5. Em seguida criar dois vetores que
contenham, respectivamente, as somas das linhas e das colunas da matriz. Mostrar os vetores criados.

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
        int coluna=5,linha=5, mat[linha][coluna],limite=5,somaColuna=0,somaLinha=0,i,j,col[1][coluna],lin[1][coluna];
        gerarMatrizInteiroComLimiteInferior(linha,coluna,mat,1,limite);
        printf("===MATRIZ===\n");
        mostrarMatrizInteiro(linha,coluna,mat);

        printf("====SOMA DAS LINHAS===\n");
        for(i=0; i<linha; i++)
        {
            for (j=0; j<coluna; j++)
            {
                somaLinha=somaLinha+mat[i][j];
            }
            lin[0][i]=somaLinha;
            printf("%d\t",lin[0][i]);
            somaLinha=0;

        }


        printf("\n\n====SOMA DAS COLUNAS===\n");
        for(i=0; i<coluna; i++)
        {
            for (j=0; j<linha; j++)
            {
                somaColuna=somaColuna+mat[j][i];
            }
            col[0][i]=somaColuna;
            printf("%d\t",col[0][i]);
            somaColuna=0;

        }


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
