/*3) Em um intervalo de 0 a 100, apresentar:
a) Os n�meros divis�veis por 3.
b) O quadrado dos n�meros divis�veis por 3.
c) Os n�meros divis�veis por 5 ou por 7.
d) A raiz quadrada dos n�meros divis�veis por 5 ou por 7.
Apresentar cada item em listagem separada. Colocar um cabe�alho antes de cada listagem de maneira a
identificar o conte�do da mesma. Em cada listagem separar os n�meros por uma tabula��o. A raiz quadrada
pode ser obtida pela fun��o sqrt() que est� na biblioteca math.h
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    printf("\n\nDivisiveis por 3:\n\n");
    float raiz;
    for (i=0; i<=100; i++)
    {

        if ((i%3)==0)
        {
            printf("%d\t",i);
        }
    }

    printf("\n\nQuadrado dos numeros divisiveis por 3:\n\n");
    for (i=0; i<=100; i++)
    {

        if ((i%3)==0)
        {
            printf("%-2d^2 = %-2d\t",i,(i*i));
        }
    }
    printf("\n\nOs numeros divisiveis por 5 ou 7\n\n");
    for (i=0; i<=100; i++)
    {

        if ((i%5)==0 || i%7==0)
        {
            printf("%d\t",i);
        }
    }

    printf("\n\nA raiz quadrada dos numeros divisiveis por 5 ou por 7\n\n");
    for (i=0; i<=100; i++)
    {

        if ((i%5)==0 || i%7==0)
        {
            raiz=sqrt(i);
             printf("%-2d^1/2 = %.1f\t",i,raiz);
        }
    }


    return 0;
}






