#include <stdio.h>
void troca(int *px, int *py); // Protótipo
int main(void)
{
int x=4, y=7;//Ao chamar a função é passado o endereço das
//variáveis x e y como parâmetro.
troca(&x,&y);
printf("Troca: x vale %d e y vale %d\n", x, y);
troca(&x,&y);
printf("Destroca: x vale %d e y vale %d\n", x, y);
return 0;
}
void troca(int *x, int *y)//Troca os valores das variáveis
//apontadas por px e py
{
int n;
n = *y;
*y= *x;
*x= n;
}
