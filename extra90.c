/*10) Elaborar um programa para mostrar, em ordem decrescente, os n�meros divis�veis por 3 entre 200 e 100.*/



#include <stdio.h>


int main(void)
{
    int i;
    printf("Numeros divisiveis por 3 entre 200 e 100\n\n");
    for (i=200; i>=100; i--)
    {
        if (i%3==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}






