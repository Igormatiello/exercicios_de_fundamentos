/*1) Apresentar a tabuada de um n�mero informado pelo usu�rio. A tabuada deve ser apresentada na forma a
seguir:*/

#include <stdio.h>
int main(void)
{
        int i,num;
        printf("Informe um numero: ");
            scanf("%d",&num);
        for (i=0; i<=10; i++)
        {

            printf("%-2d * %-2i: %-2d \n",num,i,(num*i));


        }


    return 0;
}





