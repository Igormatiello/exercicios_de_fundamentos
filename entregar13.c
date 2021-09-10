
/*3) Completar e corrigir o c�digo a seguir para:
a) Ler a quantidade somente se a categoria � v�lida.
b) Garantir que a quantidade seja maior que 0.
c) Validar para que n�o seja realizada uma divis�o por zero no c�lculo da m�dia.
d) Permitir a leitura da categoria nas execu��es sucessivas do programa.
e) Garantir que a m�dia seja float

*/




#include <ctype.h>
#include <stdio.h>


int main(void)
{

    char repetir;
    do
    {


        char categoria;
        int soma=0,quantidade, total=0;
        float media;
        soma=0;
        total=0;
        do
        {


            printf("Informe a categoria: ");
            setbuf(stdin,NULL);
            scanf("%c", &categoria);
            if (categoria=='A' || categoria=='B' || categoria=='a' || categoria=='b')
            {
                do
                {
                    printf("Informe a quantidade: ");
                    scanf("%d", &quantidade);
                }
                while(quantidade<=0);

                soma = soma + quantidade;
                total++;
            }


        }
        while(categoria == 'A' || categoria == 'B'|| categoria=='a' || categoria=='b');

        if (total!=0)
        {
            media = (float)soma / total;

            printf("A media dos produtos eh: %.2f", media);
        }

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;
}



