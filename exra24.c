 /*Escreva um programa que, dados a quantidade de litros de combust�vel utilizada, os quil�metros
percorridos por um autom�vel e o valor do litro de combust�vel, calcule quantos quil�metros o ve�culo
percorreu por litro de combust�vel e o valor gasto em reais por km.*/
#include <stdio.h>
int main(void)
{
    float km,combu, preco, media, valor;


    printf("Informe os kms percorridos: ");
    scanf("%f", &km);
    printf("Informe o combustivel consumido, em litros: ");
    scanf("%f", &combu);
    printf("Informe o valor do litro de combustivel: ");
    scanf("%f", &preco);
    media= km/combu;
    valor= preco /media;
    printf("O automovel fez %.2f por litro de combustivel\nO gasto em reais por km foi de R$ %.2f",media,valor);
    return 0;
}
