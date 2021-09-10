/* Escreva um programa que o leia o número de horas trabalhadas por um funcionário, o valor por hora, o
número de filhos com idade menor do que 14 anos, o valor do salário família por filho e calcule e mostre o
salário desse funcionário.*/

#include <stdio.h>
int main(void)
{
    float horas, valor, filhos, salfil, salario;

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Informe o valor da hora trabalhada:R$ ");
    scanf("%f", &valor);
    printf("Informe o numero de filhos menores de 14 anos: ");
    scanf("%f", &filhos);
    printf("Informe o valor do salario da familia:R$ ");
    scanf("%f", &salfil);
    salario= (horas * valor) + ( filhos * salfil);

    printf("Salario: R$ %.2f\n",salario );




    return 0;
}
