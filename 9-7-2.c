
/*2) Ler dois n�meros inteiros e informar:
a) Se ambos s�o divis�veis por 5.
b) Se pelo menos um deles � divis�vel por 5.
c) Se ambos s�o pares.
d) Se pelo menos um deles � �mpar.*/
#include <stdio.h>
    int main(void)
    {
    int num1,num2,resto;

    printf("Informe o primeiro valor: ");
    scanf("%d",&num1);
    printf("Informe o segundo valor: ");
    scanf("%d",&num2);
    if (((num1%5)==0)&& (num2%5==0))
    {
        printf("%d e %d sao divisiveis por 5\n",num1,num2);
    }
    else
    {


    if (((num1%5)==0) || (num2%5==0))
    {
     printf("Pelo menos um deles eh divisivel por 5\n");
    }
    else
    {
        printf("Nenhum deles eh divisivel por 5\n");
    }
    }


     if (((num1%2)==0)&& (num2%2==0))
    {
        printf("%d e %d sao pares\n",num1,num2);
    }
     if (((num1%2)!=0) || (num2%2!=0))
    {
     printf("Pelo menos um deles eh impar\n");
    }



    return 0;
    }
