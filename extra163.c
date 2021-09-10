
/*3) Ler um número N qualquer maior ou igual a 1 e menor ou igual a 50 e apresentar o valor obtido da
multiplicação sucessiva de N por 2, enquanto o produto for menor que 250 (N*2; N*2*2; N*2*2*2; etc.). O valor
N deverá ser verificado quanto a sua validade. Caso o usuário informe um valor fora da faixa, o programa
deverá informar que o valor digitado não é válido e repetir a leitura.
Atenção: o produto deve ser menor que 250.

*/




#include <ctype.h>
#include <stdio.h>
int main(void)

{
    int num,produto,i;
    char repetir;
    do {
    do {
   printf("Informe um numero na faixa de 1 a 50: ");
   scanf("%d",&num);
    }while(num<1 || num>50);
    produto=num;
  while (produto<250)
    {
        produto= produto*2;
        if (produto <250)
        {


        printf("%d * 2 = %d\n",num,produto);
    }
    }
    printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }while (repetir=='S');


    return 0;

}

