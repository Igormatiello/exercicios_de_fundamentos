
/*6) Ler dois valores que representam os limites do intervalo. Apresentar os valores pares e divisíveis por cinco
desse intervalo em ordem decrescente. O usuário pode informar os valores em ordem crescente ou
decrescente



*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int lim1,lim2,superior,inferior,i;

            printf("Imforme um valor para limite inferior do intervalo: ");
     scanf("%d",&lim1);





    printf("Informe um valor para o limite superior do intervalo: ");
    scanf("%d",&lim2);

    if (lim1>=lim2)
    {
        superior=lim1;
        inferior=lim2;
    }
    else
    {
        superior=lim2;
        inferior=lim1;
    }
printf("==== VALORES PARES E DIVISIVEIS POR 5 EM ORDEM DESCRESCENTE ====\n");

    for (i=superior; i>=inferior;i--)
    {
        if (i%5==0 && i%2==0 )
        {
            printf("%d\t",i);
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



