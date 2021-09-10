/*6) Para saber se um n�mero � feliz, voc� deve obter o quadrado de cada d�gito deste n�mero, em seguida
voc� faz a soma desses resultados. A seguir o mesmo procedimento deve ser feito com o valor resultante
desta soma. Se ao repetir o procedimento diversas vezes obtivermos o valor 1, o n�mero inicial � considerado
feliz.
Tomamos o 7, que � um n�mero feliz:
7� = 49
4� + 9� = 97
9� + 7� = 130
1� + 3� + 0� = 10
1� + 0� = 1
Podemos observar nesse exemplo que os n�meros 49, 97, 130 e 10 tamb�m s�o felizes. Existem infinitos
n�meros felizes.
E um n�mero triste? Como sabemos que um n�mero n�o � feliz?
Desenvolva uma fun��o que receba um n�mero inteiro positivo e retorne 1 se o n�mero for feliz e 0 se o
n�mero n�o for feliz. Elabore um programa que use essa fun��o para determinar se um n�mero � ou n�o
feliz
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
int funcao_feliz(int num)

{
    int aux,i,somatorio=0;

    aux=num;
    for (i=1; i<=100; i++)
    {

        somatorio=0;
        while (aux>=1)
        {
            somatorio=pow((aux%10), 2 )+somatorio;

            aux=aux/10;

        }
        aux=somatorio;

        if (somatorio==1)
        {
            return(1);
            break;
        }

    }
    if (somatorio!=1)
    {
        return(0);
    }






}



int main(void)
{
    int num;
    char repetir;
    do
    {
        printf("Informe um numero: ");
        scanf("%d",&num);

        funcao_feliz(num);

        if (funcao_feliz(num)==1)
        {
            printf("%d eh um numero feliz\n",num);
        }
        if (funcao_feliz(num)==0)
        {
            printf("%d nao eh um numero feliz\n",num);

        }


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



