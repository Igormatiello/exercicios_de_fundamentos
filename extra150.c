
/*1) Ler um n�mero positivo, validar a entrada repetindo a leitura at� que seja informado um n�mero que
atende essa condi��o. Esse n�mero representa a quantidade de n�meros �mpares a serem mostrados.
Apresentar esses valores n por linha, sendo n um n�mero maior que zero, informado pelo usu�rio. Os valores
s�o apresentados separados por tabula��o. Fazer a m�dia dos n�meros �mpares mostrados.

*/
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int quant,i,contagem=0,soma=0,linha;
    char repetir;
    float media;
  do {

    contagem=0;
    soma=0;



   do{
        printf("Informe um numero: ");
        scanf("%d",&quant);

   }while(quant<0);
   do {
    printf("Informe quantos valores serao apresentados por linha: ");
    scanf("%d",&linha);
   }while(linha<0);

   for (i=1;contagem<quant;i++)
   {

       if (i%2!=0)
       {
           printf("%d\t",i);
           contagem=contagem+1;
           soma=soma+i;
       }
       if (contagem%linha==0)
       {
           printf("\n");

       }

   }
   media=(float)soma/contagem;
   printf("\n\nMedia: %.1f\n",media);


   printf("Deseja repetir o processo:(s ou n) ");
   setbuf(stdin,NULL);
   scanf("%c",&repetir);
    repetir=toupper(repetir);

  }while (repetir=='S');


    return 0;

}






