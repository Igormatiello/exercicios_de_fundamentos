/*5) Elaborar uma função que recebe o número de linhas, o número de colunas, um determinado caractere e
desenha um quadrado ou retângulo na tela utilizando o caractere.
 */

#include <stdio.h>
#include <ctype.h>

void funcao_char(int linha, int coluna, char ch)
{
    int quant,i;
    quant=linha*coluna;

    for (i=1; i<=quant; i++)
    {
        printf("%c ",ch);
        if (i%coluna==0)
        {
            printf("\n");
        }


    }



}


int main(void)
{
    int opcao,linha,coluna;
    char repetir,ch;
    do
    {

        printf("Informe o numero de linhas: ");
        scanf("%d",&linha);
        printf("Informe o numero de colunas: ");
        scanf("%d",&coluna);
        printf("Informe um caracter: ");
        setbuf(stdin,NULL);
        scanf("%c",&ch);
        funcao_char(linha,coluna,ch);



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



