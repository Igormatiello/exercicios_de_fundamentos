/*5) Uma �rvore de decis�o obt�m a decis�o pela execu��o de uma sequ�ncia de testes. Cada n� interno da �rvore
corresponde a um teste do valor de uma das propriedades e os ramos deste n� s�o identificados com os poss�veis
valores do teste. Cada n� folha da �rvore especifica o valor de retorno se a folha for atingida. A figura a seguir
apresenta um exemplo fict�cio de �rvore de decis�o, tomando atributos de clientes de uma institui��o financeira.
Elabore um programa que implemente essa �rvore de decis�o. As entradas podem ser do tipo char, portanto, considere
a primeira letra de cada palavra como entrada. Caso o usu�rio informe um caractere diferente dos aceit�veis, apresente
a mensagem "Caractere inv�lido*/

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
