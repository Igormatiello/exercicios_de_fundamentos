/*1) Use a biblioteca "Fatorial.h" (criada no Exercício 3 da Lista 1) para:
a) Calcular e mostrar o fatorial de um número informado pelo usuário.
b) Calcular e mostrar o fatorial dos números de 1 a 12.*/

#include <stdio.h>
#include <ctype.h>
#include "fatorial.h"

int main(void)
{
    char repetir;
    do{
    int num,i;

                printf("Informe um numero: ");
                scanf("%d",&num);


                if (num>=1)
                {

                    impri_fat(num);
                    res_primo(num);

                    printf("\n\n===Fatorial de 1 a 12===\n");
                for (i=1;i<=12;i++){
                    impri_fat(i);
                    res_primo(i);
                }
                }




printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');










}
