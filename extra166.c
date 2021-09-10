
/*6) Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário (validar para que n
seja diferente de 0). Se o usuário informar um número negativo transformá-lo em positivo (sem usar funções
prontas) antes de utilizar.
Por exemplo, se o usuário informar 4, o programa deverá mostrar os quatro primeiros números pares que são
divisíveis por três: 0, 6, 12 e 18
*/




#include <ctype.h>
#include <stdio.h>
int main(void)



   {
        char repetir;
    do {
       int limite,i,contagem;
       do {
       printf("Quantos numeros pares divisiveis por 3 quer mostrar? ");
       scanf("%d", &limite);
       }while(limite==0);
       if (limite<0)
       {
           limite=limite*(-1);
       }
        contagem=0;
       for (i=0; contagem<limite;i++)
       {

           if (i%2==0 && i%3==0)
           {
               printf("%d\t",i);
               contagem=contagem+1;
           }
       }
         printf("\n\nDeseja repetir o processo:(s ou n) ");
   setbuf(stdin,NULL);
   scanf("%c",&repetir);
    repetir=toupper(repetir);

 }while (repetir=='S');



    return 0;

}



