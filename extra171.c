
/*1) Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer com que a saída do
programa seja mostrada como no exemplo a seguir:

*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int i,j,produto;

        for (i=1; i<=12; i++)
        {
            printf("%d ! = ",i);
            produto=1;

            for (j=i; j>=1; j--)
            {
                produto=produto*j;
                if (j==1)
                {
                    printf("%d ",j);
                }
                else
                {

                    printf("%d * ",j);
                }
            }
            printf("= %d\n",produto);
        }
        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



