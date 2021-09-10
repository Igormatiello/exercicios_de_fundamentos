

/*6) Gerar um vetor A com 100 elementos entre 10 e 400, inclusive, mostrar o vetor gerado. Em seguida
percorrer o vetor A e contar quantos elementos estão entre 10 e 100, quantos estão entre 101 e 200, quantos
estão entre 201 e 300 e quantos estão entre 301 e 400. A quantidade será armazenada no vetor B com
tamanho 4, para cada uma das respectivas quantidades. Por exemplo, vetorB[0] conterá a quantidade de
valores entre 10 e 100 no vetor A.
Observação: É indispensável que os valores sejam contados à medida que o vetor A é percorrido.

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
        int tamanho=100,limite1=10,limite2=400,i,j;



        int vetor[tamanho];
        gerar_vetorcomlimite(vetor,tamanho,limite1,limite2);
        printf("\n===VETOR A===\n");
        mostra_vetor(vetor,tamanho);

        int vetorB[4]= {0,0,0,0};

        for (i=0; i<tamanho; i++)
        {
            if (vetor[i]>=10 && vetor[i]<=100)
            {
                vetorB[0]++;
            }
            if (vetor[i]>=101 && vetor[i]<=200)
            {
                vetorB[1]++;
            }
            if (vetor[i]>=201 && vetor[i]<=300)
            {
                vetorB[2]++;
            }
            if (vetor[i]>=301 && vetor[i]<=400)
            {
                vetorB[3]++;
            }
        }
        printf("\n\n===VETOR B===\n");

        for (j=0; j<4; j++)
        {
            printf("%d\t",vetorB[j]);
        }



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
