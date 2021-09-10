/*Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na
diária. Sendo informados o número de apartamentos do hotel e o valor da diária por apartamento para o final
de semana completo. Elaborar um programa para calcular:
a) Valor promocional da diária;
b) Valor total caso a ocupação no final de semana atinja 100%;
c) Valor total a ser arrecadado caso a ocupação no final de semana atinja 70%;
d) Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%*/
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

    printf("O valor da diaria promocioanl:R$ %.2f\n", diariapro);
    printf("O valor arrecadado com 100%% de ocupaçao:R$ %.2f\n", promototal);
    printf("O valor arrecadado com 70%% de ocupaçao:R$ %.2f\n", promoparcial);
    printf("O valor que deixara de arrecadar ao aplicar o desconto:R$ %.2f\n", desconto);




    return 0;

}
