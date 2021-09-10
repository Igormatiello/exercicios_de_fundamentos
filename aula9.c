#include <stdio.h>
int main(void)
{
char tipo;
printf("Selecione o sabor da pizza: ");
scanf("%c", &tipo);
switch(tipo)
{
case 'M':
printf("Muzzarela");
break;
case 'C':
printf("Calabreza");
break;
default:
printf("Opcao incorreta");
}
return 0;





}
