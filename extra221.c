/*1) Fazer uma função para calcular o quadrado de um número. Usar essa função para:
a) Mostrar o quadrado de um número informado pelo usuário.
b) Apresentar o quadrado entre dois valores (limites de um intervalo) informado pelo usuário. Os valores para
os limites devem estar 1 e 100:

 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
int funcao21(int num)
{
    int resultado;
    resultado=pow(num,2);
    return(resultado);

}
int main(void)
{
    int opcao,inf,sup,i;
    int num;
    char repetir;
    do
    {

        printf("Informe um numero: ");
        scanf("%d",&num);

        printf("O quadrado do numero eh: %d\n",funcao21(num));


        do
        {
            printf("Informe o valor do limite inferior: ");
            scanf("%d",&inf);
        }
        while(inf<1 || inf>100);
        do
        {
            printf("Informe o valor do limite superior: ");
            scanf("%d",&sup);
        }
        while(sup<1 || sup>100);



        for(i=inf; i<=sup; i++)
        {
            printf("%d ^ 2 = %d\n",i,funcao21(i));
        }








        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



