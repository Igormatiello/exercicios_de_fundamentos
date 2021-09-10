/*

12) Faça um programa que imprima os n (indicado pelo usuário) primeiros números pares (começa em 0).
Apresente 5 valores por linha.

*/
#include <stdio.h>



int main(void)


{

        int pares,i,contagem=0;
            printf("Quantos numeros pares quer mostrar: ");
            scanf("%d",&pares);

            for (i=0; i<=((pares*2)-1);)
            {
                printf("%d\t",i);
                contagem=contagem+1;
                if (contagem%5==0)
                {
                    printf("\n");
                }




                i=i+2;
            }




    return 0;
}






