
/*2) Elaborar um programa que determine a pot�ncia de um n�mero. O usu�rio informa a base e o expoente e o
programa informa o resultado da base elevada ao expoente. N�o usar fun��es prontas do C para fazer o c�lculo da
pot�ncia.

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






