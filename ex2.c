#include <stdio.h>

int main(void)
{
    int num1, num2, soma;

    //entrada de dados
    printf("Informe um numero: ");
    scanf("%d", &num1);
    printf("Informe outro numero: ");
    scanf("%d", &num2);
    //processamento de dados
    soma=num1 +num2;
    //saida de dados

    printf("Resultado: %d", soma);



    return 0;

}
