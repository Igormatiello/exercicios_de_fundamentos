

/*7) Em uma determinada cidade, sabe-se que, de janeiro a abril de um determinado ano (121 dias), a temperatura
ficou entre a 5° e 45°. Gerar um vetor com valores inteiros randômicos nesse intervalo para esse período de
tempo. Para isso, crie uma função na biblioteca vetores.h chamada gerarVetorInteiroComLimite() que receba
como parâmetros: o vetor, o tamanho do vetor, o valor inicial e o valor final do limite da aleatoriedade. A partir do
vetor gerado, obtenha e mostre:
a) A menor temperatura ocorrida.
b) A maior temperatura ocorrida.
c) A temperatura média.
d) O número de dias em que a temperatura foi inferior à temperatura média
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"


int main(void)
{


    char repetir;
    do
    {
        int tamanho=100, limite1=0,limite2=2,i,contagem=0,elementos=0,j=0;



        int vetor[tamanho];


        gerar_vetorcomlimite(vetor,tamanho,limite1,limite2);
        printf("\n===VETOR A==\n");
        mostra_vetor(vetor,tamanho);

        for(i=0; i<tamanho; i++)
        {
            if (vetor[i]==1 && vetor[i-1]==0)
            {
                elementos++;
            }


        }

        int vetoraux[elementos];




        for(i=0; i<tamanho; i++)
        {
            if ((vetor[i]==1) && (i!=0) && (vetor[i-1]==0))
            {
                vetoraux[j]=contagem;
                j++;


                contagem=0;

            }
            else if (vetor[i]==0)
            {
                contagem++;
            }

        }
        printf("\n\n===VETOR B===\n");
        for (j=0; j<elementos; j++)
        {
            printf("%d\t",vetoraux[j]);
        }



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
