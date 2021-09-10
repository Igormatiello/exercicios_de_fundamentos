/*)Fa�a um programa que receba um caractere via teclado, transforme esse caractere em mai�sculo e verifique se ele
pertence ou n�o ao alfabeto (A, B, ..., Z). Caso ele perten�a, o programa deve gerar a sa�da
printf("O caracter digitado pertence ao albafeto\n") e, com o uso da estrutura switch
- case, verificar se o caractere � uma vogal (neste caso, a sa�da deve ser printf("VOGAL %c\n", ch))
ou uma consoante (neste caso, a sa�da deve ser printf("CONSOANTE %c\n", ch)). Caso o caractere
n�o perten�a ao alfabeto, o programa dever� gerar a sa�da printf("O caracter digitado n�o
pertence ao albafeto\n").

*/

#include <stdio.h>
#include <ctype.h>
    int main(void)
    {
    char letra;
    printf("Informe um caractere: ");
    scanf("%c",&letra);
    letra = toupper(letra);

    if (isalpha(letra))
        {
            printf("%c faz parte do alfabeto\n",letra);


        switch(letra)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("VOGAL %c\n", letra);
        break;
        default:
            {
                printf("CONSOANTE %c\n",letra);
            }

        }
        }
        else
        {
            printf("O caracter digitado nao pertence ao alfabeto\n");
        }





    return 0;
    }
