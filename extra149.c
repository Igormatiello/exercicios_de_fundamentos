
/*9) Elaborar um programa que leia um n�mero que representa a quantidade de valores �mpares e m�ltiplos de 5 que o
usu�rio que ver. Se o usu�rio informar um valor negativo transform�-lo em positivo sem usar a fun��o fabs(). Fazer a
m�dia dos valores m�ltiplos de 3 desse intervalo.

*/
#include <stdio.h>
int main(void)
{
    int quant,soma=0,contagem=0,i,contimpar=0;
    float media;
    printf("Informe a quantidade de valores impares e multiplos de 5:  ");
    scanf("%d",&quant);

    if (quant < 0)
    {
        quant=quant*(-1);
    }
    for (i=1; contimpar<=quant;)
    {
        if (i%2!=0 &&  i%5==0)
        {
            printf("%d\n",i);
            contimpar=contimpar+1;

        }
        if (i%3==0)
        {
            soma=soma+i;
            contagem=contagem+1;
        }
         i=i+1;

    }
    media= (float)soma / contagem;
    printf("Media de multiplos de 3 do intervalo: %.1f\n",media);
    return 0;

}






