
/*7) Implemente um algoritmo que l� n�meros informados pelo usu�rio. O algoritmo deve parar quando informado um
n�mero negativo. Para cada n�mero lido, exceto o n�mero negativo que representa a sa�da, o algoritmo dever� imprimir
a soma dos d�gitos.
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




