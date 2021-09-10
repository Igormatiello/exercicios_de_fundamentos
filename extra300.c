/* Ler um número double. Separar a parte inteira e a parte decimal desse número. Apresentar a parte decimal
como um valor double e como um inteiro de três dígitos. Da parte inteira separar o número que representa
unidade, dezena e centena e mostrar.*/

#include <stdio.h>
    int main(void)

{
    double valor, decimal, decimalinteira;
    int inteira, decimalint, centena, dezena, unidade;
    printf("Informe um valor double: ");
    scanf("%lf", &valor);
    printf("Numero informado: %lf\n", valor);

    inteira= (int)valor;
    printf("Parte inteira: %d\n", inteira);
    decimal= valor - (double)inteira;
    printf("Parte decimal: %lf\n", decimal);
    decimalinteira= decimal *1000;
    decimalint= (int)decimalinteira;
    printf("Parte decimal como inteira de tres digitos: %d\n", decimalint);
    centena= (inteira/100);
    dezena= (int) valor - (centena *1000);
    unidade=(int) valor - (centena *100)- (dezena*10);
    printf("Centena: %d\n",centena);
    printf("Dezena: %d\n",dezena);
    printf("Unidade: %d\n",unidade);







    return 0;
}
