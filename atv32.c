/*2) Ler tr�s valores inteiros diferentes, encontrar e mostrar o n�mero do meio. Deve ser criada uma vari�vel
para armazenar o n�mero do meio
*/
#include <stdio.h>


int main(void)
{


    float num1,num2,num3,medio;

    printf("Informe o primeiro valor: ");
    scanf("%f",&num1);
    printf("Informe o segundo valor: ");
    scanf("%f",&num2);
    printf("Informe o terceiro valor: ");
    scanf("%f",&num3);

    if (( num1 < num2) && (num1 > num3) || ( num1 > num2) && (num1 < num3))
        {
            medio=num1;
            printf("O valor medio eh: %.2f",medio);
        }
     if (( num2 < num1) && (num2 > num3) || ( num2 > num1) && (num2 < num3))
        {
            medio=num2;
            printf("O valor medio eh: %.2f",medio);
        }

      if (( num3 < num2) && (num3 > num1) || ( num3 > num2) && (num3 < num1))
        {
            medio=num3;
            printf("O valor medio eh: %.2f",medio);
        }


    return 0;

}
