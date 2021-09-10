
/*1) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que
atende essa condição. Esse número representa a quantidade de números ímpares a serem mostrados.
Apresentar esses valores n por linha, sendo n um número maior que zero, informado pelo usuário. Os valores
são apresentados separados por tabulação. Fazer a média dos números ímpares mostrados.

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






