/*12) Elaborar um programa que permita ao usuário fornecer 30 números quaisquer e apresente:
a) A soma dos 10 primeiros números.
b) A soma do 11º número até o 20º número.
c) A soma do 21º número até o 30º número.
d) A soma de todos os números
*/



#include <stdio.h>


int main(void)
{
    int i,num,soma1=0,soma2=0,soma3=0,somatotal=0;

    for (i=1;i<=30;i++)
    {
        printf("Informe um valor: ");
        scanf("%d",&num);
        if (i<=10)
        {
            soma1=soma1+num;
            somatotal=somatotal+num;
        }
        if (i>=11 && i < 21)
        {
            soma2=soma2+num;
            somatotal=somatotal+num;
        }
        if (i>=21 && i<31)
        {
            soma3=soma3+num;
            somatotal=somatotal+num;
        }

    }
    printf("A soma dos 10 primeiros numeros: %d\n",soma1);
    printf("A soma do 11 numero ateh o 20 numero: %d\n",soma2);
    printf("A soma do 21 numero ateh o 30 numero: %d\n",soma3);
    printf("A soma de todos os numeros: %d\n",somatotal);



    return 0;
}






