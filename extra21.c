 /*) Ler dois n�meros float e apresentar, sem utilizar fun��es matem�ticas prontas:
a) A divis�o do primeiro n�mero pelo segundo, armazenando somente a parte inteira do n�mero.
b) A soma dos dois n�meros com o resultado arredondado para o pr�ximo n�mero inteiro.
Obs.: As vari�veis de resultados devem ser do tipo int.*/

 #include <stdio.h>
int main(void)
{
    float num1,num2;
    int div, soma;

    printf("Primeiro valor: ");
    scanf("%f", &num1);
    printf("Segundo valor: ");
    scanf("%f", &num2);
    div= (float)num1 / num2;
    printf("Resultado da divisao: %d\n", div);
    soma= (num1 + num2)+ 0.99999;
    printf("Resultado da soma: %d\n", soma);
    return 0;
}

