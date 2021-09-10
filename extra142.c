
/*2) Elaborar um programa que determine a potência de um número. O usuário informa a base e o expoente e o
programa informa o resultado da base elevada ao expoente. Não usar funções prontas do C para fazer o cálculo da
potência.

*/
#include <stdio.h>

int main(void)
{
    int num,pote,i,produto=1;
    printf("Informe o valor da base: ");
    scanf("%d",&num);
    printf("Informe o valor do expoente: ");
    scanf("%d",&pote);
    for (i=1; i<=pote;i++)
    {
        if (i<pote){
        produto= produto  * num;
        printf("%d * ",num);
        }
        if (i==pote)
        {
             produto= produto  * num;
        printf("%d = ",num);
        }

    }
    printf("%d",produto);


    return 0;
}






