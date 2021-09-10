/*)7 Elaborar um programa que lê dois valores, verifica se o primeiro é múltiplo do segundo e escreve a
mensagem "São múltiplos" ou "Não são múltiplos" dependendo da condição. Verificar para que não seja
realizada uma divisão por zero. Nesse caso, informar que não é possível realizar uma divisão por zero
*/


#include <stdio.h>


int main(void)
{


    int num1,num2;

    printf("Informe o primeiro valor: ");
    scanf("%d",&num1);
      printf("Informe o segundo numero: ");
    scanf("%d",&num2);
    if (num2 ==0 )
      {

      printf("Nao eh possivel realizar uma divisao por zero\n");

      }
            else
            {
                if ((num1 % num2)==0)
             {
                 printf("Sao multiplos\n");
             }
            else
            {
                printf("Nao sao multiplos\n");
            }
            }
    return 0;

}
