
/*

2) Uma pessoa aplicou R$ 1000,00 com rendimento de 5% ao mês. Quantos meses serão necessários para que o capital investido
ultrapasse R$ 1200,00.

*/
#include <stdio.h>



int main(void)
{
   float apli;
   int i,meses=0;

   for (apli=1000;apli<=1200;)
   {


       apli= apli+ (apli*0.05);
       meses=meses+1;
   }

   printf("Valor final: R$ %.2f\n",apli);
   printf("Serao necessarios %d meses para que o capital investido ultrapasse R$ 1.200,00.\n\n",meses);


    return 0;
}






