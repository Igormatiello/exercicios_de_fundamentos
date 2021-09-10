/*Dado um número inteiro de 3 algarismos, inverter a ordem de seus algarismos. Os três algarismos
do número dado são diferentes de zero. Utilize os operadores / e %.*/

#include <stdio.h>


int main(void)
{

    float compis, voltas, pits, cm, per, periodo, combustivel;


    printf("Informe o comprimento da pista, em km: ");
    scanf("%f",&compis);
    printf("Informe o numero de voltas a serem percorridas: ");
    scanf("%f",&voltas);
    printf("Informe o numero de reabastecimentos desejados: ");
    scanf("%f",&pits);
    printf("Informe o consumo medio de combustivel do carro, em km/l: ");
    scanf("%f",&cm);

    per= compis * voltas;
    periodo= per/pits;
    combustivel= periodo/cm;

    printf("Percurso:Km %.1f\n",per );
    printf("Periodo:Km %.1f\n",periodo );
    printf("Combustivel necessario, em litros, ate o primeiro reabastecimento: %.1f\n",combustivel);







    return 0;

}
