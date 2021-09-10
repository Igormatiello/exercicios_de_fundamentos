/* Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e
mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já
imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as expressões e depois
implementar o algoritmo para calcular os resultados.*/
#include <stdio.h>
int main(void)
{
    int x,y,resint,resto;
    float resflo;
    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de Y: ");
    scanf("%d", &y);
    resflo=(((float)x+y)/y) * pow(x,2);
    printf("a):%f\n",resflo);
    resflo= ( (float)x + y) /(x-y);
    printf("b):%f\n",resflo);
    resflo= (pow(x,2)+ pow(y,3))/ (float)2;
    printf("c):%f\n",resflo);
    resflo= pow((float)x,3)/ pow(x,2);
    printf("d):%f\n",resflo);
    resint= x % y;
    printf("e):%d\n",resint);
    resint= x % 3;
    printf("e):%d\n",resint);
    resint= y % 5;
    printf("e):%d\n",resint);
    return 0;
}
