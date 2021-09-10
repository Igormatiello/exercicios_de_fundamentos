/*2

*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int retornaDivisores(int num)
{
    int i,cont=0;
    for (i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            cont++;
        }


    }
    return(cont);
}
void mostra_vetor(int vet[], int tam) //funcao feita para mostrar vetores inteiros, usando o vetor e o tamanho
{
    int i;

    for(i=0; i<tam; i++) //para por td os elementos do vetor e vai imprimindo ate chegar no limite de tamanho
    {
        printf("%3d\t", vet[i]);
    }
}
int contaPalavras(char texto[])
{
    int cont=0;

    int i=0;
    if(texto[0] != ' ')
    {
        cont++;
    }
    while(texto[i] != '\0')
    {
        if(texto[i] == ' ' && texto[i+1] != ' ' && texto[i+1] != '\0')
        {
            cont++;
        }
        i++;
    }
    return(cont);

}

void contLetras (char palavra[],int vet1[], int indice)
{

    int i=0,cont=0;
    puts(palavra);

    while(palavra[i]!='\0')
    {
        cont++;
        i++;
    }

    vet1[indice]=cont;


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
void contaPalavras2(char texto[], int vet1[], int k)
{
    int i=0;
    while(texto[i]!= '\0')
    {
        if (texto[i]!=' ' )
        {
            vet1[k]++;
        }

        else  if (texto[i+1]!=' ')
        {
            k++;

        }
        i++;
    }
    k++;




}


int main(void)
{
    char repetir;
    do
    {
        char texto[100],str[100];
        int palavras,i=0,j;
        printf("Informe uma string: ");
        setbuf(stdin, NULL);
        gets(texto);
        printf("\n\nA string tem %d palavras.\n",contaPalavras(texto));
        palavras=contaPalavras(texto);
        int vet1[palavras],aux=0,cont=0,k=0;


        for (i=0; i<palavras; i++)
        {
            vet1[i]=0;
        }

        contaPalavras2(texto,vet1,k);


        mostra_vetor(vet1,k);



        printf("\n\n==== VETOR ====\n");
        mostra_vetor(vet1,palavras);


        int matriz[palavras][2];
        for (j=0; j<palavras; j++)
        {
            matriz[j][0]=vet1[j];
            matriz[j][1]=retornaDivisores(vet1[j]);
        }
        printf("\n\n==== MATRIZ ====\n");
        printf("Valor    Qtde de divisores\n");
        mostrarMatrizInteiro(palavras,2,matriz);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }


    while (repetir=='S');


    return 0;
}
