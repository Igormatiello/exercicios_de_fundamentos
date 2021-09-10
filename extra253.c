

/*3) Gerar um vetor com 20 elementos aleatórios entre 5 e 20. Em seguida ordenar o vetor. Percorrer o vetor
ordenado e mostrar os pares e a soma dos pares de cada um dos valores armazenados. Caso existam
elementos repetidos, considerar apenas um deles.
Neste exercício, além de utilizar a função gerarVetorInteiroComFaixa(), a função mostrarVetorInteiro() e a
função ordenarVetorInteiro(), utilizar também uma função mostrarPares() e uma função somarPares(), ambas
devem ser criadas em uma biblioteca "pares.h".
O exemplo a seguir mostra a execução do programa, utilizá-lo como modelo de saída
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
