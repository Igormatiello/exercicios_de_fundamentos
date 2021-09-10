/*)4) Ler uma string e contar quantas palavras a mesma possui. Considerar o seguinte contexto:
O usuário pode informar apenas uma palavra, com ou sem espaços no início ou no final da mesma.
O usuário pode informar mais de um espaço entre palavras.
O usuário pode não informar nenhuma palavra (simplesmente pressionar ENTER).

*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {
        char texto[200];
        int i=0,contador=0;
        printf("Informe um texto: ");
        setbuf(stdin,NULL);
        gets(texto);



        while(texto[i] != '\0')
        {
            if (texto[i]!= ' ' && (texto[i+1]== ' ' || texto[i+1]=='\0'))
            {
                contador++;
            }
            i++;

        }
        printf("possui %d palavras\n",contador);




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
