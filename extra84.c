/*4) Apresentar os n�meros divis�veis por 4 ou m�ltiplos de 10 entre 500 e 0 e a m�dia desses m�ltiplos.
*/

#include <stdio.h>


int main(void)
{
    int i,soma,contagem;
    float media;
    for(i=500;i>=0;i--)
    {

        if (i%4==0 && i%10==0)
        {
            printf("%d eh divisivel por 4 e multiplo de 10\n",i);
            contagem=contagem+1;
        soma=soma+i;
        }
        else
        {


        if (i%4==0)
        {
            printf("%d eh divisivel por 4\n",i);
        }
        if (i%10==0)
        {
            printf("%d eh multiplo de 10\n",i);
        contagem=contagem+1;
        soma=soma+i;

        }
        }

    }
    media=(float)soma/contagem;
        printf("Media dos multiplo de de 10: %.1f\n",media);


    return 0;
}






