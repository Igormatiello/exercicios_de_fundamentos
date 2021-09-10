/*3) Escreva um algoritmo que converta um valor temperatura de graus Fahrenheit para graus Celsius,
cuja fórmula de conversão é: (graus Fahrenheit - 32) * (5/9). Faça o teste de mesa para 4 valores
verificando se o algoritmo está correto. Primeiro calcule ou procure ou calcule o valor de saída
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
