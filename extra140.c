
/*1) Ler um número maior ou igual a 0 que representa a quantidade de valores pares que devem ser mostrados.
Apresentar esses valores n por linha, sendo n um número positivo, informado pelo usuário. Os valores são
apresentados separados por tabulação
*/
#include <stdio.h>

int main(void)
{
    int i=2,num,tab;
    printf("Quantidade de pares a ser mostrada: ");
    scanf("%d",&num);
    printf("Quantidade de elementos por linha: ");
    scanf("%d",&tab);
    for (i; i<=(num*2);)
    {
        printf("%d\t",i);
        if (i==tab)
        {
            printf("\n");
            tab=tab+tab;
        }
        i=i+2;


    }



    return 0;
}






