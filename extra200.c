/*1) Fazer um programa que permite aplicar as operações de soma, subtração, multiplicação, divisão e resto
em dois números fornecidos pelo usuário. Cada operação é uma função e deve ser acessada a partir de um
menu (use switch case). As funções são implementadas no próprio programa.
a) Soma sem parâmetros e sem retorno
b) Subtração com parâmetros e sem retorno
c) Multiplicação sem parâmetros e com retorno
d) Divisão com parâmetros e com retorno.
e) Resto com parâmetros e com retorno.
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






