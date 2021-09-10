/*3) Fazer uma fun��o que converte de reais para d�lares ou de d�lares para reais. Essa fun��o recebe como
par�metros: o valor a ser convertido, o valor da cota��o, � se � para converter em d�lares ou em reais. A
fun��o faz a convers�o e retorna o valor convertido.
Sugest�o de cabe�alho da fun��o:
float ConverterModeadas(float Valor, float Cotacao, char Tipo) /*Tipo 'D' ou 'd'
significa que a convers�o � de real para d�lar e 'R' ou 'r' significa que a
convers�o � de d�lar para real.
Usando essa fun��o:
a) Ler um determinado valor, o valor da cota��o e o tipo de convers�o e apresentar o valor obtido.
b) Ler os valores que representam os limites de um intervalo, o valor da cota��o e o tipo de convers�o e
apresentar a tabela de convers�o resultante. Por exemplo, se a cota��o do d�lar for R$ 3,19, apresentar:
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
float funcao23(float valor, float cot, char tipo)
{
    float resultado;

    if (tipo=='D')
    {
        resultado= valor/cot;
    }
    else
    {
        resultado=valor *cot;
    }
    return(resultado);


}
int main(void)
{
    float valor, conv,i,inf,sup;

    char repetir,tipo;
    do
    {



        printf("Informe um valor que deseja converter: ");
        scanf("%f",&valor);
        printf("Informe o valor da cotacao: ");
        scanf("%f",&conv);
        printf("Informe o tipo de conversao(D/d para Dolar ou R/r para Real): ");
        setbuf(stdin,NULL);
        scanf("%c",&tipo);
        tipo=toupper(tipo);

        printf("O valor obtido eh: %.2f\n",funcao23(valor,conv,tipo));




        printf("Informe o valor do limite inferior: ");
        scanf("%f",&inf);
        printf("Informe o valor do limite superior: ");
        scanf("%f",&sup);
        printf("Informe o valor da cotacao: ");
        scanf("%f",&conv);
        printf("Informe o tipo de conversao(D/d para Dolar ou R/r para Real): ");
        setbuf(stdin,NULL);
        scanf("%c",&tipo);
        tipo=toupper(tipo);


        if (tipo=='D')
        {
            printf("REAIS\tDOLARES\n");

        }
        else
        {
            printf("DOLARES\tREAIS\n");
        }



        for(i=inf; i<=sup; i++)
        {
            printf("%.0f\t%.2f\n",i,funcao23(i,conv,tipo));
        }








        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}




