/*O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de f�brica). Escrever um programa para, a
partir do custo de f�brica do carro, calcular e mostrar o custo ao consumidor.*/

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
