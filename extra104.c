/*4) Leia dois valores que representam os limites de um intervalo. O usuário pode informar os valores em
ordem crescente ou decrescente. Validar para que o programa não aceite valores iguais para os limites do
intervalo. Mostre os divisíveis por x e não divisíveis por y nesse intervalo. x e y são variáveis informadas pelo
usuário*/
#include <stdio.h>


int main(void)
{
    int lim1, lim2, x,y,i;
    printf("Informe uma valor pra limite infeior do intervalo: ");
    scanf("%d",&lim1);
    printf("Informe uma valor pra limite superior do intervalo: ");
    scanf("%d",&lim2);
    printf("Informe um valor para X: ");
    scanf("%d",&x);
    printf("Informe um valor para Y: ");
    scanf("%d",&y);

    if (lim1!=lim2)
    {
        for (i=lim1; i<=lim2; i++)
        {
            if (((i%x)==0) && ((i%y)!=0))
            {
                printf("%d\t",i);
            }


        }



    }

    return 0;
}






