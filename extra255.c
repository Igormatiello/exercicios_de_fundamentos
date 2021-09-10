

/*5) Na biblioteca "vetores.h" criar fun��o:
a) Com o prot�tipo void gerarVetorCharMinuscula(char vetor[], int tam) para
gerar um vetor rand�mico de caracteres alfab�ticos min�sculos. A instru��o para gerar randomicamente
caracteres alfab�ticos min�sculos �:
vetor[i] = rand() % 26 + 97;
Explicando: A fun��o rand() % 26 gera um n�mero aleat�rio entre 0 e 25, que somado com 97 equivale a um
valor entre 97 a 122, que se refere aos caracteres alfab�ticos min�sculos da tabela ASCII.
b) Com o prot�tipo void gerarVetorCharMaiuscula(char vetor[], int tam) para
gerar um vetor rand�mico de caracteres alfab�ticos mai�sculos. A instru��o para gerar randomicamente
caracteres alfab�ticos mai�sculos �:
vetor[i] = rand() % 26 + 65;
Explicando: A fun��o rand() % 26 gera um n�mero aleat�rio entre 0 e 25, que somado com 65 equivale a um
valor entre 65 a 90, que se refere aos caracteres alfab�ticos mai�sculos da tabela ASCII.
c) Com o prot�tipo void mostrarVetorChar(char vetor[], int tam, int n) para
mostrar o vetor gerado em colunas com n caracteres por linha, separados por um espa�o.
Usando essas fun��es:
a) Gerar randomicamente um vetor com 100 caracteres alfab�ticos min�sculos.
b) Gerar randomicamente um vetor com 200 caracteres alfab�ticos mai�sculos.
c) Mostrar ambos os vetores gerados em colunas com 10 caracteres por linha, sendo cada caractere
separado por um espa�o
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"



int main(void)
{


    char repetir;
    do
    {

        int tamanho=100,linha=10;
        char vetor1[tamanho],vetor2[200];

        gerarVetorCharMinuscula(vetor1,tamanho);
        printf("===VETOR DE MINUSCULAS===\n");

        mostrarVetorChar(vetor1,tamanho,linha);


        gerarVetorCharMaiuscula(vetor2,200);
        printf("\n\n===VETOR DE MAIUSCULAS===\n");

        mostrarVetorChar(vetor2,200,linha);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
