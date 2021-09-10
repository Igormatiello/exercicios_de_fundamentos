#include <stdio.h>

//2) Faça um programa que apresente o menu a seguir e permita ao usuário escolher a opção desejada,
//receba os dados necessários para executar a operação e mostre o resultado.



int main(void)
{
    //Declara��o de vari�veis
    int opcao, a, b, c;

    // Entrada de dados
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("\n");
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("\n");
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("\n");

    printf("Digite a opcao desejada (1, 2 ou 3): ");
    scanf("%d", &opcao);
    printf("\n");

    //Estrutura de decisao e processamento de dados

    switch(opcao){

        case 1 :
            if (a>c){
                opcao=b;
                b = a;
                a = opcao;
            }
            if (a>b){
                opcao=b;
                b = a;
                a = opcao;
            }
            if (b>c){
                opcao=c;
                c = b;
                b = opcao;
            }
            printf("Ordem Crescente: %d, %d e %d ", a, b, c);
        break;


        case 2 :
            if (a<c){
                opcao=b;
                b = a;
                a = opcao;
            }
            if (a<b){
                opcao=b;
                b = a;
                a = opcao;
            }
            if (b<c){
                opcao=c;
                c = b;
                b = opcao;
            }
            printf("Ordem Decrescente: %d, %d e %d ", a, b, c);
        break;

        case 3 :
            if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
            printf("Os numeros %d, %d e %d sao multiplos de 2.", a, b, c);
            }

            if (a % 2 == 0 && b % 2 == 0 && c % 2 != 0){
            printf("Apenas os numeros %d e %d sao multiplos de 2.", a, b);
            }
            if (a % 2 == 0 && b % 2 != 0 && c % 2 == 0){
            printf("Apenas os numeros %d e %d sao multiplos de 2.", a, c);
            }
            if (a % 2 != 0 && b % 2 == 0 && c % 2 == 0){
            printf("Apenas os numeros %d e %d sao multiplos de 2.", b, c);
            }

            if (a % 2 == 0 && b % 2 != 0 && c % 2 != 0){
            printf("Apenas o numero %d eh multiplo de 2", a);
            }
            if (a % 2 != 0 && b % 2 == 0 && c % 2 != 0){
            printf("Apenas o numero %d eh multiplo de 2", b);
            }
            if (a % 2 != 0 && b % 2 != 0 && c % 2 == 0){
            printf("Apenas o numero %d eh multiplo de 2", c);
            }
        break;

        default:
            printf("Opcao Invalida");
    }

return 0;
}
