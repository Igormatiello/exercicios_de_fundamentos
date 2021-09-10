/*4) Elaborar uma função que verifica se um número é palíndromo. Um número é palíndromo quando ele não
muda se lido da esquerda para a direita ou da direita para a esquerda. Por exemplo, 2112 é palíndromo.
Elaborar uma função que verifica se um número, que contenha entre 2 e 9 dígitos, é palíndromo. Utilizar essa
função para:
a) Verificar se um número informado pelo usuário é palíndromo.
b) Apresentar os números palíndromos que pertencem a um intervalo informado pelo usuário.
Use menu de opções (com switch-case) e implemente a repetição de programa
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>

int funcao_palindromo(int num)
{
    int resultado=1,extracao,contagem=0,i,inverso=0,resto,teste;
    extracao=num;
    while(extracao>0)
    {
        extracao=extracao/10;
        contagem++;
    }
    teste=num;
    for (i=contagem; i>=1; i--)
    {
        if (teste>0)
        {
            resto=teste%10;
            teste=teste/10;
            inverso=(resto * (pow(10,i)))+inverso;
        }
    }

    if ((inverso/10)==num)
    {
        resultado=0;
    }


    return(resultado);


}



int main(void)
{
    int opcao,inf,sup,i;
    int num;
    char repetir;
    do
    {

        printf("1 - Verifica se um numero eh palindromo\n");
        printf("2 - Mostra os palindromos que pertencem a um intervalo\n");
        printf("Opcao: ");
        scanf("%d",&opcao);


        switch(opcao)
        {
        case 1:
        {
            printf("Informe um numero: ");
            scanf("%d",&num);


            if (funcao_palindromo(num)==1)
            {
                printf("%d nao eh palindromo\n",num);
            }
            if (funcao_palindromo(num)==0)
            {
                printf("%d eh palindromo\n",num);

            }

            break;
        }
        case 2:
        {
            printf("Informe o valor do limite inferior: ");
            scanf("%d",&inf);
            printf("Informe o valor do limite superior: ");
            scanf("%d",&sup);



            for(i=inf; i<=sup; i++)
            {
                if (funcao_palindromo(i)==0)
                {
                    printf("%d\t",i);

                }
            }

            break;
        }

        }






        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



