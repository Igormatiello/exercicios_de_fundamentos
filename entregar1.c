/*1) A contribuição para o INSS é calculada da seguinte forma:
a) Salário bruto até três salários mínimos = INSS 8%.
b) Salário bruto acima de três salários mínimos = INSS 10%.
c) Para as contribuições maiores que o salário mínimo, considerar a importância de um salário mínimo.
Elaborar um programa que receba como entrada o valor do salário mínimo e o valor do salário bruto, calcule o
INSS e o salário líquido restante e informe-os*/
#include <stdio.h>


int main(void)
{
    float bruto,minimo,desconto,salario;

    printf("Informe o salario minimo:R$ ");
    scanf("%f",&minimo);
    printf("Informe o salario bruto:R$ ");
    scanf("%f",&bruto);

    if (bruto <=(minimo*3))
    {
        desconto=bruto*0.08;
    }
    else
    {
        desconto=bruto*0.1;
    }
    if (desconto < minimo)
    {
        salario= bruto-desconto;
        printf("INSS: R$ %.2f\n",desconto);
        printf("Salario liquido: R$%.2f",salario);
    }
    else
    {
        salario= bruto -minimo;
        printf("INSS: R$ %.2f\n",minimo);
        printf("Salario liquido: R$ %.2f\n",salario);

    }


    return 0;

}
