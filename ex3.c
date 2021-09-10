#include <stdio.h>

int main(void)
{
    float altura, peso, imc;

    //entrada de dados
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    //processamento de dados
    imc= peso /(altura * altura);
    //saida de dados

    printf("Seu IMC: %.2f", imc);



    return 0;

}
