/*Escreva um programa para ler o n�mero de votos brancos, nulos (incluem eleitores ausentes) e v�lidos de
uma elei��o. Calcular e mostrar o percentual que cada um (brancos, nulos e v�lidos) representa em rela��o
ao total de eleitores. Lembrar que os valores dos percentuais podem n�o ser inteiros.*/

#include <stdio.h>
int main(void)
{
    float branco,nulo,validos,total, porbranco, pornulo, porvalidos;

    printf("Informe o numero de votos validos: ");
    scanf("%f", &validos);
    printf("Informe o numero de votos em branco: ");
    scanf("%f", &branco);
    printf("Informe o numero de votos nulos: ");
    scanf("%f", &nulo);

    total= branco+ nulo+validos;
    porbranco= branco*100 / total;
    pornulo= nulo*100 / total;
    porvalidos= validos*100 / total;

    printf("Numero de votos validos %.1f\n",porvalidos);
    printf("Numero de votos em branco %.1f\n",porbranco);
    printf("Numero de votos nulos %.1f\n",pornulo);
    return 0;
}
