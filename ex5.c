#include <stdio.h>

int main(void)
{
     int idade1, idade2, soma ;
    float media;
    //entrada de dados
    printf("Informe a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Informe a idade da segunda pessoa: ");
    scanf("%d", &idade2);

    //processamento de dados
    soma= idade1+idade2;
    media = (float)soma/2; // ou coloca 2.0 para mudar para float
    //saida de dados

    printf("Soma: %d\n", soma);
    printf("Media: %.1f\n", media);



    return 0;

}
