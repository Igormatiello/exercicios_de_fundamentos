
/*4) Ler dois n�meros que representam, respectivamente, o limite inferior e superior de um intervalo. Validar
para que o limite superior seja maior que o limite inferior. Em rela��o a esse intervalo:
a) Mostrar os n�meros pares em colunas (n n�meros por linha, separados por tabula��o). n � um valor
informado pelo usu�rio e deve ser validado para se obter uma entrada maior que zero.
b) Calcular e mostrar a m�dia dos n�meros �mpares. Validar para que n�o seja realizada uma divis�o por
zero. Aten��o: Antes de fazer a soma dos n�meros, converter os negativos para positivos (sem fazer uso da
fun��o fabs()).


*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{

    char repetir;
    do
    {
    int lim1,lim2,linha;
    do{
    printf("Informe o limite inferior do limite: ");
    scanf("%d",&lim1);
    printf("Informe o limite superior do limite: ");
    scanf("%d",&lim2);
    }while(lim1>=lim2);

    do{
    printf("Informe quantos numeros quer imprimir por linha: ");
    scanf("%d",&linha);
    }while(linha<1);

    int i,contPar,soma,contImpar,iAuxiliar;
    float media;
     contPar=0;
        soma=0;
        contImpar=0;
        iAuxiliar=0;

    for (i=lim1; i<lim2; i++)
    {

        if (i%2==0 )
        {
            printf("%d\t",i);
            contPar=contPar+1;
        }
        if (contPar%linha==0)
        {
            printf("\n");
        }
        if (i%2!=0 && i>0)
        {
            soma=soma+i;
            contImpar=contImpar+1;
        }
        if (i<0 && i%2!=0)
        {
            iAuxiliar=i*(-1);
            soma=soma+ iAuxiliar;
            contImpar=contImpar+1;
        }
    }
    media=(float)soma/contImpar;
    if (contImpar!=0)
    {
    printf("\n\nA media dos valores impares eh: %.2f\n",media);
    }
    else
    {
        printf("Nao ha numeros impares no intervalo\n");
    }
     printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');

    return 0;

}



