

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
        int tamanho=121, limite2=45,limite1=5;
        int maior,menor, contagem=0,i,contagem2=0;
        float media;
        int vetor[tamanho];


        gerar_vetorcomlimite(vetor,tamanho,limite1,limite2);
        printf("\n===VETOR==\n");
        mostra_vetor(vetor,tamanho);



        for (i=0; i<tamanho; i++)
        {

            printf("%d\t",vetor[i]);
            if (i==0)
            {
                maior=vetor[i];
                menor=vetor[i];
            }
            else if (vetor[i]>=maior)
            {
                maior=vetor[i];
            }
            if (vetor[i]<menor)
            {
                menor=vetor[i];
            }
            contagem=contagem+vetor[i];


        }

        printf("\n\nMenor temperatura ocorrida: %d\n",menor);
        printf("\nMaior temperatura ocorrida: %d\n",maior);
        media=(float)contagem/tamanho;
        printf("\nTemperatura media: %.2f\n",media);
        for (i=0; i<tamanho; i++)
        {
            if (vetor[i]<media)
            {
                contagem2++;
            }
        }
        printf("Quantidade de dias em que a temperatura foi menor que a media: %d\n",contagem2);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
