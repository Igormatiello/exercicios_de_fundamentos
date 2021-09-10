/*2) Fazer uma função que verifica se um número é retangular. Um número é retangular se ele pode ser obtido
a partir da soma de uma sequência de números pares, iniciando em 2. Por exemplo: 30 é retangular porque
resulta da soma de 2 + 4 + 6 + 8 + 10. Utilizar essa função para:
a) Verificar se um número, informado pelo usuário, é retangular.
b) Mostrar quais números de um intervalo são retangulares.
Use menu de opções (com switch-case) e implemente a repetição de programa */

#include <stdio.h>
#include <ctype.h>

int funcao_retangular(int num)
{
    int i,soma=0,resultado=0,contagem=0,j;
    for (i=2; soma<=num; i=i+2)
    {
        soma= i+soma;
        contagem++;
        if (soma==num)
        {

            printf("%d eh retangular ==> ",num);
            for (j=1; j<=contagem; j++)
            {
                if (j!=contagem)
                {


                    printf("%d + ",(j*2));
                }
                if (j==contagem)
                {
                    printf("%d ",(j*2));
                }
            }
            printf(" = %d\n",num);
            resultado=1;

            break;
        }


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

        printf("1 - Verifica se um numero eh retangular\n");
        printf("2 - Mostra os numeros retangulares que pertencem a um intervalo\n");
        printf("Opcao: ");
        scanf("%d",&opcao);


        switch(opcao)
        {
        case 1:
        {
            printf("Informe um numero: ");
            scanf("%d",&num);


            if (funcao_retangular(num)==0)
            {
                printf("%d nao eh retangular\n",num);
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
                funcao_retangular(i);
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



