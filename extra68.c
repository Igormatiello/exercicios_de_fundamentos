/*Fa�a um programa que receba o n�mero de horas trabalhadas, o valor do sal�rio m�nimo e o n�mero
de horas extras trabalhadas, calcule e mostre o sal�rio a receber, de acordo com as regras a seguir:
- A hora trabalhada vale 1/8 do sal�rio m�nimo;
- A hora extra vale 1/4 do sal�rio m�nimo;
- O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
- A quantia a receber pelas horas extras equivale ao n�mero de horas extras trabalhadas multiplicado
pelo valor da hora extra;
- O sal�rio l�quido a receber equivale ao sal�rio bruto mais a quantia a receber pelas horas extras*/

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
