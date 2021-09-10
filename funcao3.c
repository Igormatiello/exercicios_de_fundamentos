#include <stdio.h>
void tabuada(void); // protótipo da função
int varGlobal; //variável global
int main(void)
{
do
{
printf("Informe um numero: ");
scanf("%d", &varGlobal);
tabuada(); //chama a função tabuada
}while(varGlobal != -1);
}
void tabuada(void)
{
int i; //variáveis locais a função tabuada
for(i=0; i<=10; i++)
{
int resultado; //variável local ao bloco for
resultado = varGlobal * i;
printf("%d * %d = %d\n", varGlobal, i, resultado);
}
}
