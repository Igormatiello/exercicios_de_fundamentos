/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica). Escrever um programa para, a
partir do custo de fábrica do carro, calcular e mostrar o custo ao consumidor.*/

 #include <stdio.h>
int main(void)
{
    float cusfabri, distri, imposto, custo;


    printf("Informe o custo de fabrica: ");
    scanf("%f", &cusfabri);
    printf("Informe o percentual do distribuidor: ");
    scanf("%f", &distri);
    printf("Informe o percentual de impostos: ");
    scanf("%f", &imposto);
    custo= cusfabri + ( cusfabri * (distri/100) + (cusfabri * (imposto/100)) );
    printf("Custo total:%.2f\n",custo);
    return 0;
}
