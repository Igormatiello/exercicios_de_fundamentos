/*5) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
a) A soma desses valores;
b) A subtra��o do primeiro pelo segundo;
c) A multiplica��o entre eles;
d) A divis�o inteira do primeiro pelo segundo;
e) A divis�o float do primeiro pelo segundo;
f) O resto da divis�o do primeiro pelo segundo.*/

#include <stdio.h>

int main(void)
{
    float num1,num2, soma, sub, multi,divfloat;
    int divint, resto;
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    soma= num1 +num2;
    sub= num1-num2;
    multi= num1 * num2;
    divfloat= num1 /num2;
    divint= (int)num1 / (int) num2;
    resto= (int)num1 % (int)num2;

    printf("Soma: %.2f\n", soma);
    printf("Subtra�ao: %.2f\n", sub);
    printf("Multiplica�ao: %.2f\n", multi);
    printf("Divisao float: %.2f\n", divfloat);
    printf("Divisao inteira: %d\n", divint);
    printf("Resto: %d\n", resto);
    return 0;

}
