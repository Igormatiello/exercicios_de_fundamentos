
/*4) Um ano � bissexto se for divis�vel por 4 e n�o for divis�vel por 100. Tamb�m s�o bissextos os divis�veis por 400.
Escreva um programa que determina se um ano informado pelo usu�rio � bissexto*/
#include <stdio.h>
    int main(void)
    {
    int ano;

    printf("Informe o ano: ");
    scanf("%d",&ano);

    if (((ano % 4) ==0) && ((ano % 100)!=0) || ((ano%400)==0))
    {printf("O ano eh bissexto\n");
    }
    else
    {


        printf("O ano nao eh bissexto\n");
    }

    return 0;
    }
