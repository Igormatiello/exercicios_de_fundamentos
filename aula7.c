/**/

#include <stdio.h>


int main(void)
{


    int x;

    printf("Informe um numero: ");
    scanf("%d",&x);

    if (x >= 0 && x%2 == 0 || x==8)
    {

        printf("verdade\n" );
    }
    else
    {
         printf("mentira\n" );
    }



    return 0;

}
