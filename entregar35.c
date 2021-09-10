

/*5) O que faz o algoritmo a seguir:
declare vetA[30], vetB[30], i, j como inteiro
repetir i = 0, até i < 30, passo 1
leia vetA[i]
fim-repetir
repetir i = 0, até i < 30, passo 1
escreva vetA[i]
fim-repetir
j=0;
repetir i = 0, até i < 30, passo 1
se ( vetA[i] % 2 == 0 ) then
vetB[j] ← vetA[i]
j ← j + 1
fim-se
fim-repetir
repetir i = 0, até i < j, passo 1
escreva vetB[j]
fim-repetir
Implemente uma solução na linguagem C para esse algoritmo.

 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#include <stdlib.h>

int main(void)
{


    char repetir;
    do
    {
        int vetA[30],vetB[30], j, i;

        for (i=0; i<30 ; i++)
        {
            printf("Informe o valor na posicao %d: ",(i+1));
            scanf("%d",&vetA[i]);
        }


        printf("===VETOR A===\n");
        for (i=0; i<30 ; i++)
        {
            printf("%d\t",vetA[i]);

        }
        j=0;
        for (i=0; i<30; i++)
        {
            if (vetA[i]%2==0)
            {
                vetB[j]=vetA[i];
                j++;
            }
        }
        printf("\n\n===VETOR B===\n");

        for (i=0; i<j; i++)
        {
            printf("%d\t",vetB[i]);


        }
        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
