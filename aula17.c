//DO WHILE
#include <stdio.h>
int main(void)
{
        int num;

       do
        {
        printf("Informe um numero: ");
        scanf("%d",&num);

        if (num<0)
        {
            printf("Valor invalido\n");
        }



        }while (num<0);





    return 0;
}
