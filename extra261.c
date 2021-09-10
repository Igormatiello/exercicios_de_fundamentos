/*) Ler um texto com até 100 caracteres. Se o primeiro caractere for 'a' imprimir esse texto, caso contrário
contar quantos caracteres 'o' o texto possui.*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {
        char texto[100];
        int i=0,contO=0;
        printf("Informe um texto com ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);

        if (texto[0]=='a')
        {
            puts(texto);
        }
        else
        {
            i=0;//inicializa i
            contO=0; //inicializa contO
            while(texto[i] != '\0')
            {


                if (texto[i]=='o')
                {
                    contO++;
                }
                i++;
            }
            printf("O texto \"%s\" possui %d caracteres 'o'\n",texto,contO);
        }





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
