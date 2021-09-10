/*)9) Fazer uma fun��o que recebe duas strings e retorna 1 se elas s�o iguais ou 0, caso sejam diferentes.
Elaborar um programa que leia uma palavra, armazene o seu inverso em outra string e determine se a
mesma representa um pal�ndromo ou n�o, usando a fun��o que compara strings. Exemplos de palavras
pal�ndromos: ovo, natan, sos, arara, mirim, anilina, ana
*/

int comparaStrings(char str1[], char str2[])
{
    int i=0, resultado;

    while(str1[i] != '\0' && str2[i] != '\0') //enquanto a string 1 e 2 forem diferentes de final de string
    {
        if(str1[i] == str2[i]) //verifica que se o caracter que est� na string 1 � igual ao caracter que est� na string 2
        {
            resultado = 1; //significa que o caracter das duas strings � igual
        }
        else
        {
            resultado = 0; //significa que o caracter das duas strings � diferente, nesse caso, pode sair sair da repeti��o
            break;
        }
        i++;
    }
    return(resultado);
}
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {
        char texto[100],inverso[100];
        int i,j,resultado;
        printf("Informe uma palavra: ");
        setbuf(stdin, NULL);
        gets(texto);

        i = 0;
        while(texto[i] != '\0')
        {
            i++;
        }
        j=0;
        printf("Inverso da palavra: ");
        for(i=i-1; i>=0; i--)
        {
            printf("%c", texto[i]);
            inverso[j] = texto[i];
            j++;

        }
        inverso[j] = '\0';


        if (comparaStrings(texto, inverso) == 1)
        {
            printf("\nEh palindromo\n");
        }
        else
        {
            printf("\nNao eh palindromo\n");
        }



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
