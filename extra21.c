 /*) Ler dois números float e apresentar, sem utilizar funções matemáticas prontas:
a) A divisão do primeiro número pelo segundo, armazenando somente a parte inteira do número.
b) A soma dos dois números com o resultado arredondado para o próximo número inteiro.
Obs.: As variáveis de resultados devem ser do tipo int.*/

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

