/*)8) Ler um texto (pode ser composto por uma ou mais palavras), copiar para um vetor somente a primeira
palavra. Mostrar a string armazenada.
Observação: Não esquecer de finalizar a string gerada (copiada).
*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {

        char texto[150],copia[150];
        int i=0;


        printf("Informe um texto: ");
        setbuf(stdin, NULL);
        gets(texto);
        while(texto[i] != ' ')
        {

            copia[i]=texto[i];
            i++;

        }

        printf("A string copiada eh: %s\n",copia);




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
