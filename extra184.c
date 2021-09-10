
/*4) Apresentar n valores que são divisíveis por x e y. n, x e y são informados pelo usuário e devem ser maiores
que zero. Validar.



*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{

     char repetir;
    do
    {
        int quant,cond1,cond2,validar=0,i;
        do{
        printf("Quantos valores deseja apresentar: ");
        scanf("%d",&quant);
        }while(quant<=0);
        do{
        printf("Informe o valor do primeiro divisor (condicao x): ");
        scanf("%d",&cond1);
        }while(cond1<=0);
        do{
        printf("Informe o valor do segundo divisor (condicao y): ");
        scanf("%d",&cond2);
        }while(cond2<=0);


        for (i=1; validar<quant; i++)
        {
            if (i%cond1==0 && i%cond2==0)
            {
                printf("%d\t",i);
                validar=validar+1;
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



