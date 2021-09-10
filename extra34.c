/*Faça um programa para calcular a quantidade de fita necessária, em centímetros, para amarrar um pacote
com duas voltas, sendo uma pela largura e outra pelo comprimento do pacote. Serão fornecidas a largura, a
altura e o comprimento do pacote. Para amarrar as pontas da fita são necessários 15 cm de fita em cada
ponta. A figura a seguir ilustra a maneira como a fita é passada pelo pacote.*/

#include <stdio.h>

int main(void)
{
    float largura, altura, comprimento, ponta1, ponta2, total;
    printf("Informe a largura do pacote, em cm: \n");
    scanf("%f", &largura);
    printf("Informe o comprimento do pacote, em cm: \n");
    scanf("%f",&comprimento);
    printf("Informe a altura do pacote, em cm: \n");
    scanf("%f", &altura);
    ponta1= (2 * altura) + (2 * comprimento)+ 15;
    ponta2= (2* altura)+ (2* largura)+ 15;
    total= ponta1+ponta2;
    printf("Serao necessarios %.0f cm de fita", total);






    return 0;
}
