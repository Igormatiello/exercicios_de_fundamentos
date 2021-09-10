
/*1) Um determinado material radioativo perde metade de sua massa a cada 60 segundos. Dada a massa
inicial, em gramas, fazer um programa que determine o tempo necessário para que essa massa se torne
menor que 0,5 gramas. A massa inicial informada pelo usuário tem que ser maior que zero. Validar essa
entrada, isto é, ficar repetindo a leitura da massa inicial até que o usuário informe um valor válido (maior que
zero). O programa deverá mostrar a massa final e o tempo calculado em minutos.

*/




#include <ctype.h>
#include <stdio.h>
int main(void)

{
    char repetir;
    float massa1;
    do {
    do {
    printf("Informe o valor da massa inicial: ");
    scanf("%f",&massa1);
    }while(massa1<=0);
    int tempo,conttempo=0;

    for (tempo=1; massa1 >= 0.5 ;)
    {
        massa1=massa1/2;
        conttempo=conttempo+1;
    }
    printf("A massa final eh: %.2f\n",massa1);
    printf("Serao necessarios %d minuto(s) para atingir a massa final.\n",conttempo);

     printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }while (repetir=='S');


    return 0;

}

