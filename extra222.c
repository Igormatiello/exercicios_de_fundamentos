/*2) Sabendo-se que 1cm = 0,393701 polegadas, fazer uma função que converte de centímetros para
polegadas. Usar essa função para:
a) Mostrar o valor em polegadas de um determinado valor informado pelo usuário.
b) Imprimir uma tabela de conversão de centímetros para polegadas entre 1 a 20.

 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
float funcao22(int num)
{
    float convert;
    convert=num * 0.393701;
    return(convert);
}
int main(void)
{
    int inf,sup,i;
    int num;
    char repetir;
    do
    {



        printf("Informe uma medidade em centimetros: ");
        scanf("%d",&num);

        printf("O equivalente em polegadas eh: %f\n",funcao22(num));



        printf("===TABELA DE CONVERSAO==\nCENTIMETROS\tPOLEGADAS\n\n");


        for(i=1; i<=20; i++)
        {
            printf("%d\t\t%.2f\n",i,funcao22(i));
        }








        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}




