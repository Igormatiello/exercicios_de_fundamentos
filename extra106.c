/*6) Apresente os pares entre 0 e 100, sem utilizar if dentro do for. Também calcule e forneça a média dos
pares.
*/
#include <stdio.h>


int main(void)
{
    int i=0,soma=0,contagem=0;
    float media;
    printf("Numeros pares:\n");
    for (i=0;i<=100;)
    {

        printf("%d\n",i);
        soma=soma+i;
        contagem=contagem+1;

        i=i+2;
    }
    media=soma/(float)contagem;
    printf("Media dos pares: %.2f\n",media);
    return 0;
}






