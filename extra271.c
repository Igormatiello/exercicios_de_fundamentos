/*)1) Ler uma string e copiá-la para outra string sem os possíveis espaços em branco no início e no final.
Também devem ser eliminados dois ou mais espaços sucessivos entre as palavras.
*/



#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {
        char texto[200], atual[200];
        int i=0,j=0;
        printf("Informe uma texto: ");
        setbuf(stdin, NULL);
        gets(texto);

        while(texto[i] != '\0')
        {
            if (texto[i]==' ')
            {

            }
            else
            {
                atual[j]=texto[i];
                j++;
            }
            i++;
        }
        atual[j]='\0';


        printf("Texto sem espacos: %s\n",atual);
        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
