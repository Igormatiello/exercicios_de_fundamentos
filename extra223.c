/*3) Fazer uma função que converte de reais para dólares ou de dólares para reais. Essa função recebe como
parâmetros: o valor a ser convertido, o valor da cotação, é se é para converter em dólares ou em reais. A
função faz a conversão e retorna o valor convertido.
Sugestão de cabeçalho da função:
float ConverterModeadas(float Valor, float Cotacao, char Tipo) /*Tipo 'D' ou 'd'
significa que a conversão é de real para dólar e 'R' ou 'r' significa que a
conversão é de dólar para real.
Usando essa função:
a) Ler um determinado valor, o valor da cotação e o tipo de conversão e apresentar o valor obtido.
b) Ler os valores que representam os limites de um intervalo, o valor da cotação e o tipo de conversão e
apresentar a tabela de conversão resultante. Por exemplo, se a cotação do dólar for R$ 3,19, apresentar:
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




