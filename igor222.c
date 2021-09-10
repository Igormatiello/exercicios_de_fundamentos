/*2
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int retornaDivisores(int num)   //funcao para retornar quantos divisores tem um valor, valor esse de parametro
{
    int i,cont=0;              //incia o contador em zero
    for (i=1; i<=num; i++)     //percorre desde do 1 até o valor de entrada
    {
        if (num%i==0)           //caso o valor de entarda seja divisivel pelo i, conta mais um divisor
        {
            cont++;
        }
    }
    return(cont);            //retorna quantos divisores
}
void mostra_vetor(int vet[], int tam) //funcao feita para mostrar vetores inteiros, usando o vetor e o tamanho
{
    int i;
    for(i=0; i<tam; i++) //para por td os elementos do vetor e vai imprimindo ate chegar no limite de tamanho
    {
        printf("%3d\t", vet[i]);
    }
}
int contaPalavras(char texto[])         //funcao que conta quantas palavras tem em um determinado string
{
    int cont=0,i=0;                     //declara variaveis como zero
    if(texto[0] != ' ')                //inicia o contador caso nao tenha espaço no inicio
    {
        cont++;
    }
    while(texto[i] != '\0')             //percorre o texto
    {
        if(texto[i] == ' ' && texto[i+1] != ' ' && texto[i+1] != '\0')    //caso seja espaço e seja a ultima palavra ou espaço antes de palavra
        {
            cont++;                                         //conta mais pro contador
        }
        i++;
    }
    return(cont);             //retorna o valor do contador
}

void contLetras (char texto[],int lim1, int lim2, int vet1[], int indice)      //funcao para receber um texto e as cordenadas e um vetor e o indice
{
    int i=0,cont=0;                         //inicia as variavies
    for (i=lim1; i<lim2; i++)              //percorre as cordenadas da palavra dentro do texto
    {
        if (texto[i]!=' ')             //caso seja letra, incrementa o contador
        {
            cont++;
        }
    }
    vet1[indice]=cont;                //salva num vetor a quantidade de letras
}
void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])        //funcao para mostrar uma matriz
{
    int i,j;            //inicia as variavies

    for(i=0; i<linha; i++)          //percorre as linhas da matriz
    {
        for (j=0; j<coluna; j++)       //percorre as colunas da matriz
        {
            printf("%3d\t", matriz[i][j]);   // imprime o valor de elemento da matriz de acordo com a linha e a coluna da matriz
        }
        printf("\n");                      //pula linha quando acaba a coluna
    }
}
int main(void)
{
    char repetir;
    do
    {
        char texto[100],str[100];        //inicia strings
        int palavras,i=0,aux=0,j,lim2=0,lim1=0;                 //declara variaveis inteiras
        printf("Informe uma string: ");      //pede string
        setbuf(stdin, NULL);
        gets(texto);
        printf("\n\nA string tem %d palavras.\n",contaPalavras(texto)); //chama a funcao para contar as palavras de um texto dentro de uma impressão
        palavras=contaPalavras(texto);                                  //salva a quantidade de palavras
        int vet1[palavras];                  //declara vetor quando sabe-se o tamanho
        while(texto[i]!= '\0')          //percorre a string
        {
            lim2++;                    //incrementa o limite superior
            if(texto[i] != ' ' && (texto[i+1] == ' ' ||texto[i+1]=='\0'))      //caso acabe a palavra ou o texto
            {
                contLetras(texto,lim1,lim2,vet1,aux);                      //chama e manda pra função o texto inteiro, os limites inferiores e superiores da palavra e o vetor e indice
                aux++;                                                     //incrementa o indice do vetor
                lim1=lim2;                                      //transforma o limite inferior no superior, para iniciar novamente uma palavra
            }
            i++;
        }
        printf("\n\n==== VETOR ====\n");                        //imprime o vetor do tamanho das palavras
        mostra_vetor(vet1,palavras);
        int matriz[palavras][2];             //declara matriz
        for (j=0; j<palavras; j++)         //percorre as linhas da matriz
        {
            matriz[j][0]=vet1[j];             //determina a primeira coluna com o tamanho da palavra
            matriz[j][1]=retornaDivisores(vet1[j]);        //manda o tamanho da palavra para uma funcao, que retorna a quantidade de divisores
        }
        printf("\n\n==== MATRIZ ====\n");               //imprime a matriz
        printf("VALOR    QTDE DE DIVISORES\n");
        mostrarMatrizInteiro(palavras,2,matriz);

        printf("\n\nDeseja repetir o processo:(s ou n) ");   // pede se quer repetir o processo
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
    }
    while (repetir=='S' || repetir=='s');

    return 0;
}
