

/*6) Na biblioteca "vetores.h" criar uma função com o protótipo void
gerarVetorCharAlfanumerico(char vetor[], int tam) que gera um vetor
randômico de caracteres alfanuméricos (números, letras e símbolos especiais, exceto caracteres de controle).
A instrução para gerar randomicamente caracteres alfanuméricos é:
vetor[i] = rand() % 223 + 33;
Explicando: A função rand() % 223 gera um número aleatório entre 0 e 222, que somado com 33 equivale a
um valor entre 33 a 255, que equivale aos caracteres alfanuméricos da tabela ASCII.
Usando essa função:
a) Gerar randomicamente um vetor com 200 caracteres alfanuméricos (números, letras e símbolos especiais,
exceto caracteres de controle).
b) Mostrar o vetor gerado em colunas com 12 caracteres por linha separados por um espaço.
c) Percorrer o vetor e contar quantos caracteres são alfabéticos maiúsculos, quantos são alfabéticos
minúsculos e quantos são números. Armazenar essas quantidades em um vetor. Esse vetor possui tamanho
3 e cada índice armazena a quantidade de um desses tipos. É indispensável ir armazenando as quantidades
à medida que o vetor é percorrido (vet[0]=vet[0]+1), portanto, é necessário inicializar com zero o
vetor das quantidades antes de utilizá-lo.
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
