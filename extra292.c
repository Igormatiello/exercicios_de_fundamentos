/*)2) (Desafio) Implemente uma fun��o que recebe por par�metro um vetor num�rico e retorna o n�mero de
maior ocorr�ncia no vetor.
Use a fun��o para verificar o n�mero que ocorre com maior frequ�ncia em um vetor de 10 posi��es com
valores aleat�rios entre 1 e 5. Se ocorrer de mais de um elemento ter a maior frequ�ncia, considere apenas o
que ocorre primeiro no vetor.



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

        int limite2=5,tamanho=10, vet[tamanho],i;
        gerar_vetorcomlimite(vet,tamanho,1,limite2);
        printf("===VETOR===\n");
        mostra_vetor(vet,tamanho);

        printf("\n\nMaior frequencia no vetor: %d\n",verificaFrequencia(vet,tamanho));

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
