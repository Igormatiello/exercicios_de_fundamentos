

/*1) Ler a altura de 5 pessoas, armazenar em um vetor. Validar para que seja informado um valor positivo para
a altura. Identificar e mostrar a maior altura e o índice do vetor que essa altura corresponde. Calcular a média
das alturas acima de 1,50 e mostrar essa média. Validar para que não seja realizada uma divisão por zero no
cálculo da média.

 */

#include <stdio.h>
#include <ctype.h>



int main(void)
{


    char repetir;
    do
    {
        int i,contagem=0,posicao;
        float altura[5],maior,somatorio=0,media;
        for (i=0; i<5; i++)
        {
            do
            {
                printf("Informe a altura da pessoa %d: ",(i+1));
                scanf("%f",&altura[i]);

            }
            while(altura[i]<=0);
        }


        for (i=0; i<5; i++)
        {

            if (i==0)
            {
                maior=altura[i];
            }
            if (altura[i]>=maior)
            {
                maior=altura[i];
                posicao=i;
            }
            if (altura[i]>1.5)
            {
                somatorio=somatorio+altura[i];
                contagem++;

            }

        }
        printf("Maior altura eh %.2f e esta na posicao %d do vetor.\n",maior,posicao);


        if (contagem!=0)
        {
            media=somatorio/contagem;
            printf("Media das alturas maiores que um metro e meio: %.2f\n",media);
        }
        else
        {
            printf("Sem altura acima de um metro e meio\n");
        }

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
