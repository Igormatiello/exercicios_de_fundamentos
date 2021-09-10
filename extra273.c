/*)3) Um número primo é definido se ele possuir somente dois divisores: o número um e ele próprio. São
exemplos de números primos: 2, 3, 5, 101, 367 e 523. Neste problema, você deve ler uma palavra composta
somente por letras [a-zA-Z]. Cada letra possui um valor específico, a vale 1, b vale 2 e assim por diante, até a
letra z que vale 26. Do mesmo modo A vale 27, B vale 28, até a letra Z que vale 52. Você precisa definir se
cada palavra em um conjunto de palavras é prima ou não. Para ela ser prima, a soma dos valores de suas
letras deve ser um número primo.
Para resolver este problema, é necessário criar uma função para contar os caracteres de um texto (com o
protótipo int contaCaracteres(char texto[]);) e uma função para converter os caracteres
para números (com o protótipo int converteCharParaNumero(char ch);). Além disso, é
necessário usar uma função que recebe um número e retorna 0 se esse número for primo ou 1, caso
contrário.

*/

int contaCaracteres(char texto[])
{
    int i=0;
    while(texto[i] != '\0')
    {
        i++;
    }
    return(i);


}

int converteCharParaNumero(char ch)
{
    int valor;

    if (ch>='a' && ch<='z')
    {
        valor=(int)ch-96;
    }

    if (ch>='A' && ch<='Z')
    {

        valor=(int)ch -38;
    }

    return(valor);
}



#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    do
    {
        char texto[200];
        int i=0, aux=0,contador,soma=0;
        printf("Informe um texto: ");
        setbuf(stdin, NULL);
        gets(texto);

        while(i<(contaCaracteres(texto)))
        {
            if (texto[i]!=' ')
            {
                printf("%c",texto[i]);
                soma=soma+converteCharParaNumero(texto[i]);
            }
            else
            {
                if (verifica_primo(soma)==0)
                {
                    printf(" = %d => Prima\n",soma);
                }
                else
                {
                    printf(" = %d => Nao prima\n",soma);
                }


                soma=0;

            }



            i++;
        }
        if (verifica_primo(soma)==0 && soma!=1)
        {
            printf(" = %d => Prima\n",soma);
        }
        else
        {
            printf(" = %d => Nao prima\n",soma);
        }



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
