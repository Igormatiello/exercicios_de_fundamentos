/*5) O que faz o algoritmo a seguir? LÊ O MAIOR VALOR DIGITADO ENTRE 4
declare valor, maior como inteiro
leia valor
maior ← valor
para j = 0 até j < 4 passo 1
leia valor
se valor > maior então
maior ← valor
fim-se
fim-para
escreva maior
Implemente o algoritmo utilizando a linguagem C.
Responda: Como alterar o algoritmo para não ser necessário fazer uma leitura do valor antes da estrutura
for?
*/

#include <stdio.h>


int main(void)
{
    int valor,maior=-32766,j;

    for (j=0; j<4; j++)
    {
        printf("Informe um valor: ");
        scanf("%d",&valor);
        if (valor>maior)
        {
            maior=valor;
        }
    }
    printf("Maior: %d\n",maior);

    return 0;
}






