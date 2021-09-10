/*)Faça um programa que receba um caractere via teclado, transforme esse caractere em maiúsculo e verifique se ele
pertence ou não ao alfabeto (A, B, ..., Z). Caso ele pertença, o programa deve gerar a saída
printf("O caracter digitado pertence ao albafeto\n") e, com o uso da estrutura switch
- case, verificar se o caractere é uma vogal (neste caso, a saída deve ser printf("VOGAL %c\n", ch))
ou uma consoante (neste caso, a saída deve ser printf("CONSOANTE %c\n", ch)). Caso o caractere
não pertença ao alfabeto, o programa deverá gerar a saída printf("O caracter digitado não
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
