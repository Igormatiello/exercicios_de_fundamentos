/*

13) Apresente os m�ltiplos de 10 entre 1000 e 0 (ordem decrescente). Mostre os valores separados por uma
tabula��o e em colunas com 8 n�meros por linha.

*/
#include <stdio.h>



int main(void)


{
    int i,contagem=0;

    for (i=1000; i>=0; i--)
    {
        if (i%10==0)
        {
            printf("%d\t",i);
          contagem=contagem+1;
        }
        if (contagem%8==0)
        {
            printf("\n");
        }
    }



    return 0;
}






