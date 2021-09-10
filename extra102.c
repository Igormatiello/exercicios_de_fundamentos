/*2) Faça um programa que apresente uma tabela de lucro esperado, em decorrência do número de pessoas e
valor do ingresso. O valor do ingresso vai de R$ 15,00 até R$ 20,00 aumentando de R$ 0,50 centavos. É
informada a quantidade de pessoas
*/



#include <stdio.h>


int main(void)
{
    int quant;
    float i,valor;
    printf("Informe a quantidade de pessoas: ");
    scanf("%d",&quant);
    printf("VALOR DO INGRESSO\tVALOR TOTAL RECEBIDO\n");

    for (i=15 ; i<=20;)
    {
        printf("R$ %.2f\t\t",i);
        valor=i*quant;
        printf("R$ %.2f\n",valor);

        i=i+0.5;
    }


    return 0;
}






