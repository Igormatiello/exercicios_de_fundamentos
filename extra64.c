/*Dado um número inteiro de 3 algarismos, inverter a ordem de seus algarismos. Os três algarismos
do número dado são diferentes de zero. Utilize os operadores / e %.*/

#include <stdio.h>


int main(void)
{

    int int1,dig2, dig1, dig3;


    printf("Informe um numero inteiro com 3 algarismos: ");
    scanf("%d",&int1);
    dig1= int1 / 100;
    dig2= (int1 % 100) /10;
    dig3= (int1 % 100) - (dig2 * 10);


    printf("Numero inteiro invertido eh: %d%d%d\n",dig3,dig2,dig1 );








    return 0;

}
