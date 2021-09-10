/*  Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:
a) Quantas vezes foi necessário abastecer o carro. (Use a função ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a distância indicada.
c) Quantos litros restaram no tanque após a chegada ao destino.
Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o consumo médio
do veículo, calcule e mostre as informações solicitadas.*/

#include <stdio.h>
#include <math.h>
int main(void)
{
    float dis, tanque, cm, abas, consumo, resto;

    printf("Informe a distancia entre duas cidades, em km: ");
    scanf("%f", &dis);
    printf("Informe a capacidade maxima do tanque: ");
    scanf("%f", &tanque);
    printf("Informe o consumo medio do veiculo, em km por litro: ");
    scanf("%f", &cm);
    abas= dis /(tanque * cm);
    consumo= dis/cm;
    resto= (abas * tanque) - consumo;
    printf("Foram necessarios %.1f litros de combustivel para percorrer o trajeto\n",consumo);
    printf("Foi necessario abastecer o carro %.0f vezes\n",(ceil)abas);
    printf("Restou no tanque de combustivel  %.1f litros\n",resto);

    return 0;
}
