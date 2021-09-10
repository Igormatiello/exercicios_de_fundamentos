
/*2) Alice e Beto s�o amigos e sempre que se encontram relembram os tempos de inf�ncia tirando par-ou�mpar para decidir quem escolhe o filme a ser assistido, ou qual o restaurante em que v�o almo�ar, etc.
Escreva um programa para determinar quem ganhou a s�rie de par-ou-�mpar. A primeira entrada deve ser um
valor que identifica a quantidade de jogos realizados, identificada pela vari�vel n, que deve ser um n�mero
maior que zero. A seguir deve-se ler os n resultados (R1, R2, R3, ..., Ri) dos jogos. Se Ri = 0 significa que Alice
ganhou o i-�simo jogo e se Ri = 1 Beto ganhou o i-�simo jogo, portanto, essa entrada deve ser validada para
aceitar somente o valor 0 ou o valor 1.

*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int jogos,i;
        do
        {
            printf("Informe o numero de jogos: ");
            scanf("%d",&jogos);
        }
        while(jogos<1);

        int vencedor, contBeto=0,contAlice=0;
        for (i=1; i<=jogos; i++)
        {




            do
            {
                printf("Informe o resultado do jogo: ");
                scanf("%d",&vencedor);
                if (vencedor!=0 && vencedor!=1)
                {
                    printf("Resultado invalido\n");
                }
            }
            while(vencedor!=0 && vencedor!=1);

            if (vencedor==0)
            {
                contAlice= contAlice+1;
            }
            if (vencedor==1)
            {
                contBeto=contBeto+1;
            }

        }
        printf("Alice ganhou %d jogo(s) e Beto ganhou %d jogo(s)\n",contAlice,contBeto);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



