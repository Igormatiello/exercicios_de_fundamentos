/* 3) Elaborar um programa que leia um caractere. Se o caractere informado for ‘F’ ou ‘f’ mostrar a mensagem
“pessoa física”, se informado ‘J’ ou ‘j’ mostrar a mensagem “pessoa jurídica” ou mostrar "caractere inválido"
para qualquer outro caractere.
Exemplo:
*/


#include <stdio.h>


int main(void)
{


    char ch;

    printf("Informe um caractere: ");
    scanf("%c",&ch);

    switch (ch)
    {


    case 'f':
    case 'F':
    printf("Pessoa fisica\n");
    break;
    case 'j':
    case 'J':
    printf("Pessoa juridica\n");
    break;
    default:
        printf("Caractere invalido\n");
    }
    return 0;

}
