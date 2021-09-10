
/*7) Construa um programa que leia um conjunto de dados contendo altura (que deve ser maior que 0) e sexo
(que deve ser masculino ou feminino) de um grupo de pessoas. Quando fornecida uma altura igual a 0, é
encerrada a entrada de dados. O programa deve calcular e fornecer:
a) A maior e a menor altura do grupo.
b) A média de altura das mulheres.
c) A média de altura dos homens.
d) O número de homens e o percentual que eles representam no grupo.
e) O número de mulheres e o percentual que elas representam no grupo.

*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{

    char repetir;
    do
    {

    int contMulher=0,contHomem=0,primeiro=1;
    char genero;
    float somaHomem=0,somaMulher=0,mediaHomem,mediaMulher,percHomem,percMulher,maior,menor,altura;
    do
    {

        do
        {
            printf("Informe a altura: ");
            scanf("%f",&altura);
        }
        while(altura<0);

        if (altura!=0)
        {


            do
            {
                printf("Informe o sexo (F ou M): ");
                setbuf(stdin,NULL);
                scanf("%c",&genero);
                genero=toupper(genero);
            }
            while(genero!='F' && genero!='M');


            if (genero=='F')
            {
                contMulher=contMulher+1;
                somaMulher=somaMulher+altura;
            }
            if (genero=='M')
            {
                contHomem=contHomem+1;
                somaHomem=somaHomem+altura;
            }



            if (primeiro==1)
            {
                maior=altura;
                menor=altura;
                primeiro=0;
            }

            if (altura>maior)
            {
                maior=altura;
            }
            if (altura<menor)
            {
                menor=altura;
            }

        }


    }
    while(altura!=0);


    printf("\n\nA maior altura do grupo eh: %.2f\n",maior);
    printf("\n\nA menor altura do grupo eh: %.2f\n",menor);

    printf("\n\n===MULHERES===\n");
    printf("Quantidade: %d\n",contMulher);
    if (contMulher!=0){
    mediaMulher=somaMulher/contMulher;
    printf("Media de altura: %.2f\n",mediaMulher);
    }
    if ((contHomem+contMulher)!=0){
    percMulher=(contMulher/ (contMulher+contHomem)*100);
    printf("Percentual: %.2f%%\n",percMulher);
    }
    printf("\n\n===HOMENS===\n");
    printf("Quantidade: %d\n",contHomem);
    if (contHomem!=0){
    mediaHomem=somaHomem/contHomem;
    printf("Media de altura: %.2f\n",mediaHomem);
    }
    if ((contHomem+contMulher)!=0){
    percHomem=(contHomem/ (contMulher+contHomem)*100);
    printf("Percentual: %.2f%%\n",percHomem);
    }

 printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');

    return 0;

}



