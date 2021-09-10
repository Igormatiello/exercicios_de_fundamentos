
/*7) Faça o programa que apresente a seguinte saída como no exemplo, perguntando ao usuário o número
máximo (deve ser positivo).
*/




#include <ctype.h>
#include <stdio.h>
int main(void)

{
    char repetir;
     int num;
    do
    {
        do {

        printf("Informe um numero: ");
        scanf("%d",&num);
          }while(num<0);


            int i,j;
        for (i=1; i<=num;i++)
        {


            for (j=1;j<=i;j++)
            {
                printf("%-2d\t",j);


            }

            printf("\n");


        }





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }while (repetir=='S');


    return 0;

}




