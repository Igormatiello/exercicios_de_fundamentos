/*2) Fazer uma função para verificar se um número equivale a soma dos n primeiros ímpares iniciando em 1.
Por exemplo, 9, é um número que tem essa característica porque 1 + 3 + 5 = 9 (soma dos n primeiros
números ímpares iniciando em 1). Essa função recebe como parâmetro um valor inteiro e retorna 's' se o
número equivale a soma dos n primeiros ímpares e 'n' caso não.
Fazer um programa que use essa função para:
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo tem essa característica.
b) Mostrar todos os números que têm ou não têm essa característica e pertencem a um intervalo informado
pelo usuário */

#include <stdio.h>
#include <ctype.h>


char somaImpares(int num) //recebe um num e retorna 's' ou 'n'
{
    int i, soma=0;
    char resultado = 'n'; //inicializa resultado com 'n'

    for(i=1; i<=num; i=i+2)//for que incrementa de 2 em 2
    {
        printf("%d  ", i); //imprime
        soma = soma + i; //soma

        if(soma == num) //verifica se a soma é igual a num, se sim, então
        {
            resultado = 's'; //resultado recebe 's'
            break; //sai do for
        }
        if (soma>num)
        {
            break;
        }
    }

    return(resultado); //retorna resultado
}


int main(void)
{
    int num,opcao,i,inf,sup;
    char repetir;
    do
    {

        printf("1- Verifica se um numero equivale a soma dos impares\n");
        printf("2- Verifica se os numeros equivalem a soama dos impares de um intervalo\n");
        printf("Opcao: ");
        scanf("%d",&opcao);


        if (opcao==1)
        {
            printf("Informe um numero: ");
            scanf("%d",&num);

            printf("\n%2d = ", num);
            if (somaImpares(num)=='s')
            {
                printf("=> Equivale a soma dos impares\n");
            }
            else
            {

                printf("=> Nao equivale a soma dos impares\n");

            }


        }

        if (opcao==2)
        {
            printf("Informe o valor do limite inferior: ");
            scanf("%d",&inf);
            printf("Informe o valor do limite superior: ");
            scanf("%d",&sup);



            for(i=inf; i<=sup; i++)
            {

                printf("%d = ", i);


                if (somaImpares(i)=='s')
                {
                    printf("=> Equivale a soma dos impares\n");
                }
                else
                {

                    printf("=> Nao equivale a soma dos impares\n");

                }
            }




        }




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
