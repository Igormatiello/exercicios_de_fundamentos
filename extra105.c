/*5) Mostre os valores �mpares e n�o divis�veis por 5 entre 200 e 1. Apresente os valores em ordem
decrescente. Fa�a a m�dia dos valores desse intervalo que s�o divis�veis por 3 e por 5.
*/
#include <stdio.h>


int main(void)
{
   int i,contagem,soma;
   float media;


   for (i=200; i>=1; i--)
   {

       if (((i%2)!=0) && (i%5!=0))
   {
       printf("%d\n",i);
   }
    if (((i%3)==0) && ((i%5)==0))
    {
        soma=soma+i;
        contagem=contagem+1;
    }

   }
   media=(float)soma/contagem;
   printf("Media dos divisiveis por 3 e 5: %.2f",media);





    return 0;
}






