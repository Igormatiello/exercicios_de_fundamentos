/*  Um viajante de carro far� o trajeto entre duas cidades e ao t�rmino da viagem deseja saber:
a) Quantas vezes foi necess�rio abastecer o carro. (Use a fun��o ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a dist�ncia indicada.
c) Quantos litros restaram no tanque ap�s a chegada ao destino.
Fa�a um programa que leia a dist�ncia entre as duas cidades, a capacidade do tanque e o consumo m�dio
do ve�culo, calcule e mostre as informa��es solicitadas.*/

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
