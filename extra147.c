
/*7) Implemente um algoritmo que lê números informados pelo usuário. O algoritmo deve parar quando informado um
número negativo. Para cada número lido, exceto o número negativo que representa a saída, o algoritmo deverá imprimir
a soma dos dígitos.
*/
#include <stdio.h>
int main(void)
{
    int num=1, somaDigitos;

    while(num >= 0)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num >= 0)
        {
            somaDigitos=0;

            while(num != 0)
            {
                if (num>=0){
                somaDigitos = somaDigitos + (num%10);
                num = num / 10;
            }
            }
        printf("Soma dos digitos: %d\n", somaDigitos);
        }

    }
    return 0;


    }




