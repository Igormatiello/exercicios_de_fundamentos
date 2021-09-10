/*Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo
consorciado e o saldo devedor.*/

#include <stdio.h>

int main(void)

{
    float presta, pagas, fixo, pago, falta;
    printf("Informe a quantidade de prestaçoes: \n");
    scanf("%f",&presta);
    printf("Informe a quantidade de prestaçoes ja pagas: \n");
    scanf("%f",&pagas);
    printf("Informe o valor fixo de cada prestaçao:R$ \n");
    scanf("%f",&fixo);
    pago= fixo*pagas;
    printf("Valor total ja pago: R$ %.2f\n", pago);
    falta= (presta - pagas) * fixo;
    printf("Saldo devedor: R$ %.2f\n", falta);








    return 0;

}
