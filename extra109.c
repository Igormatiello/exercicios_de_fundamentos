/*9) Leia dois valores que representam os limites de um intervalo. O usuário pode informar os valores em
ordem crescente ou decrescente. Para os limites do intervalo validar para que:
1) O programa não aceite valores iguais, ou seja, que o limite inferior seja igual ao superior e vice-versa;
2) Em cada limite não seja informado valor menor ou igual a zero.
Apresente os valores separados por tabulação. Faça a média dos valores que são divisíveis por 11 e por 7,
desse intervalo.

*/
#include <stdio.h>

int validacao = 0;

int main(void)
{
    int lim1,lim2,superior,inferior,i,soma=0,contagem=0;
    float media;

    while (validacao == 0)
    {
        printf("Informe o primeiro limite: ");
        scanf("%d",&lim1);
        printf("Informe o segundo limite: ");
        scanf("%d",&lim2);
        if(lim1>0 && lim2>0 && lim1!=lim2)
        {
            validacao=1;
        }


    }
    if (lim1>lim2)
    {
        superior=lim1;
        inferior=lim2;
    }
    else
    {
        superior=lim2;
        inferior=lim1;
    }
    for (i=inferior; i<=superior;i++)
    {
        printf("%d\t",i);
        if ((i%11==0) && (i%7==0))
        {
            soma=soma+i;
            contagem=contagem+1;
        }
    }
        media=(float)soma/contagem;
        if (contagem!=0){
        printf("\n\nMedia dos valores que sao divisiveis por 11 e por 7: %.1f",media);
        }

    return 0;
}






