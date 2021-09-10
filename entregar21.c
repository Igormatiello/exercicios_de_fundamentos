/*1) Fazer uma função que verifica se um número é triangular. Um número natural é triangular quando o
produto de três números naturais consecutivos for igual ao próprio número. Por exemplo: 120 é triangular,
pois 4 * 5 * 6 = 120. Use essa função para:
a) Verificar se um número, informado pelo usuário, é triangular.
b) Mostrar quais números de um intervalo são triangulares.
Use menu de opções (com switch-case) e implemente a repetição de programa */

#include <stdio.h>
#include <ctype.h>

int funcao_triangular(int num)
{
    int i,produto=1,penultimo=1,ultimo=2,resultado=0;
    for (i=3; produto<=num; i++)
    {
        produto= i*ultimo*penultimo;

        if (produto==num)
        {

            printf("%d eh triangular ==> %d * %d * %d = %d\n",num,penultimo,ultimo,i,num);
            resultado=1;

            break;
        }

        penultimo=ultimo;
        ultimo=i;
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

        printf("1 - Verifica se um numero eh triangular\n");
        printf("2 - Mostra os numeros triangulares que pertencem a um intervalo\n");
        printf("Opcao: ");
        scanf("%d",&opcao);


        switch(opcao)
        {
        case 1:
        {
            printf("Informe um numero: ");
            scanf("%d",&num);


            if (funcao_triangular(num)==0)
            {
                printf("%d nao eh triangular\n",num);
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
                funcao_triangular(i);
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

