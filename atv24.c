/* 4) Escreva um programa que leia um n�mero e verifique se ele se encontra no intervalo entre 5 e 20. Mostre
uma mensagem se o n�mero estiver nesse intervalo.
*/


#include <stdio.h>


int main(void)
{


    float num;

    printf("Informe um numero: ");
    scanf("%f",&num);
    if ((num > 5) && (num < 20))
    {

        printf("%.1f se encontra no intervalo entre 5 e 20\n",num);
    }
    return 0;

}
