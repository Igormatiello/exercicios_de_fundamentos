/*DO - WHILE
9) Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser mostrada. O valor
informado para a quantidade deve ser maior que 0. Validar a entrada.
*/
#include <stdio.h>
int main(void)
{
    int impares,i=1;



    do
    {
        printf("Quantos numeros impares quer mostar: ");
        scanf("%d",&impares);


        if (impares<=0)
        {
            printf("O valor deve ser maior que 0. Informe novamente.\n");
        }
        else
        {
            for (i=1; i<=(impares*2);)
            {
                printf("%d\n",i);
                i=i+2;
            }
        }


    }
    while (impares<=0);


    return 0;
}
