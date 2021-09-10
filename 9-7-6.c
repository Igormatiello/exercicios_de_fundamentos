/*)6 Crie um programa que leia dia, mês e ano separadamente e imprima se a data é válida ou não.
*/

#include <stdio.h>
    int main(void)
    {
    int dia,mes,ano;

    printf("Informe o dia:");
    scanf("%d",&dia);
    printf("Informe o mes:");
    scanf("%d",&mes);
    printf("Informe o ano:");
    scanf("%d",&ano);

    if ((mes>13) || (mes<0) || (dia<0) ||(dia>32))
        {
        printf("Data invalida\n");
        }
    else
    {

         if (((mes ==1) &&(dia<=31)) || ((mes==(4) && (dia<=30))) || ((mes==2) && (dia<=28)) ||((mes ==3) &&(dia<=31)) || ((mes ==5) &&(dia<=31)) || ((mes ==5) &&(dia<=31)) || ((mes ==7) &&(dia<=31))
        || ((mes ==8) &&(dia<=31)) ||((mes ==10) &&(dia<=31)) || ((mes ==12) &&(dia<=31)) || ((mes ==6) &&(dia<=30)) ||((mes ==9) &&(dia<=30)) || ((mes ==11) &&(dia<=30)))

        {
            printf("Data valida\n");
            printf("dia:%d mes:%d ano:%d\n",dia,mes,ano);
        }
         else
        {
             printf("Data invalida\n");
        }
    }










    return 0;
    }
