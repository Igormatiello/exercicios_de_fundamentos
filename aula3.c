/* Cada degrau de uma escada tem uma altura X. Fa�a um programa para ler essa altura e a altura que o
usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para
atingir o seu objetivo.*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float degraus, alturatotal, alturadegrau;



    printf("Informe a altura do degrau: ");
    scanf("%f", &alturadegrau);
    printf("Informe a altura total que deseja subir: ");
    scanf("%f", &alturatotal);
    degraus= alturatotal / alturadegrau;

    printf(" A quantidade de degraus a subir pelo menos: %.0f\n", ceil(degraus));


    return 0;

}
