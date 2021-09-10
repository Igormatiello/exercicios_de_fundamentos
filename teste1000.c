
/*8) Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser mostrada. Validar a entrada,
garantindo que o valor informado para a quantidade seja do tipo inteiro e maior que 0.




*/



#include <math.h>
#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
   char ch;
   printf("Informe: ");
   setbuf(stdin,NULL);
   scanf("%c",&ch);

   if (ch>='A' && ch<='^')
   {
       printf("Aceito\n");
   }
    printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');

    return 0;

}



