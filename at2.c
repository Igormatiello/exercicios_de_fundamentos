/*Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo
em dias, horas e minutos (as três últimas em tipo float).*/


#include <stdio.h>

int main(void)
{
    int segundos;
    float horas, minutos, dias;


    printf("Informe a qauntidade de segundos: ");
    scanf("%d", &segundos);

    minutos= (float)segundos / 60.0;
    horas= minutos/60.0;
    dias= horas/24.0;



    printf(" O tempo em minutos eh: %.1f\n", minutos);
    printf(" O tempo em horas eh: %.1f\n", horas);
    printf(" O tempo em dias eh: %.1f\n", dias);



    return 0;

}

