//DO WHILE
#include <stdio.h>
int main(void)
{
        int i=0,num;
        printf("Informe um numero: ");
            scanf("%d",&num);
       do
        {

            printf("%2d * %2d: %2d \n",num,i,(num*i));

            i++;


        }while (i<=10);





    return 0;
}
