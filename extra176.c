
/*6) Fazer um programa que solicite ao usu�rio informar um n�mero compreendido entre 10 e 20. Validar essa
entrada. Mostrar os n�meros compreendidos entre o valor �x� (informado pelo usu�rio) e �x+6�, inclusive. Para
cada n�mero gerado, mostrar os n�meros pares de 2 at� o n�mero gerado, calcular a soma dos pares e
mostrar a soma.
A sa�da deve ser exibida conforme o exemplo a seguir


*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int num,i,soma,j;

        do
        {
            printf("Informe um numero entre 10 e 20: ");
            scanf("%d",&num);
            if (num<10 || num>20)
            {
                printf("Numero invalido!\n");
            }
        }
        while(num<10 || num>20);



        for (i=num; i <(num+6); i++)
        {
            printf("%d ==> ",i);
            soma=0;
            for (j=2; j<=i; j++)
            {

                if (j%2==0)
                {
                    printf("%d ",j);
                    soma=soma+j;
                }

            }
             printf(" <-- Soma = %d",soma);
            printf("\n");

        }
        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }



    while (repetir=='S');



    return 0;

}



