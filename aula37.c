

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
void terceira(int vetor[], int tamanho);
void gerarVetorDe0aLimite(int vetor[], int tamanho, int limite);
void segunda(int vetor[], int tamanho, int limite);

int main(void)
{


    char repetir,caracteres[10];

    do
    {
        int tam,lim,i;
        printf("Informe o tamanho do vetor: ");
        scanf("%d",&tam);
        printf("Informe o limite para sortear os elementos do vetor: ");
        scanf("%d",&lim);
        int vetor[tam];

   gerarVetorDe0aLimite(vetor,tam,lim);
   segunda(vetor,tam,lim);
   terceira(vetor,tam);
























        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
return 0;

}



void gerarVetorDe0aLimite(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for (i=0; i<tamanho; i++)
    {

        vetor[i]=rand() % (limite+1);



    }



}




void segunda(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for (i=0; i<tamanho; i++)
    {

        vetor[i]=rand() % limite+1;



    }



}


void terceira(int vetor[], int tamanho)
{
    int i;



    for (i=0; i<tamanho; i++)
    {

        printf("%d\t",vetor[i]);



    }



}




