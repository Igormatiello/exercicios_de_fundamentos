
/*3) Qual o objetivo do programa representado no c�digo a seguir.
RESPOSTA: � SOLICITADO UM VALOR ENTRE 1 E 50, E � SOLICITADO ATE SAIR UM VALOR ADEQUADO.
DEPOIS, � APRESENTADO UMA LISTA DE VALORES ENTRE O VALOR INFORMADO AT� 50, PULANDO DE 2 EM 2.


*/
#include <stdio.h>
int main(void)
{
 int num, i;
 do
 {
 printf("Informe um numero entre 1 e 50: ");
 scanf("%d", &num);
 if(num < 1 || num > 50)
 {
 printf("Valor informado fora da faixa.\n");
 }
 }while(num < 1 || num > 50);
 for(i=num; i<=50; i=i+2)
 {
 printf("\n%d\t", i);
 }



 return 0;

 }






