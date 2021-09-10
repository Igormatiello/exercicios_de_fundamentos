/*) 2) Fazer fun��es para:
a) Contar as palavras de uma string.
b) Mostrar o primeiro caractere de cada palavra de uma string.
c) Mostrar o �ltimo caractere de cada palavra de uma string.
Usando as fun��es criadas, elabore um programa que receba uma string de at� 100 caracteres e forne�a a
quantidade de palavras da string, mostre o primeiro caractere de cada palavra da string e mostre o �ltimo
caractere de cada palavra da string.
O programa tamb�m dever� copiar a primeira palavra da string para uma outra string e imprimi-la
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "vetores.h"



int main(void)
{
    char repetir;
    do
    {
        char texto[100];

        printf("Informe uma frase de ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);


        printf("\n\n\"%s\" possui %d palavras\n",texto,contaPalavras(texto));
        primeiroCaractere(texto);
        ultimoCaractere(texto);
        primeiraPalavra(texto);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}



