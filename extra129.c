
/*
     9) Ler dois valores que representam os limites de um intervalo. Mostrar os números pares e divisíveis por 3 desse intervalo em
ordem crescente. Por exemplo: informados 2 e 30 como limites, mostrar: 6, 12, 18, 24, 30. O usuário pode informar os valores em
qualquer ordem.
*/
#include <stdio.h>

int main(void)
{
    int lim1,lim2,inferior,superior;

    printf("Informe o limite infeior: ");
    scanf("%d",&lim1);
    printf("Informe o limite superior: ");
    scanf("%d",&lim2);

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

    for (inferior; inferior<=superior; inferior++)
    {


        if (inferior%2==0 && inferior%3==0)
        {
            printf("%d\t",inferior);
        }
    }


    return 0;
}






