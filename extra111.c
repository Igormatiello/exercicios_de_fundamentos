/*

11) Um n�mero � primo quando � divis�vel de maneira exata somente por 1 e por ele mesmo. Na figura a
seguir, os n�meros destacados s�o primos:
Elabore um programa que leia um n�mero inteiro e determine se o mesmo � ou n�o um n�mero primo

*/
#include <stdio.h>



int main(void)
{
        int num,i,contagem=0,naodiv;
        printf("Informe um numero: ");
        scanf("%d",&num);
        for (i=(num-1); i>=2;i--)
        {
            if (num%i!=0)
            {
                contagem=contagem+1;
            }


        }
        naodiv=num-2;
        if (contagem==naodiv)
        {
            printf("%d eh numero primo\n",num);
        }
        else
        {
            printf("%d nao eh numero primo\n",num);
        }



    return 0;
}






