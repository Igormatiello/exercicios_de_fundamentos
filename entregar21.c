/*1) Fazer uma fun��o que verifica se um n�mero � triangular. Um n�mero natural � triangular quando o
produto de tr�s n�meros naturais consecutivos for igual ao pr�prio n�mero. Por exemplo: 120 � triangular,
pois 4 * 5 * 6 = 120. Use essa fun��o para:
a) Verificar se um n�mero, informado pelo usu�rio, � triangular.
b) Mostrar quais n�meros de um intervalo s�o triangulares.
Use menu de op��es (com switch-case) e implemente a repeti��o de programa */

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

