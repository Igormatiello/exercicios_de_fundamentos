
/*(Desafio) Implemente um algoritmo que l� n�meros informados pelo usu�rio. O algoritmo deve parar quando
informado um n�mero negativo. Para cada n�mero lido, exceto o n�mero negativo que representa a sa�da, o algoritmo
deve imprimir a quantidade de d�gitos do n�mero informado.
Observa��o: Desconsidere 0 como d�gito se o mesmo estiver no in�cio do n�mero

*/
#include <stdio.h>
int main(void)
{
    int  num=1,contador;
    while(num >= 0)
    {

        contador=0;
        num=1;
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num >= 0)
        {


            while(num != 0)
            {
                if (num>=0)
                {
                contador=contador+1;
                num=num/10;

                }
            }
              printf("Quantidade de digitos: %d\n", contador);
        }

    }




return 0;

}






