
/*5) Faça o programa que apresente a seguinte saída como no exemplo, solicitando ao usuário o número
máximo (deve ser positivo).
*/




#include <ctype.h>
#include <stdio.h>
int main(void)

{
    char repetir;
    do
    {

        int num;
        do
        {
            printf("Informe um numero: ");
            scanf("%d",&num);


        }
        while (num<0);

        int i,quebrar=0,vali=0,j;
        for (i=1; i<=num; i++)
        {
            quebrar=0;
            vali=0;
            for (j=1; vali<1;)
            {
                printf("%d\t",i);
                quebrar=quebrar+1;
                if (quebrar==num)
                {
                    vali=1;
                }
            }

            printf("\n");


        }





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;

}




