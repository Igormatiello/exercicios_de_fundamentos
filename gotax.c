#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/*
2) Resolva as seguintes quest�es:
a) Defina uma estrutura que ir� representar bandas de m�sica. Essa estrutura deve conter: o nome da banda,
que tipo de m�sica ela toca, o n�mero de integrantes e em que posi��o do ranking essa banda est� dentre as
suas cinco bandas favoritas.
b) Crie uma vari�vel a partir da estrutura criada na quest�o e armazene os dados de cinco bandas. Ap�s criar
e preencher, exiba todas as informa��es das bandas/estruturas.
c) Crie uma fun��o que solicite ao usu�rio um n�mero de 1 at� 5. Em seguida, seu programa deve exibir
informa��es da banda cuja posi��o no seu ranking � a que foi solicitada pelo usu�rio.
d) Crie uma fun��o em C que solicite ao usu�rio um tipo de m�sica e exiba as bandas com esse tipo de
m�sica no seu ranking.
e) Crie uma fun��o que solicite o nome de uma banda ao usu�rio e diga se ela est� entre suas bandas
favoritas ou n�o.
*/
struct bandaDeMusicas
    {
        char Nome[100];
        char Tipo[100];
        int Integrantes;
        int Posicao;
    };
void funcaoBandas(struct bandaDeMusicas Banda[])
{
    int op;
    do
    {
        printf("Informe o numero da banda (entre 1 e 5): ");
        scanf("%d",&op);
    }
    while(op<1 || op>5);
    printf("BANDA %d\n",op);
        printf("Nome: ");
        puts(Banda[op].Nome);
        printf("Tipo Musical: ");
        puts(Banda[op].Tipo);
        printf("Numero de integrantes: %d\n",Banda[op].Integrantes);
        printf("Posicao no ranking: %d\n",Banda[op].Posicao);
}


void funcaoTipo(struct bandaDeMusicas Banda[])
{
    char gostar[100];
    printf("Informe o tipo de musica: ");
      fflush(stdin);
    gets(gostar);
    int i,j,validar;
    for (i=0; i<5; i++)
    {
        j=0;
        validar=0;
        while (gostar[j]!='\0' || Banda[i].Tipo[j] !='\0')
        {

            if (gostar[j]!= Banda[i].Tipo[j])
            {
                validar=1;
            }
        }
        if (validar==0)
        {
            printf("\n");
            puts(Banda[i].Nome);
            printf("\n");
        }
    }
}

void funcaoNome(struct bandaDeMusicas Banda[])
{
    char texto[100];
     printf("Informe o nome da banda: ");
       fflush(stdin);
        gets(texto);
        int i,j,validar;
    for (i=0; i<5; i++)
    {
        j=0;
        validar=0;
        while (texto[j]!='\0' || Banda[i].Nome[j] !='\0')
        {

            if (texto[j]!= Banda[i].Nome[j])
            {
                validar=1;
            }
        }
        if (validar==0)
        {
            printf("\n%s esta entre as bandas favoritas\n",texto);
        }
        else
        {
             printf("\n%s nao esta entre as bandas favoritas\n",texto);
        }
    }
}

int main(void)
{


    struct bandaDeMusicas Banda[5];
    int i;
    for (i=0; i<5; i++)
    {
        printf("Informe o nome da banda %d: ",i+1);
        fflush(stdin);
        gets(Banda[i].Nome);
        printf("Informe o tipo de musica que a banda %d toca: ",i+1);
        fflush(stdin);
        gets(Banda[i].Tipo);
        printf("Informe o numero de integrantes da banda %d: ",i+1);
        scanf("%d",&Banda[i].Integrantes);
        printf("Informe a posicao do ranking da banda %d entre as favoritas: ",i+1);
        scanf("%d",&Banda[i].Posicao);
    }
    printf("\n\n==== SAIDA DE DADOS ====\n");
    for (i=0; i<5; i++)
    {
        printf("\n\nBANDA %d\n",i+1);
        printf("Nome: ");
        puts(Banda[i].Nome);
        printf("Tipo Musical: ");
        puts(Banda[i].Tipo);
        printf("Numero de integrantes: %d\n",Banda[i].Integrantes);
        printf("Posicao no ranking: %d\n",Banda[i].Posicao);

    }
    funcaoBandas(Banda);
    funcaoTipo(Banda);
    funcaoNome(Banda);





return 0;
}

