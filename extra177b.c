#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int contMulher,contHomem,somaHomem,somaMulher,primeiro; //faz a declaração nesta área
    char repetir,genero;
    float mediaHomem,mediaMulher,percHomem,percMulher,maior,menor,altura;

    do
    {

        contMulher=0;
        contHomem=0;
        somaHomem=0;
        somaMulher=0;
        primeiro=1;

        do
        {
            do
            {
                printf("Informe a altura: ");
                scanf("%f",&altura);
            }while(altura<0);

            if(altura!=0)
            {
                do
                {
                    printf("Informe o sexo (F ou M): ");
                    setbuf(stdin,NULL);
                    scanf("%c",&genero);
                    genero=toupper(genero);

                } while(genero!='F' && genero!='M');

                if (genero=='F')
                {
                    contMulher=contMulher+1;
                    somaMulher=somaMulher+altura;
                }
                if(genero=='M')
                {
                    contHomem=contHomem+1;
                    somaHomem=somaHomem+altura;
                }

                if(primeiro==1)
                {
                    maior=altura;
                    menor=altura;
                    primeiro=0;
                }

                if(altura>maior)
                {
                    maior=altura;
                }
                else if(altura<menor)
                {
                    menor=altura;
                }
            }
        }while(altura!=0);

        printf("\n\nA maior altura do grupo eh: %.2f\n",maior);
        printf("A menor altura do grupo eh: %.2f\n",menor);

        printf("\n\n===MULHERES===\n");
        printf("Quantidade: %d\n",contMulher);

        if(contMulher > 0)//para não permitir divisão por 0
        {
            mediaMulher=(float)somaMulher/contMulher;
            printf("Media de altura: %.2f\n",mediaMulher);
        }
        else
        {
            printf("Media de altura: 0\n");
        }

        percMulher=((float)contMulher/ (contMulher+contHomem) *100);
        printf("Percentual: %.2f%%\n",percMulher);

        printf("\n\n===HOMENS===\n");
        printf("Quantidade: %d\n",contHomem);

        if(contHomem> 0)//para não permitir divisão por 0
        {
            mediaHomem=(float)somaHomem/contHomem;
            printf("Media de altura: %.2f\n",mediaHomem);
        }
        else
        {
            printf("Media de altura: 0\n");
        }
        percHomem=((float)contHomem/ (contMulher+contHomem) * 100);
        printf("Percentual: %.2f%%\n",percHomem);

        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }while (repetir=='S');

    return 0;
}
