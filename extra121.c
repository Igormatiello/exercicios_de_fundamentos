/*

1) Uma �rvore A tem 1,50 metros e cresce 2 cent�metros por ano, enquanto uma �rvore B tem 1,10 metros e cresce 3 cent�metros
por ano. Construa um programa que calcule e imprima quantos anos ser�o necess�rios para que a �rvore B seja maior que a
�rvore A

*/
#include <stdio.h>



int main(void)
{
    int a,b,ano=0;
    float alta,altb;
    for (a=150, b=110; b<=a;)
    {

        a=a+2;
        b=b+3;
        ano=ano+1;

    }
    alta= (150 + ((float)ano*2))/100;
    altb= (110 + ((float)ano*3))/100;


    printf("Altura final da arvore A= %.2f\n",alta);
    printf("Altura final da arvore B= %.2f\n",altb);
    printf("Serao necessarios %d anos para que a arvore B seja maior que a arvore A\n",ano);


    return 0;
}






