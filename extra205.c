/*2) Criar função para:
a) Receber, por parâmetro, um número inteiro e positivo e retornar a quantidade de divisores que esse
número possui.
b) Mostrar os divisores de um número. Essa função recebe como parâmetro o número e mostra os divisores
de 1 até o número passado como parâmetro da função.
c) Receber, por parâmetro, um número positivo e retornar a soma dos divisores que esse número possui.
d) Receber, por parâmetro, dois números e retornar o Máximo Divisor Comum dos dois números.
Salvar todas as funções dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" em um
programa para gerar o seguinte menu:
1 - Quantidade de divisores de um número
2 - Divisores de um número
3 - Divisores, quantidade e soma de um intervalo
4 - Maximo Divisor Comum de dois números*/

#include <stdio.h>
#include <ctype.h>
#include "divisores.h"


int main(void)
{
    char repetir;
    int opcao,num,inf,sup,num1,num2;
    do{
            printf("1 - Quantidade de divisores de um numero\n");
            printf("2 - Divisores de um numero\n");
            printf("3 - Divisores, quantidade e soma de um intervalo\n");
            printf("4 - Maximo divisor comum de um numero\n");
            printf("Opcao: ");
            scanf("%d",&opcao);

   if (opcao==1){
    printf("Informe um numero para mostrar a quantidade de divisores: ");
    scanf("%d",&num);
    printf("%d divisores\n",op1(num));
   }

   if (opcao==2){
    printf("Informe um numero para mostrar seus divisores: ");
    scanf("%d",&num);
    op2(num);
   }
   if (opcao==3){
    printf("Informe o limite inferior: ");
    scanf("%d",&inf);
    printf("Informe o limite superior: ");
    scanf("%d",&sup);
    ip3(inf,sup);
   }
   if (opcao==4)
   {
    printf("Informe o primeiro numero: ");
    scanf("%d",&num1);
    printf("Informe o segundo numero: ");
    scanf("%d",&num2);
    printf("MDC: %d\n",ip4(num1,num2));

   }


printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');










}
