
/*2) Ler dois números que representam os limites de um intervalo. Validar a entrada, o usuário deverá fornecer
valores positivos. Mostrar o intervalo em ordem crescente.
a) Mostrar os números primos desse intervalo, com cinco números por linha.
b) Calcular a média dos múltiplos de 3 e de 7 desse intervalo. Validar para que não seja realizada uma
divisão por zero


*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{

     char repetir;
    do
    {
     int lim1,lim2,i,j,validacao,linha=0,contagem=0,soma=0;
     float media;

     do {
            printf("Imforme um valor para limite inferior do intervalo: ");
     scanf("%d",&lim1);


     }while(lim1<=0);

    do {
    printf("Informe um valor para o limite superior do intervalo: ");
    scanf("%d",&lim2);

    }while (lim2<=0);


    for (j=lim1; j<=lim2;j++)
    {
        if (j%3==0 && j%7==0)
        {
            soma=soma+j;
            contagem=contagem+1;

        }
        validacao=0;
        for (i=(j-1); i>=2; i--)
        {


            if (j%i==0 )
        {
           validacao=1;
        }
        }
        if (validacao==0 &&j!=1)
        {
            printf("%d\t",j);
            linha=linha+1;
            if (linha%5==0)
            {
                printf("\n");
            }
        }


    }
    if (contagem!=0)
    {
    media=(float)soma/contagem;
    printf("\n\nMedia dos multiplos de 3 e 7: %.2f\n",media);
    }






printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



