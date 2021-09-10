#include <stdio.h>
int main(void)
{
    float reajuste, salario, total;

    printf("Informe o salario atual: ");
    scanf("%f", &salario);
    printf("Informe o percentual de reajuste: ");
    scanf("%f", &reajuste);


    total= salario + ( salario * reajuste/100);


    printf("Salario total:%f\n",total);
    return 0;
}
