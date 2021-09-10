

/*2) Criar uma função para gerar valores aleatórios com ambos os limites especificados com o seguinte
protótipo:
void gerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int
limSup);
Sendo que limInf e limSup aceitam quaisquer valores positivos.
Dica: Use vetor[i] = (rand() % ((limSup - limInf) + 1)) + limInf;
Usando a função gerarVetorInteiroComFaixa(), gerar aleatoriamente um vetor com 20 elementos entre 5 e 20.
Em seguida ordenar o vetor. Percorrer o vetor ordenado e mostrar os divisores e a quantidade de divisores de
cada um dos valores armazenados. Caso existam elementos repetidos, considerar apenas um deles.
Atenção: Neste exercício, além de utilizar a função gerarVetorInteiroComFaixa(), a função
mostrarVetorInteiro() e a função ordenarVetorInteiro(), utilizar também a função mostrarDivisores() e a função
qtdeDivisores(), ambas criadas em exercícios anteriores e armazenadas em uma biblioteca chamada
"divisores.h".
A seguir um exemplo da execução do programa, utilizá-lo como modelo de saída.
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"
#include "divisores.h"


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
        printf("\n\n===DIVISORES===\n");
        for (i=0; i<tamanho; i++)
        {

            if (vetor2[i]!= vetor2[i-1])
            {
                printf("%d => ",vetor2[i]);
                op2(vetor2[i]);

                printf(" - %d divisores\n",op1(vetor2[i]));
            }



        }

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
