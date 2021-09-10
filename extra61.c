/*1) Um eletricista precisa comprar fio que irá passar pela diagonal de uma casa de formato retangular.
Como ele não tem condições de medir a diagonal com precisão, uma solução alternativa é medir os
lados da casa. A diagonal pode ser calculada a partir dos lados pelo Teorema de Pitágoras (a2 = b2 +
c2 ). Faça um algoritmo que calcule a quantidade mínima necessária de fio a ser comprada. Apresente
também a quantidade mínima em metros inteiros. Por exemplo: resultado do cálculo 18.35, apresentar
19 metros.
*/


#include <stdio.h>
#include <math.h>

int main(void)
{

    float lado1,lado2, resultado;
    int inteira;


    printf("Informe o tamanho, em metros, de um lado da casa: ");
    scanf("%f", &lado1);
    printf("Informe o tamanho, em metros, do outro lado da casa: ");
    scanf("%f", &lado2);
    resultado= sqrt(pow(lado2,2) + pow(lado1,2));






    printf(" Quantidade minima de fio a ser comprado eh: %.1f\n", resultado);
    printf(" Quantidade minima de fio a ser comprado eh, em metros inteiros: %.1f\n", ceil(resultado));





    return 0;

}

