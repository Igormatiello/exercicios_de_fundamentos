/*) Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
Renda anual Al�quota*
At� R$ 10.000,00 0%
> R$ 10.000,00 e <= R$ 25.000,00 10%
Acima de R$ 25.000,00 25%
*Al�quota � o percentual para realizar o c�lculo do imposto de renda a ser pago.
Se informado valor negativo, n�o realizar o c�lculo e informar o usu�rio*/

#include <stdio.h>


int main(void)
{


    float renda,ir;

    printf("Informe sua renda anual: R$ ");
    scanf("%f",&renda);
    if (renda < 0)
    printf("Valor negativo nao pode ser calculado");
    else
    {
        if (renda <=10000)
        {
            printf("Nao eh necessario pagar imposto de renda");
        }
        if (renda <= 25000 && renda>10000)
        {

            ir=renda*0.1;
            printf("Valor a ser pago de imposto de renda:R$ %.2f",ir);
        }
        if (renda > 25000)
        {

            ir=renda*0.25;
            printf("Valor a ser pago de imposto de renda:R$ %.2f",ir);
        }

    }


    return 0;

}
