/*)5) Gerar um vetor com 10 valores inteiros aleat�rios entre 1 e 100. Para os elementos pares do vetor, verificar
se s�o n�meros perfeitos. Para os elementos �mpares do vetor, somar os seus d�gitos. Utilizar uma fun��o
para verificar se um n�mero � perfeito e outra fun��o para somar os seus d�gitos de um n�mero. Um n�mero
� perfeito quando a soma dos seus divisores (exceto ele pr�prio) � igual ao pr�prio n�mero (por exemplo 6 �
perfeito porque possui 1, 2 e 3 como divisores que somam 6).

*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    do
    {
        int limite=100, tamanho=10;
        int vet[tamanho],i;
        gerar_vetor(vet,tamanho,limite);
        printf("===VETOR ===\n");
        mostra_vetor(vet,tamanho);

        printf("\n\n===PARES===\n");
        for(i=0; i<tamanho; i++)
        {
            if (vet[i]%2==0)
            {
                if (verificar_perfeito(vet[i])==1)
                {
                    printf("%d eh perfeito\n",vet[i]);
                }
                else
                {
                    printf("%d nao eh perfeito\n",vet[i]);
                }
            }
        }

        printf("\n\n===IMPARES===\n");

        for(i=0; i<tamanho; i++)
        {

            if (vet[i]%2!=0)
            {

                printf("%d - Soma dos digitos: %d\n",vet[i],soma_digitos(vet[i]));

            }

        }





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
