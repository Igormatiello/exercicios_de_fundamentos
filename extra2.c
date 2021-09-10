/*2) Escreva um algoritmo que leia o raio de um círculo e calcule a sua circunferência (C = 2. π. r). */

#include <stdio.h>

int main(void)
{
    float raio, circuferencia, pi;
    printf("Informe o raio do circulo, em cm: ");
    scanf("%f", &raio);
    pi=3.1415;
    circuferencia= ( 2 * pi * raio);


    printf("Circuferencia total, em cm: %.2f\n", circuferencia);

    return 0;

}

