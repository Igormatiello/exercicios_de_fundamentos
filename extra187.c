
/*7) Sendo n um número positivo, apresentar as n primeiras raízes quadradas exatas. A função para obter a
raiz quadrada é a sqrt() e está na biblioteca math.h.




*/



#include <math.h>
#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int  n,i,validar=0;
        do{
        printf("Informe o valor de n: ");
        scanf("%d",&n);
        }while(n<=0);


        for (i=1; validar<n; i++)
        {
            if ((sqrt(i)-(int)sqrt(i))==0)
            {
                printf("%d => raiz de %.0f\n",i,(sqrt(i)));
                validar=validar+1;
            }


        }

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



