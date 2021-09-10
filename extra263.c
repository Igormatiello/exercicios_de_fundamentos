/*) 3) Ler uma string, contar e exibir a quantidade de cada uma das vogais existentes nessa string. Armazenar
essas quantidades em um vetor. É indispensável armazenar a quantidade no vetor à medida que a string é
percorrida na forma vetVogais[indice]++. Portanto, o vetor que armazena a quantidade de vogais
deve ser inicializado com zero antes de ser utilizado. Mostrar os resultados da seguinte forma.
Vogal Quantidade
===================
A/a 5
E/e 0
I/i 1
O/o 2
U/u 0
*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {
        char texto[150];
        int vet[5]= {0,0,0,0,0},i=0;
        printf("Informe um texto com ate 100 caracteres: ");
        setbuf(stdin, NULL);
        gets(texto);

        while(texto[i] != '\0')
        {
            if (texto[i]=='a' || texto[i]=='A')
            {
                vet[0]++;
            }
            if (texto[i]=='e' || texto[i]=='E')
            {
                vet[1]++;
            }
            if (texto[i]=='i' || texto[i]=='I')
            {
                vet[2]++;
            }
            if (texto[i]=='o' || texto[i]=='O')
            {
                vet[3]++;
            }
            if (texto[i]=='u' || texto[i]=='U')
            {
                vet[4]++;
            }


            i++;


        }


        printf("Vogal\tQuantidade\n=====================\n");
        printf("A/a\t\%d\n",vet[0]);
        printf("E/e\t\%d\n",vet[1]);
        printf("I/i\t\%d\n",vet[2]);
        printf("O/o\t\%d\n",vet[3]);
        printf("U/u\t\%d\n",vet[4]);




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
