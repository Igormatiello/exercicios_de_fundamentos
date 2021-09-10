
/*4) Ler um número positivo e maior que zero (validar a entrada). Esse número indica a quantidade de valores
divisíveis por 5 que devem ser mostrados. Apresentar n valores por linha. n é informado pelo usuário e deve
ser maior que zero. Validar a entrada.
*/




#include <ctype.h>
#include <stdio.h>
int main(void)

{
    char repetir;
    do{

    int linha,quant;
     do
    {
        printf("Quantidade de valores divisiveis por 5: ");
        scanf("%d",&quant);

    }
    while (quant<1);
    do
    {
        printf("Digite o valor do limite superior de um intervalo: ");
        scanf("%d",&linha);
    }while(linha<1);

    int contdiv5=0,i;
    for (i=1; contdiv5<quant;i++)
    {
        if (i%5==0)
        {
            contdiv5=contdiv5+1;
            printf("%d\t",i);
        }
        if (contdiv5%linha==0)
        {
            printf("\n");
        }

    }
 printf("\n\nDeseja repetir o processo:(s ou n) ");
   setbuf(stdin,NULL);
   scanf("%c",&repetir);
    repetir=toupper(repetir);

 }while (repetir=='S');


        return 0;

}




