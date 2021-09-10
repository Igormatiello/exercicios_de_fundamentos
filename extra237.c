

/*5) Gerar vetores A e B, sendo A com n elementos aleatórios entre 1 e 20 e B com n elementos aleatórios
entre 1 e 15. O usuário informa a quantidade de elementos dos vetores, ou seja, o seu tamanho. Validar para
que seja informado um valor positivo para a quantidade de elementos. Mostrar os elementos dos vetores A e
B. Construir um vetor C, em que cada elemento de C será 1 quando o elemento de A for maior que o
respectivo elemento em B; será 0 quando o elemento de A for igual ao respectivo elemento em B; e será -1
quando o elemento de A for menor que o respectivo elemento em B. Mostrar os elementos do vetor C.
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
         int tamanhoA,tamanhoB, limiteA=20,limiteB=15,l,i,tamanhoC;

         do{
         printf("Informe o tamanho do Vetor A: ");
         scanf("%d",&tamanhoA);
         }while(tamanhoA<=0);
         do{
         printf("Informe o tamanho do Vetor B: ");
         scanf("%d",&tamanhoB);
         }while(tamanhoB<=0);
        int vetorA[tamanhoA],vetorB[tamanhoB];


        gerar_vetor(vetorA, tamanhoA,limiteA);
        printf("\n\n===VETOR A===\n");
        mostra_vetor(vetorA, tamanhoA);
        gerar_vetor(vetorB, tamanhoB,limiteB);
        printf("\n\n===VETOR B===\n");
        mostra_vetor(vetorB, tamanhoB);

         if (tamanhoA>=tamanhoB)
    {
        tamanhoC=tamanhoA;
    }
    else{
        tamanhoC=tamanhoB;
    }
    int vetorC[tamanhoC];

    for (l=0; l<tamanhoC; l++)
    {
        if (vetorA[l]>vetorB[l])
        vetorC[l]=1;
        else if (vetorA[l]<vetorB[l])
        {
            vetorC[l]=-1;
        }
        else
        {
            vetorC[l]=0;
        }


    }

printf("\n\n===VETOR C===\n");
     mostra_vetor(vetorC, tamanhoC);







        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
