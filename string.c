#include <stdio.h>

int tamanhoDaString(char str[]);
int qtdeEspacos(char str[]);

int main(void)
{
    char string[30];

    printf("Informe uma string: ");
    gets(string);

    printf("\nA string \"%s\" tem tamanho %d\n", string, tamanhoDaString(string));
    printf("A string \"%s\" tem %d espacos em branco\n", string, qtdeEspacos(string));

    return 0;
}
int tamanhoDaString(char str[])
{
    int i=0;

    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

int qtdeEspacos(char str[])
{
    int i=0, cont=0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            cont++;
        }
        i++;
    }
    return(cont);
}
