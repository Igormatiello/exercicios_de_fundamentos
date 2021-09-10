/*6) O que faz o algoritmo a seguir? IMPRIME OS PARES DE 0 A 10
declare i como inteiro
repetir i = 0 até i < 10 passo 2
escreva “o valor i = “, i
fim-repetir
Implemente o algoritmo utilizando a linguagem C.
*/

#include <stdio.h>


int main(void)
{
    int i=0;
    while (i<=10)
    {
        printf("O valor i= %d\n",i);
        i=i+2;
    }

    return 0;
}






