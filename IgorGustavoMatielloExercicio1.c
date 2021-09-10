/*1
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
void mostra_vetor(int vet[], int tam) //funcao feita para mostrar vetores inteiros, usando o vetor e o tamanho
{
    int i;
    for(i=0; i<tam; i++) //passa por td os elementos do vetor e vai imprimindo ate chegar no limite de tamanho
    {
        printf("%3d\t", vet[i]);
    }
}
void gerarVetorSemRepeticao(int vet[], int tamanho, int lim) // funcao para gerar vetor aleatorio sem repeticao, usando limite,tamanho e o vetor
{
    int i,j,repete=0;
    srand(time(NULL)); //aciona a funcao time
    for(i=0; i<tamanho; i++)
    {
        do
        {
            repete=0;
            vet[i] =  rand()  % lim +1; //sorteia um valor entre o limite e 1
            for (j=0; j<i; j++)  //passa pelo vetor pra ver se tem igual dentro
            {
                if (vet[i]==vet[j]) //caso o vetor gerado seja igual ao um outro dentro da função, repere a geração do valor, ate ser diferente
                {
                    repete=1;       //repete=1 faz com q se o sorteio se repita
                }
            } //acaba quando chega no limite do vetor
        }
        while(repete==1);
    }
}

int main(void)
{
    char repetir;
    do
    {
        int tam1=5,tam2=5,lim1=15,limi2=10,vet1[tam1],vet2[tam2],i,j,contIntersecao=0,vet3[5],vet4[10],l,k,contUniao=0,copiar; //declaracao de variaveis
        gerarVetorSemRepeticao(vet1,tam1,lim1); //chama a função
        printf("==== VETOR 1 ====\n");
        mostra_vetor(vet1,tam1); //chama a funcao para mostrar
        printf("\n\n");
        system("pause"); //essa é uma das formas de não gerar vetor 1 e 2 iguais, pois utilizamos o time - que poderia gerar vetor iguais
        printf("\n");
        gerarVetorSemRepeticao(vet2,tam2,limi2); //chama a função para gerar
        printf("==== VETOR 2 ====\n");
        mostra_vetor(vet2,tam2);  //mostra o vetor

        for (i=0; i<tam1; i++)   //percorre o vetor 1
        {
            for(j=0; j<tam2; j++)   // esse é uma repetição para ver se o elemento se repete nos dois vetores, percorre o vetor 2
            {
                if (vet1[i]==vet2[j]) // caso se repita, copia para dentro do vetor 3
                {
                    vet3[contIntersecao]=vet1[i];    //copia do elemento repetido para dentro do vetor interseção
                    contIntersecao++;   //aumenta o indice
                }
            }
        }
        printf("\n\n==== INTERSECAO ====\n");
        mostra_vetor(vet3,contIntersecao); //mostra o vetor intersecao
        for (l=0; l<tam1; l++)
        {
            vet4[contUniao]=vet1[l];   // copia para dentro do vetor 4 tds os elementos do vetor 1
            contUniao++;
        }
        for (k=0; k<tam2; k++)
        {
            copiar=1;
            for (l=0; l<tam1; l++)   // passa pelos elementos do vetor 2
            {
                if (vet2[k]==vet1[l])   //caso o elemento do vetor 2 seja igual a um dos elementos do 1, não vai copiar
                {
                    copiar=0;
                }
            }
            if (copiar==1)    // caso nao tenha iguais no elemento 1, vai copiar pro vetor 4;
            {
                vet4[contUniao]=vet2[k]; //copia o valor do vetor 2 q nao esta tbm no vetor 1, para o vetor 4
                contUniao++;
            }
        }
        printf("\n\n==== UNIAO ====\n");   //mostra o vetor uniao
        mostra_vetor(vet4,contUniao);

        printf("\n\nDeseja repetir o processo:(s ou n) ");   // pede se quer repetir o processo
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
    }
    while (repetir=='S' || repetir=='s');
    return 0;
}
