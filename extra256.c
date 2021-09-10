

/*6) Na biblioteca "vetores.h" criar uma fun��o com o prot�tipo void
gerarVetorCharAlfanumerico(char vetor[], int tam) que gera um vetor
rand�mico de caracteres alfanum�ricos (n�meros, letras e s�mbolos especiais, exceto caracteres de controle).
A instru��o para gerar randomicamente caracteres alfanum�ricos �:
vetor[i] = rand() % 223 + 33;
Explicando: A fun��o rand() % 223 gera um n�mero aleat�rio entre 0 e 222, que somado com 33 equivale a
um valor entre 33 a 255, que equivale aos caracteres alfanum�ricos da tabela ASCII.
Usando essa fun��o:
a) Gerar randomicamente um vetor com 200 caracteres alfanum�ricos (n�meros, letras e s�mbolos especiais,
exceto caracteres de controle).
b) Mostrar o vetor gerado em colunas com 12 caracteres por linha separados por um espa�o.
c) Percorrer o vetor e contar quantos caracteres s�o alfab�ticos mai�sculos, quantos s�o alfab�ticos
min�sculos e quantos s�o n�meros. Armazenar essas quantidades em um vetor. Esse vetor possui tamanho
3 e cada �ndice armazena a quantidade de um desses tipos. � indispens�vel ir armazenando as quantidades
� medida que o vetor � percorrido (vet[0]=vet[0]+1), portanto, � necess�rio inicializar com zero o
vetor das quantidades antes de utiliz�-lo.
d) Mostrar o vetor com as quantidades.
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

        int tamanho=200;
        char vetor[tamanho];
        gerarVetorCharAlfanumerico(vetor,tamanho);
        printf("===VETOR ALFANUMERICO===\n");
        mostrarVetorChar(vetor,tamanho,12);


        int vetor2[3]= {0,0,0},i;


        for (i=0; i<tamanho; i++)
        {
            if (vetor[i]>=65 && vetor[i]<=90)
            {
                vetor2[0]++;
            }
            if (vetor[i]>=97 && vetor[i]<=122)
            {
                vetor2[1]++;
            }
            if (vetor[i]>=48 && vetor[i]<=57)
            {
                vetor2[2]++;
            }

        }

        printf("\n\nCaracteres alfabeticos maisculos: %d\n",vetor2[0]);
        printf("Caracteres alfabeticos minusculos: %d\n",vetor2[1]);
        printf("Caracteres numericos: %d\n",vetor2[2]);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
