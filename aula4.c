/* Fa�a um programa que receba o peso e a altura de uma pessoa e calcule o �ndice de massa corp�rea.
Esse �ndice mede a rela��o entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros). Use a fun��o pow() da biblioteca math.h para calcular a pot�ncia.*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float altura, massa, imc;



    printf("Informe a sua altura, em metros: ");
    scanf("%f", &altura);
    printf("Informe a sua massa corporal, em kg: ");
    scanf("%f", &massa);
    imc= massa /(pow(altura,2));

    printf("O seu IMC: %.2f\n", imc);


    return 0;

}
