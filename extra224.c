/*4) Fazer uma fun��o que apresenta o resultado da multiplica��o de dois n�meros. Usar essa fun��o para:
a) Apresentar a multiplica��o de dois n�meros informados pelo usu�rio.
b) Apresentar a tabuada (0 a 10) de um n�mero informado pelo usu�rio.
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
int funcao24(int num1,int num2)
{
    int resultado;
    resultado=num1*num2;
    return(resultado);

}
int main(void)
{


    char repetir;
    int num1,num2,i;
    do
    {



        printf("Informe um numero: ");
        scanf("%d",&num1);
        printf("Informe outro numero: ");
        scanf("%d",&num2);



        printf("%d * %d = %d\n",num1,num2,funcao24(num1,num2));




        printf("Informe um numero: ");
        scanf("%d",&num1);


        for(i=0; i<=10; i++)
        {
            printf("%d * %d = %d\n",num1,i,funcao24(num1,i));
        }








        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}




