/*1) Um eletricista precisa comprar fio que ir� passar pela diagonal de uma casa de formato retangular.
Como ele n�o tem condi��es de medir a diagonal com precis�o, uma solu��o alternativa � medir os
lados da casa. A diagonal pode ser calculada a partir dos lados pelo Teorema de Pit�goras (a2 = b2 +
c2 ). Fa�a um algoritmo que calcule a quantidade m�nima necess�ria de fio a ser comprada. Apresente
tamb�m a quantidade m�nima em metros inteiros. Por exemplo: resultado do c�lculo 18.35, apresentar
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

