

#include <stdio.h>
#include <ctype.h>

int funcao24()
{


}
int main(void)
{


    char repetir;

    do
    {
        int tam;
        printf("Informe a quantidade de notas: ");
        scanf("%d",&tam);

        float nota[tam],media=0;    //estrutura homogenea // indice começa em zero


        int i;
        for (i=0; i<tam; i++)
        {
            printf("Informe a nota %d: ",i);
            scanf("%f",&nota[i]);
            media=media+nota[i];
        }

        printf("====VETOR=====\n");
        for (i=0; i<tam; i++)
        {
            printf("%.2f\t",nota[i]);

        }
        printf("\nMedia: %.2f\n",media/i);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}




