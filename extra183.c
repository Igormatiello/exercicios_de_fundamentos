
/*3) Ler dois números que representam os limites de um intervalo. Ler primeiro o valor do limite inferior, que
deve ser positivo e, em seguida, ler o valor do limite superior, que deve ser maior que o limite inferior. Validar
as entradas. Apresentar os pares e divisíveis por 3 de cada um dos valores do intervalo da seguinte forma:



*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{

     char repetir;
    do
    {
        int lim1,lim2,j,i,validar=0;
        do {
            printf("Imforme um valor para limite inferior do intervalo: ");
     scanf("%d",&lim1);


     }while(lim1<=0);

    do {
    printf("Informe um valor para o limite superior do intervalo: ");
    scanf("%d",&lim2);

    }while (lim2<=lim1);


    for (i=lim1; i<=lim2; i++)
    {
        printf("\n%d = ",i);
        for (j=1; j<=i;j++)
        {
            if (j%2==0 && j%3==0)
            {
                printf("%d ",j);
                validar=1;
            }




        }
        if (validar==0)
            {
                printf("Nenhum");
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



