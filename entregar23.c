/*3) Fazer uma fun��o que verifica se um n�mero � um quadrado perfeito. Um n�mero � quadrado perfeito se
possui como raiz quadrada um valor inteiro. A fun��o para obter a raiz quadrada � sqrt() e est� na biblioteca
math.h. Por exemplo, 25 � um quadrado perfeito porque raiz quadrada de 25 � 5. Utilizar essa fun��o para:
a) Verificar se um n�mero, informado pelo usu�rio, � um quadrado perfeito.
b) Mostrar quais n�meros de um intervalo s�o quadrados perfeitos.
Use menu de op��es (com switch-case) e implemente a repeti��o de programa.
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>

int funcao_quadrado(int num)
{
    int resultado=1;

    if ((float)sqrt(num)==(int)sqrt(num))
    {
        printf("%d eh um quadrado perfeito ==> raiz quadrada de %d eh %.0f\n",num,num,(sqrt(num)));
        resultado=0;
    }

    return(resultado);


}



int main(void)
{
    int opcao,inf,sup,i;
    int num;
    char repetir;
    do
    {

        printf("1 - Verifica se um numero eh um quadrado perfeito\n");
        printf("2 - Mostra os numeros quadrado perfeito que pertencem a um intervalo\n");
        printf("Opcao: ");
        scanf("%d",&opcao);


        switch(opcao)
        {
        case 1:
        {
            printf("Informe um numero: ");
            scanf("%d",&num);


            if (funcao_quadrado(num)==1)
            {
                printf("%d nao eh um quadrado perfeito\n",num);
            }
            break;
        }
        case 2:
        {
            printf("Informe o valor do limite inferior: ");
            scanf("%d",&inf);
            printf("Informe o valor do limite superior: ");
            scanf("%d",&sup);



            for(i=inf; i<=sup; i++)
            {
                funcao_quadrado(i);
            }

            break;
        }

        }






        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}



