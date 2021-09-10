
/*4) Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento mensal obtido por
esta aplicação e o período do investimento; e retorne o valor da aplicação ao final do período de investimento.
Obs.: A cada 12 meses o percentual de rendimento deve ser aumentado em 0,25%. Validar o valor da
aplicação para que seja positivo. Validar o percentual de rendimento para que seja um número entre 0 e 1.
Validar o período para que seja um valor positivo
*/




#include <ctype.h>
#include <stdio.h>
int main(void)

{
    float apli,perc;
    int tempo;
    char repetir;
    do {
            do{
   printf("Informe o valor da aplicacao: R$ ");
   scanf("%f",&apli);

   }while(apli<0);
   do {
   printf("Informe o percentual de rendimento mensal (0 a 1): ");
   scanf("%f",&perc);
   }while(perc<0 || perc>1);

   do{
   printf("Informe o periodo (em meses): ");
    scanf("%d",&tempo);
   }while (tempo<=0);
     printf("MES\t");
     printf("%% DE RENDIMENTO\t");
     printf("VALOR APLICACAO\n");
     int i,contador=1;
     float  valor=0;

    for (i=1; i<tempo; i++)
    {
        printf("%d\t",i);
        printf("%.2f\t",perc);
        valor=apli+(apli*perc);
        apli=valor;
        printf("R$ %.2f\n",valor);
        contador=contador+1;

        if (contador %12 == 0)
        {
            perc=perc+0.25;
        }


    }
    printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }while (repetir=='S');


    return 0;

}

