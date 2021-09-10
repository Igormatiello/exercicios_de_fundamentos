/*  Escreva um programa que leia um número e verifique se ele é maior, menor ou igual a 10.
*/


#include <stdio.h>


int main(void)
{


    int num;

    printf("Informe um numero: ");
    scanf("%d",&num);


    if (num > 10)
    {

        printf("%d eh maior que 10\n",num );
    }
    else
    {
        if (num==10)


       {
         printf("%d eh igual a 10\n",num);
       }

 else
    {
        printf("%d eh menor que 10",num);
    }
       }



    return 0;

}
