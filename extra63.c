/*3) Escreva um algoritmo que converta um valor temperatura de graus Fahrenheit para graus Celsius,
cuja f�rmula de convers�o �: (graus Fahrenheit - 32) * (5/9). Fa�a o teste de mesa para 4 valores
verificando se o algoritmo est� correto. Primeiro calcule ou procure ou calcule o valor de sa�da
esperado. Use a seguinte tabela para o teste de mesa*/

#include <stdio.h>


int main(void)
{

    float t1,t2;


    printf("Informe a temperatura em graus fahrenheit: ");
    scanf("%f",&t1);


     t2= (t1-32)* 5/9;

    printf("Equivalente em graus celsius eh: %.1f\n", t2);






    return 0;

}
