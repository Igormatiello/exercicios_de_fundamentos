/*8) Fazer o programa para o algoritmo representado no fluxograma a seguir:
*/

#include <stdio.h>


int main(void)
{


    float base,grati,bruto;

    printf("Informe o salario base:R$ ");
    scanf("%f",&base);
    printf("Informe a gratificacao:R$ ");
    scanf("%f",&grati);
    bruto=grati+base;

    if (bruto < 1000)
   {
       printf("Salario liquido: R$ %.2f",(bruto - (bruto*0.15)));
   }
    else
    {
        printf("Salario liquido: R$ %.2f",(bruto - (bruto*0.20)));
    }

    return 0;

}
