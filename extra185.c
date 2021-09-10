
/*5) Apresentar n valores divisíveis por 5 e não divisíveis por 2 com x valores por linha. Validar n e x para que
sejam positivos.




*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
    int quant,linha,validar=0,i;

    do{
            printf("Quantos valores divisiveis por 5 e nao divisivel por 2 deseja mostrar? ");
    scanf("%d",&quant);

    }while(quant<=0);


    do{
        printf("Qauntos elementos deseja mostrar por linha? ");
        scanf("%d",&linha);

    }while(linha<=0);

    for (i=1;validar<quant;i++)
    {

        if (i%5==0 && i%2!=0)
        {
        validar=validar+1;
        printf("%d\t",i);
        }
        if (validar%linha==0)
        {
            printf("\n");
        }

    }












printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



