#include <stdio.h>
void tabuada(void); // prot�tipo da fun��o
int varGlobal; //vari�vel global
int main(void)
{
do
{
printf("Informe um numero: ");
scanf("%d", &varGlobal);
tabuada(); //chama a fun��o tabuada
}while(varGlobal != -1);
}
void tabuada(void)
{
int i; //vari�veis locais a fun��o tabuada
for(i=0; i<=10; i++)
{
int resultado; //vari�vel local ao bloco for
resultado = varGlobal * i;
printf("%d * %d = %d\n", varGlobal, i, resultado);
}
}
