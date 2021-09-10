/*) 6) Fazer uma função que verifica se uma substring pertence a uma string.
Exemplo:
String: O gato subiu no telhado
Substring: telha
Resposta: A substring "telha" faz parte da string "O gato subiu no telhado".
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

        int matriz[5][5],limite1=1,limite2=50,num,i,j,cont=0;
        gerarMatrizInteiroComLimiteInferior(5,5,matriz,limite1,limite2);
        printf("===MATRIZ===\n");
        mostrarMatrizInteiro(5,5,matriz);

        printf("Informe um valor: ");
        scanf("%d",&num);


        for (i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {



                if ((matriz[i][j])==num)
                {
                    cont=1;
                }
            }
        }

        if (cont==1)
        {

            printf("%d existe na matriz\n",num);
        }
        else
        {
            printf("%d nao existe na matriz\n",num);
        }








        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
