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
#include "matrizes.h"



int main(void)
{
    char repetir;
    do
    {
        int i,j,maior=0,menor=0;
        float matriz[3][2],vetor[3],soma=0;
        for(i=0; i<3; i++)
        {

            for (j=0; j<2; j++)
            {
                do
                {
                    printf("Informe a nota %d do aluno %d: ",i+1,j+1);
                    scanf("%f",&matriz[i][j]);
                }
                while(matriz[i][j]<0 || matriz [i][j] >10);

                soma=soma+matriz[i][j];

            }

            vetor[i]=soma/2;
            soma=0;
        }
        printf("\n\n===MEDIA===\nALUNO\tMEDIA\n");
        for(i=0; i<3; i++)
        {
            printf("%d\t",i+1);
            printf("%.2f\n",vetor[i]);
            if (vetor[i]>=7)
            {
                maior++;
            }
            else
            {
                menor++;
            }
        }
        printf("\nNumero de alunos com media maior que 7: %d\n",maior);
        printf("\nNumero de alunos com media menor que 7: %d\n",menor);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
