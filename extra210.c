/*1) Fazer funções para:
a) Mostrar os múltiplos de y entre 1 (se for o caso) e x, sendo x o valor até o qual os múltiplos de y devem ser
mostrados. A função recebe por parâmetro o número e valor que representa "múltiplo de". Por exemplo:
parâmetros 10 (como x) e 2 (como y) significa os múltiplos de 2 entre 1 e 10.
b) Somar os múltiplos de y entre 1 (se for o caso) e x, sendo x o valor até o qual os múltiplos devem ser
somados. Por exemplo: parâmetros 10 (como x) e 2 (como y) significa somar os múltiplos de 2 entre 1 e 10. O
resultado da soma deve ser retornado da função.
Fazer um programa que:
a) Leia dois valores sendo que o primeiro representa o limite final do intervalo (o limite inicial é 1) e o segundo
valor representa “múltiplo de”.
b) Leia três valores, sendo que o primeiro e o segundo representam, respectivamente, o limite inicial e final de
um intervalo e o terceiro valor representa “múltiplo de”. Utilize as duas funções, criadas anteriormente, para
apresentar a saída da forma como apresentado a seguir. Nesse exemplo os valores para os limites inferior e
superior são 10 e 13 e o “múltiplo de” é 2.
10 = 2 4 6 8 10 => Soma: 30
11 = 2 4 6 8 10 => Soma: 30
12 = 2 4 6 8 10 12 => Soma: 42
13 = 2 4 6 8 10 12 => Soma: 42 */

#include <stdio.h>
#include <ctype.h>

void funcao1(int x, int y)
{
    int i;

    for(i=1; i<=x; i++)
    {
        if(i%y == 0)
        {
            printf("%2d  ",i);
        }
    }
}

int funcao2(int x, int y)
{
    int i, soma=0;

    for(i=1; i<=x; i++)
    {
        if(i%y == 0)
        {
            soma = soma + i;
        }
    }
    return(soma);
}

int main(void)
{
    int num,multiplo,opcao,inf,sup,l, i;
    char repetir;
    do
    {

        printf("1 - Mostra e soma os multiplos de um numero\n");
        printf("2 - Mostra e soma os multiplos de um intervalo\n");
        printf("Opcao: ");
        scanf("%d",&opcao);


        if (opcao==1)
        {
            printf("Informe um numero: ");
            scanf("%d",&num);

            printf("Mostrar todos os multiplos de: ");
            scanf("%d",&multiplo);

            printf("\n%2d = ", num);
            funcao1(num, multiplo);
            printf(" => Soma: %d\n", funcao2(num, multiplo));

        }


        if (opcao==2)
        {
            printf("Informe o valor do limite inferior: ");
            scanf("%d",&inf);
            printf("Informe o valor do limite superior: ");
            scanf("%d",&sup);
            printf("Para cada numero do intervalo, mostrar todos os multiplos de: ");
            scanf("%d",&multiplo);

            for(i=inf; i<=sup; i++)
            {
                printf("%d = ", i);
                funcao1(i, multiplo);
                printf(" => Soma: %d\n", funcao2(i, multiplo));
            }

        }


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
