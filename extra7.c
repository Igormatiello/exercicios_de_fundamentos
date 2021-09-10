/*) Faça um algoritmo que receba uma temperatura em grau Celsius, e calcule e mostre essa temperatura em
grau Fahrenheit. Sabe-se que F = (1.8 * C) + 32.*/
#include <stdio.h>
int main(void)
{
    float celsius, fahre;

    printf("Informe a temetura em graus celsius: ");
    scanf("%f", &celsius);
    fahre= ( celsius * 1.8) + 32;
    printf("Equivalencia em Fahrenheit %.1f\n",fahre);

    return 0;

}

