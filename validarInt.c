#include <stdio.h>

int main(void)
{
    int tipo, num;

    printf("Informe um numero inteiro: ");
    tipo = scanf("%d", &num);

    if(tipo == 0)
    {
        printf("Tipo de dado incorreto!\n");
        printf("Tipo: %d\n", tipo);
    }
    else
    {
        printf("Dado correto!\n");
        printf("Tipo: %d\n", tipo);
    }

    return 0;
}




#include <stdio.h>

int main(void)
{
    float temp;

    printf("Informe a temperatura do paciente: ");
    if(scanf("%f",&temp) == 1)
    {
        printf("%f eh numero\n", temp);

        if (temp <= 37)
        {
            printf("Saudavel\n");
        }
    }
    else
    {
        printf("%f nao eh numero\n", temp);
    }

    return 0;
}
