
/*12) Mostrar os valores ímpares e divisíveis por 7 entre 500 e 0 em ordem decrescente. Obter a média dos pares e divisíveis por 3
desse intervalo
*/
#include <stdio.h>

int main(void)
{
    int i,contagem=0,soma=0,quebralinha=0;
    float media;
    for (i=500; i>=0; i--)
    {
        if (i%2!=0 && i%7==0)
        {
            printf("%d\t",i);
            quebralinha=quebralinha+1;
            if (quebralinha%5==0)
            {
                printf("\n");
            }
        }
        if (i%2==0 && i%3==0)
        {
            contagem=contagem+1;
            soma=soma+i;
        }

    }
    media=soma/contagem;
    printf("\n\nMedia dos pares e divisiveis por 3 eh: %.1f\n",media);


    return 0;
}






