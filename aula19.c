#include <stdio.h>

int main(void)
{
    int i, cont=0, soma=0, produto=1;

    printf("Valor do cont: %d\n", cont);

    for(i=1; i<=14; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
            cont++;
            soma = soma + i;
            produto = produto * i;
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", cont);
    printf("Soma dos numeros pares: %d\n", soma);
    printf("Produto dos numeros pares: %d\n", produto);

    return 0;
}
