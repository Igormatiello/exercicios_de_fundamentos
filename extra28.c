/*   Faça um programa que leia o salário bruto mensal de um funcionário, calcule e mostre os valores conforme
o exemplo a seguir. Observação: É possível fazer esse programa utilizando somente três variáveis: uma para
ler o salário bruto, outra para os descontos e outra para o salário líquido.*/

#include <stdio.h>
int main(void)
{
    float desconto, bruto, liquido;

    printf("Informe o salrio bruto: R$ ");
    scanf("%f", &bruto);
    printf("Salario bruto: %.2f\n",bruto);
    liquido= bruto - (bruto *15/100) - ( bruto * 11/100) - ( bruto * 3/100);
    desconto= bruto * 15/100;
    printf("(-)IR (15%): %.2f R$\n",desconto);
    desconto= bruto * 11/100;
    printf("(-)INSS (11%): %.2f R$\n",desconto);
    desconto= bruto * 3/100;
    printf("(-)sindicato (3%): %.2f R$\n",desconto);
    printf("Salario liquido: %.2f R$",liquido);



    return 0;
}
