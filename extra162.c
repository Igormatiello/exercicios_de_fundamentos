
/*2) Escreva um programa que imprima todas as possibilidades de que no lan�amento de dois dados a soma
das faces seja um valor informado pelo usu�rio. O usu�rio deve informar um valor v�lido entre 2 a 12. Repetir
a leitura at� que o usu�rio informe um valor v�lido.

*/




#include <ctype.h>
#include <stdio.h>
int main(void)

{
    int res;
    char repetir;
    do {
    do {
    printf("Informe um valor entre 2 a 12: ");
    scanf("%d",&res);
    }while (res>12 || res<2);

    int face1,face2;
    for (face1=1;  face1<=6; face1++)
    {
        for ( face2=6; face2>=1; face2--)
        {


        if ((face1+face2)==res)
        {
            printf("%d + %d = %d\n",face1,face2,res);
        }
        }

    }
     printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }while (repetir=='S');



    return 0;

}

