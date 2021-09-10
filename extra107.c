/*7) Leia 10 números e desses contar quantos são pares, quantos são ímpares e quantos são divisíveis por 7.
Apresente essas quantidades.
*/
#include <stdio.h>


int main(void)
{
    int i,pares=0,impares=0,div7=0,num;
    for (i=1; i<=10; i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&num);
        if (num%2==0)
        {
            pares=pares+1;
        }
        else
        {
            impares=impares+1;
        }
        if (num%7==0)
        {
            div7=div7+1;
        }

    }
    printf("Quantidade de pares: %d\n",pares);
    printf("Quantidade de impares: %d\n",pares);
    printf("Quantidade de numeros divisiveis por 7: %d\n",div7);

    return 0;
}






