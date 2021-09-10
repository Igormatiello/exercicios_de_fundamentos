/*5) Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes. Cada nó interno da árvore
corresponde a um teste do valor de uma das propriedades e os ramos deste nó são identificados com os possíveis
valores do teste. Cada nó folha da árvore especifica o valor de retorno se a folha for atingida. A figura a seguir
apresenta um exemplo fictício de árvore de decisão, tomando atributos de clientes de uma instituição financeira.
Elabore um programa que implemente essa árvore de decisão. As entradas podem ser do tipo char, portanto, considere
a primeira letra de cada palavra como entrada. Caso o usuário informe um caractere diferente dos aceitáveis, apresente
a mensagem "Caractere inválido*/

#include <stdio.h>
    int main(void)
    {
    char saldo,aplicacao;

    printf("Saldo em conta corrente:(p ou P para positivo e N ou n para negativo):  ");
    scanf("%c",&saldo);

       if ((saldo=='p') || (saldo=='P'))
           {
            printf("Cliente sem risco\n");

           }

         else if ((saldo=='n') || (saldo=='N'))
           {
            printf("Aplicacoes:(S ou s para sim e N ou n para nao):");
            setbuf(stdin,NULL);
            scanf("%c",&aplicacao);
             if ((aplicacao=='S') || (aplicacao=='s'))
            {
            printf("Cliente sem risco\n");

            }
       else if   ((aplicacao=='N') || (aplicacao=='n'))
              {

                printf("Cliente com risco\n");
            }
           else
                {
             printf("Caractere invalido\n");
                }

           }
           else
           {
               printf("Caractere invalido\n");
           }




    return 0;
    }
