/*3
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int verifica_primo(int num) //funcao que recebe um valor inteiro
{
    int i,contador=0;
    for (i=2; i<num; i++) //passa de 2 ate um valor menor que o parametro
    {
        if (num%i==0)   //caso o valor tenha divisor entre o intervalo, sera retornado o valor 1
        {
            contador=1;
        }  //caso nao se tenha divisor, sera retornado 0, informando q o valor eh primo
    }
    return(contador);
}
void mostra_vetor(int vet[], int tam) //funcao feita para mostrar vetores inteiros, usando o vetor e o tamanho
{
    int i;

    for(i=0; i<tam; i++) //para por td os elementos do vetor e vai imprimindo ate chegar no limite de tamanho
    {
        printf("%3d\t", vet[i]);
    }
}
int main(void)
{
    char repetir;
    do
    {
        char texto1[100],texto2[100];   //declaracao de strings
        int palavras,i=0,num,j=0,vet1[100],k=0; //declaracao de variaveis e vetores
        printf("Informe uma string: ");     //solicita a string
        setbuf(stdin, NULL);
        gets(texto1);
        while(texto1[i]!='\0')   //passa por cada valor da string
        {
            num=texto1[i];
            if (verifica_primo(num)==0)        //caso o inteiro da letra na string seja primo, ou seja, retorne 0, sera copiado para dentro do texto2
            {
                texto2[j]=texto1[i];
                j++;                //indice do texto 2
                vet1[k]=num;        //armazena dentro de um vetor o valor, caso seja primo
                k++;                 //indice do vetor de inteiros
            }
            i++;
        }
        printf("String 1: %s\n",texto1);  //imprime texto1
        printf("String 2: %s\n",texto2);   //imprime texto2
        printf("\n\n==== VETOR ====\n");    //imprime vetor de inteiros
        mostra_vetor(vet1,k);

        printf("\n\nDeseja repetir o processo:(s ou n) ");   // pede se quer repetir o processo
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
    }
    while (repetir=='S' || repetir=='s');
    return 0;
}
