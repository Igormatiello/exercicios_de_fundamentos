/*)1) Criar um arquivo "matrizes.h". Dentro desse arquivo incluir função para:
a) Gerar uma matriz de elementos inteiros randômicos entre 1 e limite com o protótipo:
void gerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int
limite)
b) Mostrar uma matriz com o protótipo:
void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
Usar as funções para:
a) Gerar uma matriz de 3x3 com números aleatórios entre 1 e 10.
b) Somar todos os elementos da matriz.
c) Somar os elementos da diagonal principal da matriz.
d) Somar os elementos da diagonal secundária da matriz.
e) Mostrar a matriz e as somas

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
        int coluna=3,linha=3, mat[linha][coluna],limite=10,somaPrincipal=0,somaSecundaria=0,aux;
        gerarMatrizInteiro(linha,coluna,mat,limite);
        printf("===MATRIZ===\n");
        mostrarMatrizInteiro(linha,coluna,mat);

        int i,j;
        aux=coluna-1;

        for(i=0; i<linha; i++)
        {
            for (j=0; j<coluna; j++)
            {
                if (i==j)
                {
                    somaPrincipal=somaPrincipal+mat[i][j];
                }
                if (aux==j)
                {
                    somaSecundaria=somaSecundaria+mat[i][j];
                    aux--;
                }

            }

        }
        printf("\n\nA soma dos elementos da diagonal secundaria eh: %d\n",somaSecundaria);
        printf("A soma dos elementos da diagonal principal eh: %d\n",somaPrincipal);
        printf("A soma de todos os elementos eh: %d\n",soma_matriz(linha,coluna,mat));
        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
