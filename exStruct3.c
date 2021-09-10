#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/*
3) Foi realizada uma pesquisa entre 500 habitantes de uma certa região. Para cada habitante foram coletados
os dados: idade (validar para que seja maior que 0 e menor ou igual a 120), sexo (validar para f/F/m/M),
salário (validar para positivo) e número de filhos (validar para positivo. Criar uma estrutura de dados
adequada para armazenar estas informações e fazer uma função que armazene as informações digitadas
pelo usuário na estrutura criada e outra função que exiba os elementos armazenados na estrutura. Criar
também uma função que calcula a média do salário dos habitantes
*/

struct pesquisa
{
int idade;
char sexo;
float salario;
int filhos;
};
void funcaoArmazena(struct pesquisa Dados[])
{
    int i;
    printf("==== RECEBER DADOS ====\n");
    for (i=0; i<500; i++)
    {
        printf("\nHABITANTE %d\n",i+1);
        do{
        printf("Informe a idade: ",i+1);
        scanf("%d",&Dados[i].idade);
        }while(Dados[i].idade <=0 && Dados[i].idade >=120);

        do{
        printf("Informe o sexo (f/F/m/M): ");
         fflush(stdin);
         scanf("%c",&Dados[i].sexo);
        }while(Dados[i].sexo!='f' && Dados[i].sexo!='F' && Dados[i].sexo!='m' && Dados[i].sexo!='M' );

    do{
    printf("Informe o salario: ");
    scanf("%f",&Dados[i].salario);
    }while(Dados[i].salario<=0);

    do{
        printf("Informe o numero de filhos: ");
        scanf("%d",&Dados[i].filhos);
    }while(Dados[i].filhos <=0);
}

}

void funcaoMostra(struct pesquisa Dados[])
{
   printf("\n\n==== IMPRESSAO DOS DADOS ====\n\n");
   int i;
   for (i=0; i<500; i++)
    {
         printf("\nHABITANTE %d\n",i+1);
        printf("Idade: %d\n",Dados[i].idade);
        if (Dados[i].sexo == 'f' ||Dados[i].sexo == 'F')
        {
        printf("Sexo: Feminino\n");
        }
         if (Dados[i].sexo == 'M' ||Dados[i].sexo == 'm')
        {
        printf("Sexo: Masculino\n");
        }
        printf("Salario: R$%.2f\n",Dados[i].salario);
        printf("Numero de filhos: %d\n",Dados[i].filhos);
    }
}


void funcaoSalarioMedio(struct pesquisa Dados[])
{
    int i;
    float soma=0,media;
    printf("\n\n==== SALARIO MEDIO ====\n");
    for (i=0; i<500; i++)
    {
        soma=soma+Dados[i].salario;
    }
    media=soma/500;
    printf("R$%.2f\n",media);


}
int main(void)
{

struct pesquisa Dados[500];

funcaoArmazena(Dados);

funcaoMostra(Dados);

funcaoSalarioMedio(Dados);


return 0;
}

