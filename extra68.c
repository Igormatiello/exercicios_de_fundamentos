/*Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
- A hora trabalhada vale 1/8 do salário mínimo;
- A hora extra vale 1/4 do salário mínimo;
- O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
- A quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado
pelo valor da hora extra;
- O salário líquido a receber equivale ao salário bruto mais a quantia a receber pelas horas extras*/

#include <stdio.h>


int main(void)
{

    float trab,sm,he,bruto1,bruto2,liquido;


    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f",&trab);
    printf("Informe o valor do salario minimo: R$");
    scanf("%f",&sm);
    printf("Informe o numero de horas extras trabalhadas: ");
    scanf("%f",&he);
    bruto1=trab * .125 * sm;
    bruto2=he * 0.25*sm;
    liquido=bruto1 +bruto2;
    printf("Salario liquido: R$ %.2f\n",liquido);









    return 0;

}
