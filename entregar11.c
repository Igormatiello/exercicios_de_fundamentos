
/*1) Ler um n�mero e ler um d�gito. Contar quantos d�gitos o n�mero possui. Exemplo:
� informado 5 como d�gito:
55 � possui 2 d�gitos cinco;
10 � possui nenhum d�gito cinco;
1550 � possui dois d�gitos cinco;
50050 � possui dois d�gitos cinco.
Repetir o programa enquanto informados valores positivos.

*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int num,digito;
        do
        {
            printf("Digite um numero: ");
            scanf("%d",&num);
            if (num<0)
            {
                printf("Numero invalido! O numero deve ser positivo.\n");
            }
        }
        while(num<0);


        do
        {
            printf("Digite um digito: ");
            scanf("%d",&digito);

            if (digito<0)
            {
                printf("Numero invalido! O numero deve ser positivo.\n");
            }
        }
        while(digito<0);

        int contador=0,teste;

        while(num != 0)

            if (num>=0)
            {
                teste = num % 10;
                num= num/10;

                if (teste==digito)
                {
                    contador=contador+1;
                }
            }
        printf("O numero tem %d digitos iguais a %d\n",contador,digito);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



