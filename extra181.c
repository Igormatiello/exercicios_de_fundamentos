
/*6) 1) Elaborar um programa para ler valores inteiros (incluindo valores positivos e negativos) até que o valor zero
seja informado. O valor zero não deverá ser considerado. O programa deve informar o maior e o menor entre
todos os valores lidos e apresentar a média dos valores negativos informados. Obs.: Verificar para que não
sejam realizadas divisões por zero.


*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
     char repetir;
    do
    {
    int num,validacao=1,maior,menor,soma=0,contagem=0;
    float media;

do {

    printf("Informe um valor: ");
    scanf("%d",&num);
    if (num!=0){
    if (validacao==1)
    {
        menor=num;
        maior=num;
        validacao=0;
    }
    if (num>maior)
    {
        maior=num;
    }
    if (num<menor)
    {
        menor=num;
    }
    if (num<0)
    {
        soma=soma+num;
        contagem=contagem+1;
    }
    }

}while(num!=0);

printf("O maior numero eh: %d\n",maior);
printf("O menor numero eh: %d\n",menor);

if (contagem!=0){
media=(float)soma/contagem;
printf("O media dos negativos eh: %.2f\n",media);
}

printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



