/*4) (DESAFIO) Incremente o código da função do exercício anterior e transforme o triângulo em uma árvore de
Natal, como mostrado no exemplo a seguir.
 */

#include <stdio.h>
#include <ctype.h>
void funcao15(int linha, char tipo)

{
    int i,quant=1,l;
    char ch;
    ch='*';
    for (i=1; i<=linha; i++) //linhas
    {

        for (l=1; l<=quant; l++)
        {
            if (tipo=='P' )
            {
                printf("%c",ch);
            }
            if (tipo=='V')
            {
                if (l==1 || l==quant || i==linha)
                {
                    printf("%c",ch);
                }
                else
                {
                    printf(" ");
                }
            }

        }
        quant=quant+1;



        printf("\n");
    }



}


int main(void)
{
    int linha;
    char repetir,tipo;
    do
    {
        printf("Informe a altura do triangulo em linhas: ");
        scanf("%d",&linha);
        printf("Vazado (V/v) ou Preenchido(P/p): ");
        setbuf(stdin,NULL);
        scanf("%c",&tipo);
        tipo=toupper(tipo);

        funcao15(linha,tipo);




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



