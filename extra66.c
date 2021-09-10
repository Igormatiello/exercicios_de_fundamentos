/*6) Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m2
, deve-se usar
18W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros),
calcule e mostre a sua área (em m2
) e a potência de iluminação que deverá ser utilizada. %.*/

#include <stdio.h>


int main(void)
{

    float com, larg, area, potencia;


    printf("Informe o comprimento do comodo, em metros: ");
    scanf("%f",&com);
    printf("Informe a largura do comodo, em metros: ");
    scanf("%f",&larg);
    area= com * larg;
    potencia= area* 18;



    printf("Area do comodo, em m^2:  %.1f\n",area );
    printf("Potencia de iluminacao que devera ser utilizada:W %.1f\n",potencia );








    return 0;

}
