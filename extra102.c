/*2) Fa�a um programa que apresente uma tabela de lucro esperado, em decorr�ncia do n�mero de pessoas e
valor do ingresso. O valor do ingresso vai de R$ 15,00 at� R$ 20,00 aumentando de R$ 0,50 centavos. �
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






