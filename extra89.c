/*9) Elaborar um programa para mostrar os números pares entre 20 e 100. Fazer a média dos valores desse
intervalo que são divisíveis por 5
*/

#include <stdio.h>


int main(void)
{
    int i,soma,contagem;
    float media;
    printf("Numeros pares entre 20 e 100:\n");
    for (i=20;i<=100;)
    {
        printf("%d\n",i);
        if (i%5==0)
        {
            soma=soma+i;
            contagem=contagem+1;
        }
        i=i+2;
    }
    media=soma/contagem;
    printf("Media dos valores que sao divisiveis por 5: %.1f",media);

    return 0;
}






