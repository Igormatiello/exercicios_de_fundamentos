
/*6) Apresentar os n primeiros n�meros pares e divis�veis por 3 informados pelo usu�rio (validar para que n
seja diferente de 0). Se o usu�rio informar um n�mero negativo transform�-lo em positivo (sem usar fun��es
prontas) antes de utilizar.
Por exemplo, se o usu�rio informar 4, o programa dever� mostrar os quatro primeiros n�meros pares que s�o
divis�veis por tr�s: 0, 6, 12 e 18
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



