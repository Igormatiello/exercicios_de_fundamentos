
/*4) Apresentar os números primos entre dois valores, que representam os limites inferior e superior,
respectivamente, de um intervalo, informados pelo usuário. Apresentá-los com n números por linha. n é
informado pelo usuário. Validar n para que seja maior que 0. Validar o limite inferior para seja maior que 1 e o
limite superior para que seja maior ou igual ao limite inferior. Implementar a repetição de programa

*/




#include <ctype.h>
#include <stdio.h>


int main(void)
{
    char repetir;



    do
    {
        int lim1,lim2,linha;


        do
        {
            printf("Informe o valor do limite inferior do intervalo: ");
            scanf("%d",&lim1);

        }
        while (lim1<=1);

        do
        {
            printf("Informe o valor do limite superior do intervalo: ");
            scanf("%d",&lim2);

        }
        while (lim2<lim1);



        do
        {
            printf("Informe quantos numeros deseja imprimir por linha: ");
            scanf("%d",&linha);

        }
        while(linha<=0);

        int i,j,contPrimo,contLinha;
        contLinha=0;
        for (i=lim1; i<=lim2; i++)
        {

            contPrimo=0;
            for (j=(i-1); j>=2; j--)
            {

                if (i%j==0)
                {
                    contPrimo=contPrimo+1;

                }

            }
            if (contPrimo==0)
            {

                printf("%d\t",i);
                contLinha=contLinha+1;

            }
            if (contLinha==linha)
            {
                printf("\n");
                contLinha=0;
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
