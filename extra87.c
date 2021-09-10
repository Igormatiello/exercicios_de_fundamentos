/*7) O que faz o algoritmo a seguir? SOMA UMA VARIAVEK EM FUNÇÃO DA OUTRA EM FORMA DE PIRAMIDE
declare i, s como inteiro
s ← 0
repetir i = 0 até i < 10 passo 1
s ← s + i
fim-repetir
escreva s
Implemente o algoritmo utilizando a linguagem C.
Responda: Por que a variável s foi inicializada com 0?
*/

#include <stdio.h>


int main(void)
{
    int i=0,s=0;
    while (i<10)
    {
        s=s+i;
        i=i+1;
    }
    printf("%d\n",s);

    return 0;
}






