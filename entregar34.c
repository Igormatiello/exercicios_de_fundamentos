

/*4) Gerar um vetor aleat�rio com 10 elementos entre 0 e 50. Verificar se cada um dos elementos armazenados
no vetor � primo. Utilizar, obrigatoriamente, uma fun��o para verificar se o n�mero � primo. Essa fun��o
retorna 0 para indicar que o n�mero � primo e 1 para indicar que n�o � primo. Tratar esse retorno na fun��o
chamadora. Mostrar da seguinte forma:

 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include "vetores.h"


int main(void)
{


    char repetir;
    do
    {
        int tamanho=10,limite=51,i,j,primo;



        int vetor[tamanho];
        gerar_vetor(vetor,tamanho,limite);
        printf("\n===VETOR===\n");
        mostra_vetor(vetor,tamanho);

        printf("\n\nINDICE\tNUMERO\tPRIMO\n");

        for (i=0; i<tamanho; i++)
        {
            printf("%d\t",i);
            printf("%d\t",vetor[i]);

            primo=0;
            for (j=(vetor[i]-1); j>=2; j--)
            {
                if (vetor[i]%j==0)
                {
                    primo=1;
                    break;
                }


            }
            if (primo==1 || vetor[i]==0 || vetor[i]==1)
            {
                printf("Nao\n");
            }
            else
            {

                printf("Sim\n");
            }




        }




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
