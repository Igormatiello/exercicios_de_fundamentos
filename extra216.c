/*6) Para saber se um número é feliz, você deve obter o quadrado de cada dígito deste número, em seguida
você faz a soma desses resultados. A seguir o mesmo procedimento deve ser feito com o valor resultante
desta soma. Se ao repetir o procedimento diversas vezes obtivermos o valor 1, o número inicial é considerado
feliz.
Tomamos o 7, que é um número feliz:
7² = 49
4² + 9² = 97
9² + 7² = 130
1² + 3² + 0² = 10
1² + 0² = 1
Podemos observar nesse exemplo que os números 49, 97, 130 e 10 também são felizes. Existem infinitos
números felizes.
E um número triste? Como sabemos que um número não é feliz?
Desenvolva uma função que receba um número inteiro positivo e retorne 1 se o número for feliz e 0 se o
número não for feliz. Elabore um programa que use essa função para determinar se um número é ou não
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



