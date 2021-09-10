

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


        float nota[5] ,media;   //estrutura homogenea // indice começa em zero
        //printf("Digite a nota: ");
        //scanf("%d",&nota);

        nota[0]=10;
        nota[1]=9;
        nota[2]=3;
        nota[3]=6;
        nota[4]=7;


        printf("%.1f\n",nota[0]);
        printf("%.1f\n",nota[1]);
        printf("%.1f\n",nota[2]);
        printf("%.1f\n",nota[3]);
        printf("%.1f\n",nota[4]);
        //printf("Media: %.2f\n",media);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}




