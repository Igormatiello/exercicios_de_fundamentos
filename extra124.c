
/*
       4) Ler n�meros informados pelo usu�rio. Parar a leitura quando informado o n�mero zero, que n�o deve ser considerado. Fazer a
m�dia dos valores negativos informados. Dos valores positivos contar quantos s�o �mpares.
#include <stdio.h>

*/
#include <stdio.h>

int main(void)
{
    int num=1,soma=0,contagem=0,impar=0;
    float media;

    while (num!=0)
    {

        printf("Informe um valor: ");
        scanf("%d",&num);
        if (num < 0)
        {
            soma=soma+num;
            contagem=contagem+1;
        }
        else
        {
            if (num%2!=0)
            {
                impar=impar+1;
            }
        }



    }
    media= (float)soma /contagem;
    printf("Media dos valores negativos: %.1f\n",media);
    printf("Quantidade de valores positivos impares: %d\n",impar);



    return 0;
}






