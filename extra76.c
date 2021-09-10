/*FOR
6) Ler dois números que representam os limites de um intervalo e ler o incremento. Mostrar os números desse
intervalo de acordo com o incremento indicado e em ordem crescente. O usuário pode informar os valores
que representam os limites do intervalo em ordem crescente ou decrescente. Fazer a média dos ímpares e
divisíveis por 35 do intervalo.
*/
#include <stdio.h>
int main(void)
{
    int lim1,lim2,incre,maior,menor,i,soma=0,impar=0;
    float media;
    printf("Informe um limite: ");
    scanf("%d",&lim1);
    printf("Informe outro limite: ");
    scanf("%d",&lim2);
    printf("Informe o incremento: ");
    scanf("%d",&incre);
    if (lim1>lim2)
    {
        maior=lim1;
        menor=lim2;
    }
    else
    {
        maior=lim2;
        menor=lim1;
    }
    for (i=menor;i<=maior;)
    {

        printf("%d",i);
        if (((i%2)!=0) && ((i%35)==0))
       {
           soma=soma+i;
           impar=impar+1;
           printf("\tImpar e divisivel por 35\n");

       }
       else
       {
           printf("\n");
       }
         i=incre+i;

    }
    media= (float)soma/impar;
    if ((soma==0)|| (impar ==0))
    {
        printf("Nao teve numeros impares que sao divisiveis por 35\n");

    }
    else{
    printf("A media do numeros impares que sao divisiveis por 35 eh: %.2f\n",media);
    }
    return 0;
}
