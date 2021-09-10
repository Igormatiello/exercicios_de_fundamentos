/*1) Apresente (separados por tabulação) os números entre 1 e 1000 que são divisíveis por 11 e ímpares.
*/



#include <stdio.h>


int main(void)
{
    int i;
    printf("Numeros entre 1 e 1000 que sao divisiveis por 11 e impares\n\n\n");
    for (i=0 ; i<=1000 ; i++)
    {
        if ( i%11==0 && i%2!=0)
        {
            printf("%d\t",i);
        }


    }

    return 0;
}






