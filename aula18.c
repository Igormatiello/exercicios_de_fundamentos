//DO WHILE
#include <stdio.h>
int main(void)
{
        int num;
        char opcao;
        do
        {

           do
            {
            printf("Informe um numero: ");
            scanf("%d",&num);

            if (num<0)
            {
                printf("Valor invalido\n");
            }



            }while (num<0);
            printf("\nDeseja repetir a execucao do programa(S/s)?");
            setbuf(stdin,NULL);
            scanf("%c",opcao);
            }while (opcao=='S' || opcao =='s');



    return 0;
}
