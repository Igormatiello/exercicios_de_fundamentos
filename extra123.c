
/*

3) Ler números informados pelo usuário. Parar a leitura quando informado um número negativo ou 0. Esse número não deve ser
considerado na contagem. Contar e mostrar quantos números divisíveis por 5 e pares foram informados.

*/
#include <stdio.h>



int main(void)
{
    int contagem=0,num;
    for (num=1; num>0;)
    {
        printf("Informe um numero: ");
        scanf("%d",&num);

        if((num%5==0) && (num%2==0))
        {
            contagem=contagem+1;
        }
    }

        printf("Quantidade de numeros divisiveis por 5 e pares foram informados: %d\n",contagem-1);


    return 0;
}






