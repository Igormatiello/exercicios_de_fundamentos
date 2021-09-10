/*4) (DESAFIO) Incremente o código da função do exercício anterior e transforme o triângulo em uma árvore de
Natal, como mostrado no exemplo a seguir.
 */

#include <stdio.h>
#include <ctype.h>
void funcao14(int linha)
{
    char ch;
    int i,k,l,suporte=1,linhaaux,r,s;
    ch='*';
    linhaaux=linha;
    suporte=1;

    for (i=1; i<=linha; i++) //linha
    {


        for (l=(linhaaux-1); l>=1; l--) //espaçamento
        {
            printf(" ");
        }

        for (k=1; k<=suporte; k++) //quantidade de estrelas
        {
            printf("%c",ch);

        }
        suporte=suporte+2;





        printf("\n");
        linhaaux=linhaaux-1;

    }
    for (r=1; r<=(linha/2); r++)
    {
        for (s=(linha-1); s>=1; s--)
        {

            printf(" ");

        }
        printf("%c",ch);
        printf("\n");
    }

}

int main(void)
{
    int linha;
    char repetir;
    do
    {
        printf("Informe a altura (em linhas) da arvore: ");
        scanf("%d",&linha);

        funcao14(linha);




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



