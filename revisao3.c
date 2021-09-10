#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
void gerar_vetor(int vet[], int tamanho, int limite)
{
    int i;
    srand(time(NULL));
    for(i=0; i<tamanho; i++)
    {
        vet[i] =  rand()  % limite; //para gerar valores de 0 a limite
    }
}
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
void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    int i,j;
    for(i=0; i<linha; i++)
    {
        for (j=0; j<coluna; j++)
        {
            printf("%3d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    char repetir;
    do
    {
        int vetor1[10],vetor2[10],vetor3[10],i,j,k,l,p;
        gerar_vetor(vetor1,10,10);
        ordenaVetor(vetor1,10);
        printf("==== VETOR ====\n");
        mostra_vetor(vetor1,10);


        k=0;
        l=0;
        p=0;
        int matriz[10][2];
        for (i=0; i<10; i++)
        {
            for (j=0; j<10; j++)
            {
                if (vetor1[i]==vetor1[j])
                {
                    p++;
                }
            }
            if (p==1)
            {
                vetor2[k]=vetor1[i];
                k++;
            }
            if (p!=1 && vetor3[l-1]!=vetor1[i])
            {
                vetor3[l]=vetor1[i];
                matriz[l][0]=vetor3[l];
                matriz[l][1]=p;
                l++;
            }
            p=0;
        }
        printf("\n\n==== NAO REPETIDOS ====\n");
        mostra_vetor(vetor2,k);
        printf("\n\n==== REPETIDOS ====\n");
        mostra_vetor(vetor3,l);
        printf("\n\n==== MATRIZ ==== \n");
        printf("Valor     Ocorencias\n");
        mostrarMatrizInteiro(l,2,matriz);

        printf("\n\nDeseja repetir o programa: ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);
    }
    while (repetir=='S');
    return 0;
}
