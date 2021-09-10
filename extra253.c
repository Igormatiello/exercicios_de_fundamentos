

/*3) Gerar um vetor com 20 elementos aleat�rios entre 5 e 20. Em seguida ordenar o vetor. Percorrer o vetor
ordenado e mostrar os pares e a soma dos pares de cada um dos valores armazenados. Caso existam
elementos repetidos, considerar apenas um deles.
Neste exerc�cio, al�m de utilizar a fun��o gerarVetorInteiroComFaixa(), a fun��o mostrarVetorInteiro() e a
fun��o ordenarVetorInteiro(), utilizar tamb�m uma fun��o mostrarPares() e uma fun��o somarPares(), ambas
devem ser criadas em uma biblioteca "pares.h".
O exemplo a seguir mostra a execu��o do programa, utiliz�-lo como modelo de sa�da
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"
#include "pares.h"


int main(void)
{


    char repetir;
    do
    {

        int tamanho=20,limite1=5,limite2=20,i;
        int vetor[tamanho],vetor2[tamanho];

        printf("===VETOR ORIGINAL===\n");

        gerar_vetorcomlimite(vetor,tamanho,limite1,limite2);
        mostra_vetor(vetor,tamanho);

        for (i=0; i<tamanho; i++)
        {
            vetor2[i]=vetor[i];
        }


        ordenaVetor(vetor2,tamanho);
        printf("\n\n===VETOR ORDENADO===\n");
        mostra_vetor(vetor2,tamanho);






        printf("\n\n\n");
        printf("\n===PARES===\n");
        for (i=0; i<tamanho; i++)
        {

            if (vetor2[i]!= vetor2[i-1])
            {
                printf("%d =>",vetor2[i]);
                mostra_pares(vetor2[i]);
                printf("  Soma: %d\n",soma_pares(vetor2[i]));
            }



        }

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
