

#include <stdio.h>
#include <ctype.h>


int main(void)
{


    char repetir,caracteres[10];

    do
    {
        int vogais[5]={0,0,0,0,0},i,j=0;

        for (i=0; i<10; i++){

        printf("Informe o caractere para a posicao %d do vetor: ",i);
        setbuf(stdin,NULL);
        scanf("%c",&caracteres[i]);


        }
    printf("\n\n====VETORES====\n\n");


    for (i=0; i<10; i++)
    {

        printf("%c\t",caracteres[i]);
        if (caracteres[i]=='a' || caracteres[i]=='A')
        {
            vogais[0]++;

        }
         if (caracteres[i]=='e' || caracteres[i]=='E')
        {
            vogais[1]++;

        }
         if (caracteres[i]=='I' || caracteres[i]=='i')
        {
            vogais[2]++;

        }
         if (caracteres[i]=='o' || caracteres[i]=='O')
        {
            vogais[3]++;

        }
         if (caracteres[i]=='u' || caracteres[i]=='U')
        {
            vogais[4]++;

        }

    }


    printf("\n\nVETOR DE VOGAIS\n\n");





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
return 0;

}




