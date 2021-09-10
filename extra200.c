/*1) Fazer um programa que permite aplicar as opera��es de soma, subtra��o, multiplica��o, divis�o e resto
em dois n�meros fornecidos pelo usu�rio. Cada opera��o � uma fun��o e deve ser acessada a partir de um
menu (use switch case). As fun��es s�o implementadas no pr�prio programa.
a) Soma sem par�metros e sem retorno
b) Subtra��o com par�metros e sem retorno
c) Multiplica��o sem par�metros e com retorno
d) Divis�o com par�metros e com retorno.
e) Resto com par�metros e com retorno.
*/

#include <stdio.h>
#include <ctype.h>


void soma(void)
{
    int somatorio,num1,num2;
    printf("Informe o primeiro valor: ");
    scanf("%d",&num1);
    printf("Informe o segundo valor: ");
    scanf("%d",&num2);
    somatorio=num1+num2;
    printf("Soma: %d\n",somatorio);


}
void subtracao(int x1,int x2)
{
    int resultado;
    resultado=x1-x2;
    printf("Subtracao: %d\n",resultado);
}
int multi(void)
{
    int num1,num2,resultado;

 printf("Informe o primeiro valor: ");
    scanf("%d",&num1);
    printf("Informe o segundo valor: ");
    scanf("%d",&num2);
    resultado=num1*num2;
    return(resultado);

}
float div(int x1,int x2)
{
    float resultado;
    resultado=(float)x1/x2;
    return(resultado);
}

int resto(int x1, int x2)
{
    int resultado;
    resultado=x1%x2;
    return(resultado);

}


int main(void)
{
    char repetir,opcao;
    int num1,num2,resultado;
    do
    {
        printf("A - Adicionar\n");
        printf("S - Subtrair\n");
        printf("M - Multiplicar\n");
        printf("D - Dividir\n");
        printf("R - Resto\n");
        printf("Opcao: ");
        setbuf(stdin,NULL);
        scanf("%c",&opcao);


        switch(opcao)
        {
        case 'A':
            case 'a':


            soma();

            break;

        case 'S':
            case 's':
            printf("Informe um numero: ");
            scanf("%d",&num1);
            printf("Informe outro numero: ");
            scanf("%d",&num2);
            subtracao(num1,num2);
            break;

        case 'M':
case 'm':
            resultado=multi();
            printf("Multiplicacao: %d\n",resultado);


            break;
        case 'D':
            case 'd':
            printf("Informe um numero: ");
            scanf("%d",&num1);
            printf("Informe outro numero: ");
            scanf("%d",&num2);
            printf("Divisao: %f\n",div(num1,num2));
        break;
        case 'r':
        case 'R':
            printf("Informe um numero: ");
            scanf("%d",&num1);
            printf("Informe outro numero: ");
            scanf("%d",&num2);
            printf("Resto: %d\n",resto(num1,num2));
        break;
        }


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');




}






