

#include <stdio.h>
#include <ctype.h>

int funcao24()
{


}
int main(void)
{


    char repetir;

    do
    {


       int vetor[10],i, contImpar=0,contPar=0,j=0,k=0;    //estrutura homogenea // indice começa em zero
for (i=0; i<10; i++)
{

    printf("Informe o elemento %d do vetor: ",i);
    scanf("%d",&vetor[i]);

}
    printf("===VETOR====\n");
    for (i=0; i<10; i++)
    {
        printf("%d\t",vetor[i]);
        if (vetor[i]%2==0)
        {
            contPar++;


        }
            else
            {


                contImpar++;
            }
    }
int par[contPar], impar[contImpar];




for (i=0; i<10; i++)
    {
        if (vetor[i]%2==0)
        {

        par[j]=vetor[i];
        j++;
        }
            else
            {
            impar[k]=vetor[i];
            k++;

            }
    }
    printf("\n");

    printf("Vetor de Pares: \n");
    for (i=0; i<j;i++)
    {
        printf("%d\t",par[i]);

    }
printf("\nVetor dos Impares: \n");
    for (i=0; i<k;i++)
    {
        printf("%d\t",impar[k]);

    }








        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}




