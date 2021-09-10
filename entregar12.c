
/*2) Uma empresa deseja calcular a depreciação de seus bens. Para tanto, desenvolver um programa que
obtenha a taxa de depreciação anual para os bens, o valor do bem a ser depreciado e o período em anos.
Valor depreciado = valor do bem * (taxa de depreciação / 100)
Valor do bem depreciado = valor do bem – valor depreciado
Mostrar os resultados como no exemplo a seguir:

*/



#include <stdio.h>
int main(void)



{


    int tempo,i;
    float bemInicial, taxa,depreciacao,valorDepre,acumulado=0;

    printf("Informe a taxa de depreciacao anual para o bem (de 0 a 100) : ");
    scanf("%f",&taxa);

    printf("Informe o valor do bem a ser depreciado: ");
    scanf("%f",&bemInicial);

    printf("Informe o periodo de depreciacao (em anos): ");
    scanf("%d",&tempo);


    printf("  Ano\t    Valor do bem\t Depreciacao\t Valor depreciado\n==============================================================\n");
    for (i=1; i<=tempo; i++)
    {
        printf("%3d\t\t",i);
        printf("%5.2f\t\t",bemInicial);
        depreciacao=bemInicial * (taxa/100);
        printf("%5.2f\t\t",depreciacao);
        valorDepre=bemInicial-depreciacao;
        printf(" %5.2f\n",valorDepre);
        bemInicial=valorDepre;
        acumulado=depreciacao+acumulado;

    }
    printf("\n===================================================================\n");
    printf("Depreciacao acumulada: %.2f\n",acumulado);

    return 0;

}



