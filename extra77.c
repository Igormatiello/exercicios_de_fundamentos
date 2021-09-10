/*WHILE
6) 7) Ler uma série de números indicados pelo usuário até ser informado o valor zero. Encontrar e mostrar o
maior e o menor dos valores informados pelo usuário. O valor zero indica o final da leitura e não deve ser
considerado
*/
#include <stdio.h>
int main(void)
{
    int i=1,teste,maior=-32767,menor=32766;
    while( i!=0)
    {

        printf("Informe um numero: ");
        scanf("%d",&i);
        teste=i;


        if (i>maior)
        {
            maior=i;
        }
        if (i<menor)
        {
            menor=i;
        }

    }
    }
}
        printf("Maior: %d\n",maior);
        printf("Menor: %d\n",menor);

    return 0;
}
