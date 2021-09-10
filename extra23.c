/*Escreva um programa que calcule o valor da conversão para dólares de um valor lido em reais*/

 #include <stdio.h>
int main(void)
{
    float dolar, reais, conversao;


    printf("Informe o valor atual do dolar: ");
    scanf("%f", &dolar);
    printf("Informe o total de reais: ");
    scanf("%f", &reais);
    conversao= ( reais /dolar);
    printf("RS%.2f equivalem a U$%.2f\n",reais,conversao);
    return 0;
}
