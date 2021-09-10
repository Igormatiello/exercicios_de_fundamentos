/*//Vetores, funções, arquivos de cabeçalho
2) Gerar um arquivo de cabeçalho chamado vetores.h com uma função para gerar um vetor com números
aleatórios, com determinado tamanho e que os valores aleatórios variem entre 0 e n e com outra função para
mostrar um vetor com tamanho não fixo.
Utilizar essas funções para:
a) Gerar um vetor de valores randômicos com a quantidade de elementos e o valor de n informada pelo
usuário. Validar as entradas para que sejam informados valores positivos.
b) Mostrar o vetor.
c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a média dos pares que estão armazenados no vetor. Validar para que não seja realizada divisão por
zero no cálculo da média.
O programa permanecerá em execução até que seja escolhida a opção sair
 */

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void gerar_vetor(int tamanho, int limite)
{

     int i;

    srand(time(NULL));

    for (i=0; i<tamanho; i++)// GERAÇÃO
    {
        vetor[i]=rand() % (limite+1);
    }

}

void mostra_vetor(int tamanho, int limite)
{
        int i,menor,local,somaPar=0,contPar=0;
        int vetor[tamanho];
    float media;

      printf("\n\n===VETOR GERADO===\n");
    for (i=0; i<tamanho; i++)// IMPRESSÃO
    {
        printf("%d\t", vetor[i]);
        if (i==0)
        {
            menor=vetor[0];

        }

        if (menor>=vetor[i])
        {
            menor=vetor[i];
            local=i;
        }
        if (vetor[i]%2==0)
        {
            contPar++;
            somaPar=somaPar+vetor[i];
        }
    }
    printf("\n\nO menor valor eh %d e esta no indice %d\n",menor,local);
    if (contPar!=0)
    {
        media= (float)somaPar/contPar;
        printf("\nMedia dos pares: %.2f\n",media);
    }
    else
    {
        printf("Sem numeros pares no vetor\n");
    }

}
int main(void)
{


    char repetir;
    do
    {
        int tamanho,limite;

        do
        {

            printf("Informe o tamanho do vetor: ");
            scanf("%d",&tamanho);

        }
        while(tamanho<=0);
        do
        {

            printf("Informe o valor de n: ");
            scanf("%d",&limite);

        }
        while(limite<=0);

         gerar_vetor(tamanho,limite);
        mostra_vetor(tamanho,limite);



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}




