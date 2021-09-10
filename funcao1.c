#include <stdio.h>
void tabuada(int numero); //Protótipo da função tabuada
void parada(void); //Protótipo da função parada'
int main(void)
{
int num;
do
{
printf("Informe um numero: ");
scanf("%d", &num);
if (num != -1)
{
tabuada(num); //chama a função tabuada, passando o parâmetro num
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
}// fim do corpo da função tabuada, retorna o fluxo de execução para o módulo chamador


void parada(void)
{
printf("Pressione alguma tecla para prosseguir.");
getch(); //lê um caractere do teclado
}
