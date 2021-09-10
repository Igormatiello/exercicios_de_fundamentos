 /*Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um algoritmo
que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float.*/

#include <stdio.h>

int main(void)
{
    float nota1,nota2,nota3, media;
    printf("Informe a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Informe a nota da terceira prova: ");
    scanf("%f", &nota3);

    media = (nota1 * 1/6) + (nota2 * 2/6) + (nota3 * 3/6);


    printf("Media ponderada: %.2f\n", media);

    return 0;

}
