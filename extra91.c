/*11) Mostrar os números entre 10 e 0 (ordem decrescente) com intervalo de 0.5*/



#include <stdio.h>


int main(void)
{
    float i;
    printf("Numeros de 10 entre 0, com intervalo de 0.5\n\n");
    for (i=10; i>=0;)
    {

    printf("%.1f\n",i);
    i=i-0.5;
    }
    return 0;
}






