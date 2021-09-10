/*6) Ler três valores inteiros que representam os lados de um triângulo e determinar se esses valores podem
formar um triângulo (obs.: para ser um triângulo cada lado deve ser menor que a soma dos outros dois lados).
Se for um triângulo, determinar o seu tipo: equilátero (todos os lados iguais), isósceles (dois lados iguais) e
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
