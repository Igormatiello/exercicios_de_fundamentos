/*Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar
possui. Ela vai passar por vários países e precisa converter 50% do seu dinheiro em dólares, 10% em
euros, 25% em pesos e 15% em libras. O programa deverá receber o valor em reais, o valor atual das
moedas, fazer as conversões e mostrá-las*/

#include <stdio.h>


int main(void)
{

    float reais,dolar,euro,peso,libra,dolarconv,euroconv,pesoconv,libraconv,dolarres,eurores,pesores,librares;


    printf("Informe o valor em reais: ");
    scanf("%f",&reais);
    printf("Informe a cotacao do dolar: ");
    scanf("%f",&dolar);
    printf("Informe a cotacao do euro: ");
    scanf("%f",&euro);
    printf("Informe a cotacao do peso: ");
    scanf("%f",&peso);
    printf("Informe a cotacao da libra: ");
    scanf("%f",&libra);

    dolarconv=(reais *0.5);
    euroconv=(reais *0.1);
    pesoconv=(reais *0.25);
    libraconv=(reais *0.15);

    dolarres=dolarconv / dolar;
    eurores=euroconv / euro;
    pesores=pesoconv / peso;
    librares=libraconv / libra;

    printf("50%% de R$ %.2f equivale a R$ %.2f e a %.1f dolares. \n",reais,dolarconv,dolarres);
    printf("10%% de R$ %.2f equivale a R$ %.2f e a %.1f euros. \n",reais,euroconv,eurores);
    printf("25%% de R$ %.2f equivale a R$ %.2f e a %.1f pesos. \n",reais,pesoconv,pesores);
    printf("15%% de R$ %.2f equivale a R$ %.2f e a %.1f libras. \n",reais,libraconv,librares);









    return 0;

}
