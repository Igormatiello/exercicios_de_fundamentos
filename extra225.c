/*5) Copiar todas as funções criadas nos exercícios anteriores para dentro de uma biblioteca chamada
"diversos.h". Fazer um programa que use essa biblioteca e tenha o seguinte menu de opções (use switchcase):
1 - Calcula o quadrado de um numero
2 - Converte centímetros para polegadas
3 - Converte um valor para dólar ou real
4 - Multiplica dois números
Opção:

 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include "diversos.h"



int main(void)
{


    char repetir,tipo;
    float valor,conv;
    int opcao,i,inf,sup,num,num1,num2;
    do
    {
        printf("1 - Calcula o quadrado de um numero\n");
        printf("2 - Converte centimetros para polegadas\n");
        printf("3 - Converte um valor para dolar ou real\n");
        printf("4 - Multiplica dois numeros\n");
        printf("Opcao: ");
        scanf("%d",&opcao);


        if (opcao==1)
        {
            printf("Informe um numero: ");
            scanf("%d",&num);
            printf("Quadrado: %d\n",funcao21(num));
        }


        if (opcao==2)
        {

            printf("Informe uma medidade em centimetros: ");
            scanf("%d",&num);

            printf("Polegadas: %.2f\n",funcao22(num));

        }


        if (opcao==3)
        {
            printf("Informe um valor que deseja converter: ");
            scanf("%f",&valor);
            printf("Informe o valor da cotacao: ");
            scanf("%f",&conv);
            printf("Informe o tipo de conversao(D/d para Dolar ou R/r para Real): ");
            setbuf(stdin,NULL);
            scanf("%c",&tipo);
            tipo=toupper(tipo);

            printf("Valor convertido: %.2f\n",funcao23(valor,conv,tipo));

        }


        if (opcao==4)
        {
            printf("Informe um numero: ");
            scanf("%d",&num1);
            printf("Informe outro numero: ");
            scanf("%d",&num2);



            printf("%d * %d = %d\n",num1,num2,funcao24(num1,num2));



        }










        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}




