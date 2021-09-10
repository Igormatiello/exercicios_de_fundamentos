/*8) Apresente os números pares entre 100 e 200. Contar quantos são ímpares e não divisíveis por 3 nesse
intervalo. Faça a média dos valores pares e divisíveis por 5 do intervalo
*/
#include <stdio.h>


int main(void)
{
    int i,imp3=0,soma=0,par=0;
    float media;
    printf("Pares:\n");
    for (i=100; i<=200;)
    {

        printf("%d\t",i);
        if ((i%2!=0) && (i%3!=0))
        {
            imp3=imp3+1;
        }
        if ((i%2==0)&&(i%5==0))
        {
            par=par+1;
            soma=soma+i;
        }
        i=i+2;
    }


    printf("\nQuantidade de numeros impares e nao divisiveis por 3: %d\n",imp3);

    media=soma/par;
    printf("Media dos valores pares e divisiveis por 5: %d\n",media);
    return 0;
}






