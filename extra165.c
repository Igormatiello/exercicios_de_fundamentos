
/*5) Sabendo-se que na matem�tica os n�meros primos come�am a partir do 2, solicite ao usu�rio que forne�a
o valor do limite superior de um intervalo (validar para que seja maior que 2). O programa dever� fornecer
todos os n�meros primos presentes no intervalo. Por exemplo, se o usu�rio informar 10, o programa dever�
fornecer todos os n�meros primos entre 2 e 10, que s�o 2, 3, 5 e 7.
*/




#include <ctype.h>
#include <stdio.h>
int main(void)



   {
        char repetir;
    do {
    int limite,i,j,validacao;


    do {
    printf("Informe um valor para o limite superior do intervalo: ");
    scanf("%d",&limite);

    }while (limite<2);


    for (j=2; j<limite;j++)
    {
        validacao=0;
        for (i=(j-1); i>=2; i--)
        {


            if (j%i==0)
        {
           validacao=1;
        }
        }
        if (validacao==0)
        {
            printf("%d\t",j);
        }


    }


     printf("\n\nDeseja repetir o processo:(s ou n) ");
   setbuf(stdin,NULL);
   scanf("%c",&repetir);
    repetir=toupper(repetir);

 }while (repetir=='S');

    return 0;

}



