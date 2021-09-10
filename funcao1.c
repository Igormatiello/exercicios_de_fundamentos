#include <stdio.h>
void tabuada(int numero); //Prot�tipo da fun��o tabuada
void parada(void); //Prot�tipo da fun��o parada'
int main(void)
{
int num;
do
{
printf("Informe um numero: ");
scanf("%d", &num);
if (num != -1)
{
tabuada(num); //chama a fun��o tabuada, passando o par�metro num
}
}
while(num != -1);
parada();
}


void tabuada(int numero)
{
int i;
for(i=1; i<=10; i++)
{
printf("%d * %d = %d\n", i, numero, i*numero);
}
}// fim do corpo da fun��o tabuada, retorna o fluxo de execu��o para o m�dulo chamador


void parada(void)
{
printf("Pressione alguma tecla para prosseguir.");
getch(); //l� um caractere do teclado
}
