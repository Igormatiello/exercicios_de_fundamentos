
/*1) Ler um número e ler um dígito. Contar quantos dígitos o número possui. Exemplo:
É informado 5 como dígito:
55 – possui 2 dígitos cinco;
10 – possui nenhum dígito cinco;
1550 – possui dois dígitos cinco;
50050 – possui dois dígitos cinco.
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



