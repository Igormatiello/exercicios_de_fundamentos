
/*8) Apresentar os números primos em ordem crescente entre dois valores informados pelo usuário, com x
valores por linha. Validar as entradas para que sejam valores positivos.




*/


#include <ctype.h>
#include <stdio.h>
int main(void)



   {
        char repetir;
    do {
    int limite,i,j,limite1,validacao,linha,contagem=0;

    do{
            printf("Informe um valor para o limite superior do intervalo: ");
    scanf("%d",&limite1);

    }while(limite1<1);

    do {
    printf("Informe um valor para o limite superior do intervalo: ");
    scanf("%d",&limite);

    }while (limite<1);
    do{
        printf("Informe quantos numeros primos deseja mostrar por linha: ");
        scanf("%d",&linha);

    }while(linha<1);


    for (j=limite1; j<limite;j++)
    {
        validacao=0;
        for (i=(j-1); i>=2; i--)
        {


            if (j%i==0)
        {
           validacao=1;
        }
        }
        if (validacao==0 && j!=1)
        {
            printf("%d\t",j);
            contagem=contagem+1;

        }
        if (contagem%linha==0)
        {
            printf("\n");
        }


    }


     printf("\n\nDeseja repetir o processo:(s ou n) ");
   setbuf(stdin,NULL);
   scanf("%c",&repetir);
    repetir=toupper(repetir);

 }while (repetir=='S');

    return 0;

}


