/*Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm3
), cuja fórmula é:
Volume = Comprimento * Largura * Altura
*/

#include <stdio.h>

int main(void)
{
    float volume, altura, comprimento, largura;
    printf("Informe o comprimento da caixa, em cm: ");
    scanf("%f", &comprimento);
    printf("Informe a largura da caixa, em cm: ");
    scanf("%f", &largura);
    printf("Informe a altura da caixa, em cm: ");
    scanf("%f", &altura);

    volume= (altura * largura * comprimento);

    printf("Volume total em cm^3: %.2f\n", volume);

    return 0;

}
