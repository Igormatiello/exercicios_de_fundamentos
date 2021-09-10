/*DO - WHILE e FOR
5) Ler um número maior que 2 e imprimir todos os pares entre 2 e o número lido. Imprimir a soma dos pares,
o produto dos ímpares que são divisíveis por 9 e a média de todos os números do intervalo.*/
#include <stdio.h>
int main(void)
{
    int i,num,somatotal=0,somapares=0,produto,somanum=0;
    float media;
    printf("Informe um valor maior que 2: ");
    scanf("%d",&num);
    if (num>=9)
    {
        produto=1;
    }
    else
    {
        produto=0;
    }
    if (num>2)
    {
        for (i=num; i>=2; i--)
        {
            somanum=somanum+1;
            if ((i%2)==0)
            {

                printf("%d eh par\n",i);

                somapares=somapares+i;
                somatotal=somatotal+ i;
            }
            else
            {

                somatotal=somatotal+ i;


            }
            if (((i%2)!=0) && ((i%9)==0))
            {
                produto=produto*i;
            }


        }

        media= (float)somatotal/somanum;
        printf("Soma dos pares: %d\n",somapares);
        printf("Produto dos impares divisiveis por 9: %d\n",produto);
        printf("Media geral: %.2f\n",media);



    }
    else
    {

        printf("Numero invalido\n");
    }

    return 0;
}
