/*Leia dois valores A e B e efetue a troca do conte�do das duas vari�veis lidas, de forma que a vari�vel A
passe a ter o valor de B e a vari�vel B o valor de A. Mostre o conte�do das vari�veis antes e depois da troca.*/

#include <stdio.h>
int main(void)
{
    int a,b,aux;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf(" Antes da troca A:%d e B: %d\n",a, b);
    aux=a;
    a=b;
    b=aux;
    printf(" Depois da troca A:%d e B: %d\n",a, b);

    return 0;

}
