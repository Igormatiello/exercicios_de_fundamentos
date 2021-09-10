/*2) Fazer uma fun��o para verificar se um n�mero equivale a soma dos n primeiros �mpares iniciando em 1.
Por exemplo, 9, � um n�mero que tem essa caracter�stica porque 1 + 3 + 5 = 9 (soma dos n primeiros
n�meros �mpares iniciando em 1). Essa fun��o recebe como par�metro um valor inteiro e retorna 's' se o
n�mero equivale a soma dos n primeiros �mpares e 'n' caso n�o.
Fazer um programa que use essa fun��o para:
a) Ler um n�mero inteiro informado pelo usu�rio � verificar se o mesmo tem essa caracter�stica.
b) Mostrar todos os n�meros que t�m ou n�o t�m essa caracter�stica e pertencem a um intervalo informado
pelo usu�rio */

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

        if(soma == num) //verifica se a soma � igual a num, se sim, ent�o
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
