//WHILE
#include <stdio.h>
int main(void)
{
        int i=1,num;


        while (i<=10)
            {
            printf("Informe um numero: ");
            scanf("%d",&num);
            if ((num%2)==0)
            {
                printf("%d eh par\n",num);

            }
            else
            {
                printf("%d eh impar\n",num);
            }
            i++;
            }



    return 0;
}
