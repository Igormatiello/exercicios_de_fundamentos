
/*3) Ler dois números positivos que representam os limites inferior e superior de um intervalo. Validar a entrada
para que sejam informados números positivos. É mais adequado validá-los separadamente. Validar também
para que o valor do limite superior seja maior e diferente que o valor do limite inferior. Imprimir os números
múltiplos de 3 desse intervalo e fornecer a média deles
*/




#include <ctype.h>
#include <stdio.h>
int main(void)

{
      char repetir;
      do {
    int lim1,lim2,i;

    do
    {
        printf("Digite o valor do limite inferior de um intervalo: ");
        scanf("%d",&lim1);

    }
    while (lim1<0);
    do
    {
        printf("Digite o valor do limite superior de um intervalo: ");
        scanf("%d",&lim2);

    }
    while (lim2<0);


    while (lim1>=lim2)
    {
        printf("Intervalos incorretos\n");
        printf("Digite o valor do limite inferior de um intervalo: ");
        scanf("%d",&lim1);
        printf("Digite o valor do limite superior de um intervalo: ");
        scanf("%d",&lim2);

    }


   int soma=0,contagem=0;
    float media;

    for (i=lim1;i<=lim2;i++)
    {


        if (i%3==0)
        {
            soma=soma+i;
            contagem=contagem+1;
            printf("%d\n",i);
        }
    }
    media=(float)soma/contagem;
    printf("Media dos multiplos de 3: %.1f\n",media);


     printf("\n\nDeseja repetir o processo:(s ou n) ");
   setbuf(stdin,NULL);
   scanf("%c",&repetir);
    repetir=toupper(repetir);

 }while (repetir=='S');

        return 0;

}




