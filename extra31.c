/*Considerando que para um cons�rcio sabe-se o n�mero total de presta��es, a quantidade de presta��es
pagas e o valor de cada presta��o (que � fixo). Escreva um programa que determine o valor total j� pago pelo
consorciado e o saldo devedor.*/

#include <stdio.h>

int main(void)

{
    float presta, pagas, fixo, pago, falta;
    printf("Informe a quantidade de presta�oes: \n");
    scanf("%f",&presta);
    printf("Informe a quantidade de presta�oes ja pagas: \n");
    scanf("%f",&pagas);
    printf("Informe o valor fixo de cada presta�ao:R$ \n");
    scanf("%f",&fixo);
    pago= fixo*pagas;
    printf("Valor total ja pago: R$ %.2f\n", pago);
    falta= (presta - pagas) * fixo;
    printf("Saldo devedor: R$ %.2f\n", falta);








    return 0;

}
