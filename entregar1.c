/*1) A contribui��o para o INSS � calculada da seguinte forma:
a) Sal�rio bruto at� tr�s sal�rios m�nimos = INSS 8%.
b) Sal�rio bruto acima de tr�s sal�rios m�nimos = INSS 10%.
c) Para as contribui��es maiores que o sal�rio m�nimo, considerar a import�ncia de um sal�rio m�nimo.
Elaborar um programa que receba como entrada o valor do sal�rio m�nimo e o valor do sal�rio bruto, calcule o
INSS e o sal�rio l�quido restante e informe-os*/
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
