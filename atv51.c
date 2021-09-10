/*Um hotel deseja fazer uma promo��o especial de final de semana, concedendo um desconto de 25% na
di�ria. Sendo informados o n�mero de apartamentos do hotel e o valor da di�ria por apartamento para o final
de semana completo. Elaborar um programa para calcular:
a) Valor promocional da di�ria;
b) Valor total caso a ocupa��o no final de semana atinja 100%;
c) Valor total a ser arrecadado caso a ocupa��o no final de semana atinja 70%;
d) Valor que o hotel deixar� de arrecadar em virtude da promo��o, caso a ocupa��o atinja 100%*/
#include <stdio.h>

int main(void)
{
    float diaria, aps, diariapro,promoparcial, promototal,desconto;
    printf("Informe o valor da diaria: ");
    scanf("%f", &diaria);
    printf("Informe a quantidade de apartamentos: ");
    scanf("%f", &aps);

    diariapro= diaria - (diaria *0.25);
    promototal= diariapro * aps * 2.0;
    promoparcial= (aps * 0.7) * diariapro * 2;
    desconto=  (diaria * aps * 2) - (diariapro * aps *2);

    printf("Valor da diaria promocioanl: %.2f\n", diariapro);
    printf("Valor com total de ocupa�ao: %.2f\n", promototal);
    printf("Valor com parte da ocupa�ao: %.2f\n", promoparcial);
    printf("Valor do desconto: %.2f\n", desconto);




    return 0;

}
