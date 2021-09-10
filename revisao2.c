#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
void mostra_vetor(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%3d\t", vet[i]);
        if ((i+1)%10==0)
        {
            printf("\n");
        }
    }
}
void ordenaVetor(int vetor[], int tam)
{
    int aux, i, j;
    for(j=tam-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}
int main(void)
{
    char repetir;
    do
    {
        char texto[200],texto2[200],texto3[200];
        int i=0,contadora=0,vetor[200],k;
        printf("Informe uma string: ");
        setbuf(stdin,NULL);
        gets(texto);
        while (texto[i]!='\0')
        {
            if ((texto[i]>='a' && texto[i]<='z') ||(texto[i]>='A' && texto[i]<='Z'))
            {
                vetor[contadora]=texto[i];
                texto2[contadora]=texto[i];
                contadora++;
            }
            i++;
        }
        vetor[contadora]='\0'; //colocar valor nulo no vetor
        printf("String 1:");
        puts(texto2);
        printf("\n\n==== VALOR DAS LETRAS ====\n");
        mostra_vetor(vetor,contadora);
        ordenaVetor(vetor,contadora);
        printf("\n\n==== VETOR LETRAS ORDENADO ====\n");
        mostra_vetor(vetor,contadora);
        for (k=0; k<contadora; k++)
        {
            texto3[k]=vetor[k];
        }
        printf("\n\nString 2: ");
        puts(texto3);
        printf("\n\nDeseja repetir o programa: ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);
    }
    while (repetir=='S');
    return 0;
}
