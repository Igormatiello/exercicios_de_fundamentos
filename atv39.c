/*9) N�meros pal�ndromos s�o aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um n�mero de 4 d�gitos, calcular e
escrever se este n�mero � ou n�o pal�ndromo.

*/

#include <stdio.h>


int main(void)
{


    int dig,milhar,centena,dezena,unidade;

    printf("Informe um digito de 4 algarismos: ");
    scanf("%d",&dig);
    milhar= dig/1000;
    centena= (dig %1000) /100;
    dezena= ((dig %1000) - (centena*100))/10;
    unidade= ((dig %1000) - (centena*100)- (dezena*10));
    if ((unidade == milhar)&& (dezena==centena))
    {
        printf("%d eh um numero palindromo\n",dig);
    }
    else
    {
        printf("%d nao eh em numero palindrono",dig);
    }


    return 0;

}
