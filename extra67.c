/*7)Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e
mostre a hora digitada apenas em minutos. Lembre-se de que:
- Para quatro e meia, deve-se digitar 4.30.
- Os minutos vão de 0 a 59.. %.*/

#include <stdio.h>


int main(void)
{

    float horario ;
    int horas,minutos, equivale, total, total2;

    printf("Informe a hora (ex 4.30: ");
    scanf("%f",&horario);

    horas= (int)horario;
    total= horario*100;
    total2=horas*100;
    minutos= total % total2;
    equivale= minutos + (horas *60);


    printf("Horas:%d\n",horas );
    printf("minutos:%d\n",minutos );
    printf("Equivalem a: %d minutos\n",equivale);








    return 0;

}
