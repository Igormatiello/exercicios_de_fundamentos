/*)8) Implemente um programa que adivinhe o "número mágico" entre 0 e 10. O programa deverá imprimir a mensagem
"Certo! %d é o número mágico" quando o jogador acerta o número mágico, a mensagem "Errado, muito alto", caso o
jogador tenha digitado um número maior que o número mágico e a mensagem "Errado, muito baixo", caso o jogador
tenha digitado um número menor que o número mágico. O número mágico é produzido usando o gerador de números
randômicos de C (função rand(), que exige o uso da biblioteca stdlib.h)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(void)
    {
    int nummagico,real;

    srand(time(NULL));

    nummagico=  rand() % (10 + 1);

    printf("Digite um numero:");
     scanf("%d",&real);
    if (nummagico==real)

    {
        printf("Certo, %d eh o numero magico",real);
    }
    if (nummagico>real)
    {
        printf("Errado, muito baixo");
    }
    if (nummagico<real)
    {
        printf("Errado, muito alto");
    }





    return 0;
    }
