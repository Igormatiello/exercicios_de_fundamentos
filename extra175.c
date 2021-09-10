
/*5) Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar essa quantidade para
os números compreendidos entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o
usuário deverá fornecer um número positivo entre 2 e 100. Ao final, mostrar a maior quantidade de divisores.
A seguir um exemplo da execução, utilizá-lo como modelo para o programa implementado:


*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
    int num,i,j,contador,maior;
    do{
    printf("Informe um numero entre 2 e 100: ");
    scanf("%d",&num);
    if (num<2 || num>100)
    {
        printf("Numero invalido\n");
    }
    }while(num<2 || num>100);



    for (i=num; i<=(num+10);i++)
    {
        contador=0;
        printf("%d ==> ",i);
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                printf("%d, ",j);
                contador=contador+1;
            }
        }
        printf(" %d divisores\n",contador);
        if (i==num)
        {
            maior=contador;
        }

        if (contador>maior)
        {
            maior=contador;
        }

    }


    printf("\n\nA maior quantidade de divisores eh: %d\n",maior);

    return 0;

}



