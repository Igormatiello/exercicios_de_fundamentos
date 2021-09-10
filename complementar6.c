/*)6. Construa uma função chamada encaixa que, dados dois inteiros positivos a e b, verifica se b corresponde aos últimos
dígitos de a
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "vetores.h"



int main(void)
{
    char repetir;
    do
    {
        int n1,n2,menor,maior;


        do{
            printf("Informe um valor: ");
            scanf("%d",&n1);
        }while(n1<=0);
         do{
            printf("Informe outro valor: ");
            scanf("%d",&n2);
        }while(n2<=0);

        if (n1<=n2)
        {
            menor=n1;
            maior=n2;
        }
        else
        {
            menor=n2;
            maior=n1;
        }






        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}



