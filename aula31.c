

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


        float nota[5] = {6.7, 7.8,9.8, 5.2, 5.9},media;   //estrutura homogenea // indice começa em zero
        //printf("Digite a nota: ");
        //scanf("%d",&nota);
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




