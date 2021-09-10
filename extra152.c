
/*2) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que
atende essa condição. Esse número representa a quantidade de números primos a serem mostrados.
*/




#include <ctype.h>
#include <stdio.h>
int main(void)

{
        char repetir;
    do {
    int quant,contagemprimo=0,i,j,multiplos=0;


    do {
    printf("Informe a quantidade de numeros primos que serao mostrados: ");
    scanf("%d",&quant);

    }while (quant<0);

    if (quant>0){
    for (j=2; contagemprimo<quant;j++)
    {
        multiplos=0;



        for (i=(j-1); i>=2; i--)
        {

            if (j%i==0)
        {
            multiplos=1;
        }
        }
    if (multiplos==0)
        {
            contagemprimo=contagemprimo+1;
        printf("%d\t",j);
        }


    }
    }
    contagemprimo=0;
     printf("\n\nDeseja repetir o processo:(s ou n) ");
   setbuf(stdin,NULL);
   scanf("%c",&repetir);
    repetir=toupper(repetir);

 }while (repetir=='S');

    return 0;

}




