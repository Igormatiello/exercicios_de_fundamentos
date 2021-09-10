
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)

   {
       int numa,i,contdiv=0;
do
            {
            printf("Informe um numero (0 para parar): ");
            scanf("%d", &numa);

            for (i=1; i<=numa; i++)
            {
                if (numa%i == 0) // verifica se eh divisivel
                {
                    printf("%d\t",i);
                    contdiv++; //conta os divisiveis
                }

            }
            printf("\n");
            printf("qtd de divisiveis: %d\n",contdiv);

            }while(numa != 0);



    return 0;

}
