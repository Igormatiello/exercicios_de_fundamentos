/*Escreva um algoritmo que converta um valor de temperatura de graus Celsius para graus
Fahrenheit, cuja fórmula de conversão é: (9 * graus Celsius + 160) /5. Faça o teste de mesa para 4
valores verificando se o algoritmo está correto. Primeiro calcule ou procure o valor de saída esperado.
Use a seguinte tabela para o teste de mesa*/

#include <stdio.h>


int main(void)
{

    float tem1,tem2;


    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &tem1);

    tem2= ( (9* tem1 ) +160)/5;

    printf(" Equivalente em graus fahrenheit eh: %.1f\n", tem2);






    return 0;

}
