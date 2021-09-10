/*)6) Gerar uma matriz 3x3 com números randômicos no intervalo de 1 a 100 e a seguir escrever a localização
(linha e a coluna) do maior valor.

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
        int coluna=3,linha=3, mat[linha][coluna],i,j,maior,pos1,pos2;
        gerarMatrizInteiroComLimiteInferior(linha,coluna,mat,1,100);
        printf("===MATRIZ===\n");
        mostrarMatrizInteiro(linha,coluna,mat);

        maior=mat[0][0];
        for(i=0; i<linha; i++)
        {
            for (j=0; j<coluna; j++)
            {
                if (mat[i][j]>=maior)
                {
                    maior=mat[i][j];
                    pos1=j+1;
                    pos2=i+1;
                }
            }
        }
        printf("O maior elemento da matriz eh %d e se encontra na coluna %d da linha %d\n",maior,pos1,pos2);
        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
