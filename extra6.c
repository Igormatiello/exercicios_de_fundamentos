 /*Calcular o valor do sal�rio l�quido de uma pessoa. Sobre o sal�rio bruto incidem descontos de imposto de
renda e de INSS.*/
#include <stdio.h>
int main(void)
{
    float bruto, inss, ir, total;

    printf("Informe o salario bruto: ");
    scanf("%f", &bruto);
    printf("Informe o percentual do INSS: ");
    scanf("%f", &inss);
    printf("Informe o percentual do IR: ");
    scanf("%f", &ir);
    total= bruto - ( (bruto * inss/100) + (bruto * ir/100) );

    printf("Salario liquido: %.2f\n", total);

    return 0;

}
