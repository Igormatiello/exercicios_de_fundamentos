
/*8) Um n�mero abundante � aquele cuja soma dos seus divisores (exclu�do o pr�prio n�mero) � maior do que ele
mesmo. Por exemplo, o n�mero 12 � abundante, pois se somarmos os seus divisores (1, 2, 3, 4 e 6) obteremos o valor
16 e este � maior do que o pr�prio n�mero. J� o n�mero 10 n�o � abundante, pois a somat�ria dos seus divisores (1, 2
e 5) � menor do que 10. Tamb�m o n�mero 6 n�o � abundante, pois a soma de seus divisores (1, 2 e 3) � igual a 6.
Escreva um programa que permita a leitura de um valor a partir do teclado e imprima uma mensagem informando se o
n�mero digitado � ou n�o abundante.

*/
#include <stdio.h>
int main(void)
{
    int num,i,soma=0;
    printf("Digite um numero: ");
    scanf("%d",&num);

    for (i=1;i < num; i++)
    {
        if (num%i==0)
        {
            printf("\t%d\n",i);
            soma=soma+i;
        }


    }
        printf("\t------\n\t%d\n\n",soma);
       if (soma>num)
       {
           printf("%d eh abundante porque a soma de seus divisores eh maior que %d.\n",num,num);
       }
       else
       {
           printf("%d nao eh abundante porque a soma de seus divisores eh menor que %d\n",num,num);
       }
    return 0;

}






