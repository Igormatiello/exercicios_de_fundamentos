/*7) Use a função criada no exercício anterior para mostrar todos os números felizes existentes no intervalo de
1 até 500.
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
int funcao_feliz(int num)

{
    int aux,i,somatorio=0;

    aux=num;
    for (i=1; i<=100; i++)
    {

        somatorio=0;
        while (aux>=1)
        {
            somatorio=pow((aux%10), 2 )+somatorio;

            aux=aux/10;

        }
        aux=somatorio;

        if (somatorio==1)
        {
            return(1);
            break;
        }

    }
    if (somatorio!=1)
    {
        return(0);
    }






}



int main(void)
{
    int inf,sup,k;
    char repetir;
    do
    {
        printf("Informe o valor do limite inferior: ");
        scanf("%d",&inf);
        printf("Informe o valor do limite superior: ");
        scanf("%d",&sup);
        for (k=inf; k<=sup; k++)

            if (funcao_feliz(k)==1)
            {
                printf("%d eh um numero feliz\n",k);
            }


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



