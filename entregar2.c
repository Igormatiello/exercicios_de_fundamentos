/*2) Faça um programa que apresente o menu a seguir e permita ao usuário escolher a opção desejada,
receba os dados necessários para executar a operação e mostre o resultado.
Menu de opções:
1 – Mostra os números em ordem crescente
2 – Mostra os números em ordem decrescente
3 - Mostra os números que são múltiplos de 2
Digite a opção desejada:
Observações: Ler um conjunto de 4 valores inteiros: opcao, a, b e c. A seguir:
a) Se opcao = 1 escrever os três valores a, b e c em ordem crescente.
b) Se opcao = 2 escrever os três valores a, b e c em ordem decrescente.
c) Se opcao = 3 escrever se os valores a, b e c são múltiplos de 2.
Exemplo:
Entrada Saída
a=4, b=2 e c=8 Os números 2, 4 e 8 são múltiplos de 2
a=3, b=2 e c=8 Apenas os números 2 e 8 são múltiplos de 2
a=3, b=9 e c=8 Apenas o número 8 é múltiplo de 2
Se for informado um valor diferente para opcao, deverá ser emitida a mensagem "Opção Inválida" e o
programa deverá ser finalizado.
Atenção: Neste programa você deverá usar somente as variáveis opcao, a, b e c, todas do tipo int*/
#include <stdio.h>


int main(void)
{
    printf("Menu de opcoes:\n1 - Mostra os numeros em ordem crescente\n2 - Mostra os numeros em ordem decrescente\n3 - Mostra os numeros que sao multiplos de 2\n");


    int opcao,v1,v2,v3;
    printf("Informe a opcao desejada: ");
    scanf("%d",&opcao);

    if ((opcao!=1) && (opcao!=2) && (opcao!=3))
    {
          printf("Opcao invalida\n");
    }
    else
    {
    printf("Informe o primeiro valor: ");
    scanf("%d",&v1);
    printf("Informe o segundo valor: ");
    scanf("%d",&v2);
    printf("Informe o terceiro valor: ");
    scanf("%d",&v3);

    switch(opcao)
    {

    case 1:



        if ((v1>v3) && (v1>v2) && (v3>v2))
        {
            printf("Em ordem crescente:%d %d %d\n",v2,v3,v1);
        }
        if ((v1>v3) && (v1>v2) && (v3<v2))
        {
            printf("Em ordem crescente:%d %d %d\n",v3,v2,v1);
        }
        if ((v2>v3) && (v2>v1) && (v3>v1))
        {
            printf("Em ordem crescente:%d %d %d\n",v1,v3,v2);
        }
        if ((v2>v3) && (v2>v1) && (v1>v3))
        {
            printf("Em ordem crescente:%d %d %d\n",v3,v1,v2);
        }
        if ((v3>v2) && (v3>v1) && (v2>v1))
        {
            printf("Em ordem crescente:%d %d %d\n",v1,v2,v3);
        }
        if ((v3>v2) && (v3>v1) && (v1>v2))
        {
            printf("Em ordem crescente:%d %d %d\n",v2,v1,v3);
        }
        break;

    case 2:

        if ((v1>v3) && (v1>v2) && (v3>v2))
        {
            printf("Em ordem decrescente:%d %d %d\n",v1,v3,v2);
        }
        if ((v1>v3) && (v1>v2) && (v3<v2))
        {
            printf("Em ordem decrescente:%d %d %d\n",v1,v2,v3);
        }
        if ((v2>v3) && (v2>v1) && (v3>v1))
        {
            printf("Em ordem decrescente:%d %d %d\n",v2,v3,v1);
        }
        if ((v2>v3) && (v2>v1) && (v1>v3))
        {
            printf("Em ordem decrescente:%d %d %d\n",v2,v1,v3);
        }
        if ((v3>v2) && (v3>v1) && (v2>v1))
        {
            printf("Em ordem decrescente:%d %d %d\n",v3,v2,v1);
        }
        if ((v3>v2) && (v3>v1) && (v1>v2))
        {
            printf("Em ordem decrescente:%d %d %d\n",v3,v1,v2);
        }
        break;
    case 3:
        if (((v1%2) == 0) && ((v2%2) == 0) && ((v3%2) ==0))
        {
            printf("Os numeros %d, %d e %d sao multiplos de 2\n",v1,v2,v3);
        }
        if (((v1%2) == 0) && ((v2%2) == 0) && ((v3%2) !=0))
        {
            printf("Os numeros %d e %d sao multiplos de 2\n",v1,v2);
        }
        if (((v1%2) == 0) && ((v2%2) != 0) && ((v3%2) ==0))
        {
            printf("Os numeros %d e %d sao multiplos de 2\n",v1,v3);
        }
        if (((v1%2) == 0) && ((v2%2) != 0) && ((v3%2) !=0))
        {
            printf("Apenas o numero %d eh multiplo de 2\n",v1);
        }
        if (((v1%2) != 0) && ((v2%2) == 0) && ((v3%2) ==0))
        {
            printf("Os numeros %d e %d sao multiplos de 2\n",v2,v3);
        }
        if (((v1%2) != 0) && ((v2%2) == 0) && ((v3%2) !=0))
        {
            printf("Apenas o numero %d eh multiplo de 2\n",v2);

        }
        if (((v1%2) != 0) && ((v2%2) != 0) && ((v3%2) ==0))
        {
            printf("Apenas o numero %d eh multiplo de 2\n",v3);

        }
        if (((v1%2) != 0) && ((v2%2) != 0) && ((v3%2) !=0))
        {
            printf("Nenhum numero eh multiplo de 2\n");

        }
        break;
    }
    }

    return 0;

}
