/*Ler um valor que representa o preço de um produto e imprimir esse valor com reajuste de x%. O percentual
do reajuste é informado pelo usuário.*/

#include <stdio.h>

int main(void)
{
    float valor,reajuste, total;
    printf("Informe o valor de um priduto: R$ ");
    scanf("%f", &valor);
    printf("Informe o percentual de reajuste do valor do produto( entre 0 e 100 ): ");
    scanf("%f", &reajuste);
    total= ((reajuste/100 )*valor) +valor;

    printf("O valor reajustado do produto eh R$ %.2f\n", total);

    return 0;

}
