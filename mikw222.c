#include <stdio.h>

//Questão 1



int main(void)
{
    //Declara��o de vari�veis
    char opcao;
    int i,numa, contdiv=0, linf, lsup, a, numc, somac=0;

    //tabela de opcoes para o usuario
    printf("ESCOLHA UMA OPCAO:\n\nSe opcao = a Apresenta e conta os divisores de numero.\nSe opcao = b Apresenta os numeros primos de um intervalo de numeros.\nSe opcao c: Verifica se um numero eh perfeito.\nSe opcao d: Verifica se os números de um intervalo são múltiplos.\n");

    printf("Escolha uma opcao (a, b ou c): ");
    scanf("%c", &opcao);
    fflush(stdin);
    printf("\n");

    //Estrutura de decisao e processamento de dados

    switch(opcao){

        case 'a' :
            do
            {
            printf("Informe um numero (0 para parar): ");
            scanf("%d", &numa);

            for (i=1; i<=numa; i++)
            {
                if (numa%i == 0) // verifica se eh divisivel
                {
                    printf("%d\t",i);
                    contdiv++; //conta os divisiveis
                }

            }
            printf("\n");
            printf("qtd de divisores: %d\n",contdiv);

            }while(numa != 0);

        break;


        case 'b' :

        printf("Informe o limite inferior do intervalo:");
        scanf("%d",&linf);
        printf("Informe o limite superior do intervalo:");
        scanf("%d",&lsup);

        for (i=linf; i<=lsup; i++)
        {
            a = i;
            //for(a=1; a<=i; a++)
            //{
                if(a%i == 0)
                {
                contdiv++; //conta divisores
                printf("%d\t",a);

                }
            //}

                if(contdiv == 2)
                {
                printf("%d\t",a);
                }

        }

        break;

        case 'c' :

        printf("Informe um numero:\n");
        scanf("%d",&numc);

        for(i=1; i<=numc; i++)
        {
            if(numc%i == 0)
            {
                somac = i + somac;
            }
            if (somac-i == i)
            {
                printf("O numero %d eh perfeito\n",numc);
            }


        }
        if (somac-i != i)
        {
            printf("O numero %d nao eh perfeito",numc);
        }

        break;

        case 'd' :

        break;

        default:
            printf("Opcao Invalida");
    }

return 0;
}
