#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
void mostra_vetor(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%3d\t", vet[i]);
    }
}
int retornaParesDeUmVetor(int ord[], int tamanho)
{
    int k,cont=0,ultimo;
    ultimo=ord[0];
    for (k=0; k<tamanho; k++)
            {
                if (ord[k]%2==0 && (ord[k]!=ultimo || k==0))
                {
    cont++;
    ultimo=ord[k];
                }}
return(cont);
}

int retornaImparesDeUmVetor(int ord[], int tamanho)
{
    int k,cont=0,ultimo;
    ultimo=ord[0];
    for (k=0; k<tamanho; k++)
            {
                if (ord[k]%2!=0 && (ord[k]!=ultimo || k==0))
                {
    cont++;
    ultimo=ord[k];
                }}
return(cont);
}

int repeteDentroDeFuncao(int num, int vet[],int tamanho)
{
    int i,cont=0;
    for (i=0;i<tamanho; i++)
    {
        if (num==vet[i])
        {
            cont++;
        }}
    return(cont);
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
            }}}
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
    }}

int main(void)
{
    char repetir;
    do
    {
        char texto[200];
        int i=0,j,k,auxpar,auximpar,r,s,contagem;
        printf("Informe um texto: ");
        setbuf(stdin,NULL);
        gets(texto);
        while (texto[i]!='\0')
        {
            i++;
        }
        int vet[i],ord[i];
        for (j=0; j<=i; j++)
        {
            vet[j]=texto[j];
        }
        printf("=== VETOR ===\n");
        mostra_vetor(vet,i);
        for (j=0; j<i; j++)
        {
            ord[j]=vet[j];
        }
        printf("\n==== VETOR ORDENADO ====\n");
        ordenaVetor(ord,j);
        mostra_vetor(ord,j);
        printf("\nNumero de pares (sem repeticao): %d\n",retornaParesDeUmVetor(ord,i));
        printf("\nNumero de impares (sem repeticao): %d\n",retornaImparesDeUmVetor(ord,i));
        auxpar=retornaParesDeUmVetor(ord,i);
        auximpar=retornaImparesDeUmVetor(ord,i);
        int pares[auxpar],impar[auximpar],ultimo;
        r=0;
        ultimo=ord[0];
        for (j=0; j<i; j++)
        {
            if (ord[j]%2==0&&(ord[j]!=ultimo||j==0))
            {
                pares[r]=ord[j];
                ultimo=pares[r];
                r++;
            }
        }
        printf("\n==== VETOR PAR ====\n");
        mostra_vetor(pares,r);
        r=0;
        ultimo=ord[0];
        for (j=0; j<i; j++)
        {
            if (ord[j]%2!=0 && (ord[j]!=ultimo || j==0))
            {
                impar[r]=ord[j];
                ultimo=impar[r];
                r++;
            }
        }
        printf("\n==== VETOR IMPAR ====\n");
        mostra_vetor(impar,r);
        int mPares[auxpar][2], mImpar[auximpar][2],t,u=0;
        for (t=0; t<auxpar; t++)
        {
            mPares[t][u]=pares[t];
            mPares[t][1]=repeteDentroDeFuncao(pares[t],ord,i);
            u=0;
        }
        printf("\n==== MATRIZ DE PARES =====\nPARES   OCORRENCIAS\n");
        mostrarMatrizInteiro(auxpar,2,mPares);

        for (t=0; t<auximpar; t++)
        {
            mImpar[t][u]=impar[t];
            mImpar[t][1]=repeteDentroDeFuncao(impar[t],ord,i);
            u=0;
        }
        printf("\n==== MATRIZ DE IMPARES =====\nIMPARES  OCORRENCIAS\n");
        mostrarMatrizInteiro(auximpar,2,mImpar);
        printf("\n\nDeseja repetir o programa: ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);
    }
    while (repetir=='S');
    return 0;
}
