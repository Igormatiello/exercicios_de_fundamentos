/*6) Ler tr�s valores inteiros que representam os lados de um tri�ngulo e determinar se esses valores podem
formar um tri�ngulo (obs.: para ser um tri�ngulo cada lado deve ser menor que a soma dos outros dois lados).
Se for um tri�ngulo, determinar o seu tipo: equil�tero (todos os lados iguais), is�sceles (dois lados iguais) e
escaleno (todos os lados diferentes).
*/

#include <stdio.h>


int main(void)
{


    float lado1,lado2,lado3;

    printf("Informe o primeiro lado do traingulo: ");
    scanf("%f",&lado1);
    printf("Informe o segundo lado do traingulo: ");
    scanf("%f",&lado2);
    printf("Informe o terceiro lado do traingulo: ");
    scanf("%f",&lado3);


    if (lado1>(lado2+lado3))
    {
    printf("Nao eh um triangulo\n");
    }
    if (lado2>(lado1+lado3))
     {
    printf("Nao eh um triangulo\n");
     }
    if (lado3>(lado2+lado1))
    {
    printf("Nao eh um triangulo\n");
    }
    if (lado2==lado1 && lado3==lado1)
    {
    printf("Triangulo equilatero\n");
    }
    if ((lado1==lado2 && lado1 != lado3) || (lado1!=lado2 && lado1 == lado3) || (lado1!=lado2 && lado2 == lado3))
    {
    printf("Triangulo isosceles\n");
    }
    if ((lado1 != lado2) && (lado1 != lado3) && (lado3 !=lado2))
    {
        printf("Triangulo escaleno\n");

    }

    return 0;

}
