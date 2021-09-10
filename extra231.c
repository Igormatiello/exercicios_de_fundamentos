/*1) Ler 10 números inteiros e armazenar em um vetor. Validar as entradas para que sejam informados valores
positivos. Em listagens separadas:
a) Mostrar e contar os valores pares do vetor;
b) Mostrar os valores do vetor que divisíveis por 3 e por 5, contar a quantidade deles e mostrar essa
quantidade.
c) Mostrar e contar os valores do vetor que são menores que 10 ou maiores do que 100.
d) Mostrar e contar os valores do vetor que são maiores que 10 e os menores que 100.
e) Mostrar os ímpares e a quantidade de ímpares. Calcular o percentual dos ímpares em relação a
quantidade total de números.
O programa permanecerá em execução até que seja escolhida a opção sair
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{


    char repetir;
    do
    {


        int i,vetor[10],contPar=0,cont3e5=0,cont10e100=0,contBet=0,contImpar=0;
        float perc;

        for (i=0; i<10; i++)
        {

            do
            {
                printf("Informe o elemento que esta na posicao %d do vetor: ",i);
                scanf("%d",&vetor[i]);

                if (vetor[i]<=0)
                {
                    printf("Valor invalido!!\n");
                }
            }
            while(vetor[i]<=0);

        }
        printf("\n\n===PARES===\n");
        for (i=0; i<10; i++)
        {
            if (vetor[i]%2==0)
            {
                contPar++;
                printf("%d\t",vetor[i]);

            }

        }
        printf("\nExistem %d numeros pares no vetor\n",contPar);


        printf("\n\n===DIVISIVEIS POR 3 E POR 5===\n");
        for (i=0; i<10; i++)
        {
            if (vetor[i]%3==0 && vetor[i]%5==0)
            {
                cont3e5++;
                printf("%d\t",vetor[i]);

            }

        }
        printf("\nExistem %d numeros divisiveis por 3 e por 5 no vetor\n",cont3e5);



        printf("\n\n===MENORES QUE 10 OU MAIORES QUE 100===\n");
        for (i=0; i<10; i++)
        {
            if (vetor[i]<10 || vetor[i]>100)
            {
                cont10e100++;
                printf("%d\t",vetor[i]);

            }

        }
        printf("\nExistem %d numeros menores que 10 ou maiores que 100 no vetor\n",cont10e100);

        printf("\n\n===MAIORES QUE 10 E MENORES QUE 100===\n");
        for (i=0; i<10; i++)
        {
            if (vetor[i]>10 && vetor[i]<100)
            {
                contBet++;
                printf("%d\t",vetor[i]);

            }

        }
        printf("\nExistem %d numeros maiores que 10 e menores que 100 no vetor\n",contBet);


        printf("\n\n===IMPARES===\n");
        for (i=0; i<10; i++)
        {
            if (vetor[i]%2!=0)
            {
                contImpar++;
                printf("%d\t",vetor[i]);

            }

        }
        perc=((float)contImpar/10)*100;
        printf("\nExistem %d numeros impares respresentando %.2f%% dos elementos do vetor\n",contImpar,perc);




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}




