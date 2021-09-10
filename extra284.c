/*)4) Gerar uma matriz 50x10 que se refere as respostas de 10 questões de múltipla escolha referentes a 50
alunos. Gerar um vetor de 10 posições contendo o gabarito de respostas que podem ser 1, 2, 3, 4, ou 5. Em
seguida comparar as respostas de cada candidato com o gabarito e mostrar e mostrar a pontuação
correspondente.
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
        int coluna=10,linha=50, mat[linha][coluna],i,j,gabarito[1][10],acertos=0;
        gerarMatrizInteiroComLimiteInferior(linha,coluna,mat,1,5);
        printf("===RESPOSTA DOS ALUNOS===\n");

        for(i=0; i<linha; i++)
        {
            printf("Aluno  %3d =>  ",(i+1));
            for (j=0; j<coluna; j++)
            {
                printf("%3d    ",mat[i][j]);

            }
            printf("\n");

        }
        printf("\n\n===GABARITO===\n");
        gerarMatrizInteiroComLimiteInferior(1,10,gabarito,1,5);
        mostrarMatrizInteiro(1,10,gabarito);


        printf("\n\n===PONTUACAO OBTIDA===\n");
        for(i=0; i<linha; i++)
        {
            printf("Aluno  %3d =>  ",(i+1));
            for (j=0; j<coluna; j++)
            {
                if (mat[i][j]==gabarito[0][j])
                {
                    acertos++;
                }

            }
            printf("%d pontos\n",acertos);
            acertos=0;

        }

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
