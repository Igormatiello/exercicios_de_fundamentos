

#include <stdio.h>
int main(void)



   {

    int limite2,j,i,l,limite1,inferior,superior,proximo,ultimo=1,atual=1,somaQuadrado=0,contPrimo=0,validar,quadrado;
    float media;

    do{
            printf("Informe um valor para o limite inferior do intervalo: ");
    scanf("%d",&limite1);

    }while(limite1<1);

    do {
    printf("Informe um valor para o limite superior do intervalo: ");
    scanf("%d",&limite2);

    }while (limite2<1);

    if (limite1>limite2)
    {
        inferior=limite2;
        superior=limite1;
    }
    else
    {
        inferior=limite1;
        superior=limite2;

    }

    for (j=inferior; j<=superior;j++)
    {

        ultimo=1;

        atual=1;
        validar=0;
        printf("%d - ",j);

        quadrado=j*j;
        printf("%d ==> ",quadrado);
        somaQuadrado=somaQuadrado+quadrado;
        printf(" 1 1 ");
        for (i=2; atual<quadrado; i++)
    {

        proximo=ultimo+atual;
        printf("%d\t",proximo);
        ultimo=atual;
        atual=proximo;

    }

    for (l=(j-1); l>=2; l--)
    {
        if (j%l==0)
        {
            validar=validar+1;
        }

    }
    if (validar==0)
    {
        contPrimo=contPrimo+1;
    }

printf("\n");
    }
    if ((superior-inferior)!=0)
    {
     media=(float)somaQuadrado/((superior-inferior)+1);

    printf("Media dos numeros quadrados: %.2f\n",media);
    }
printf("Quantidade de numeros no intervalo que sao primos: %d\n",contPrimo-1);
    return 0;

}


