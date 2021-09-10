#include <stdio.h>
#include <stdlib.h>
int main()
{
 struct registroData
 {
 int dia;
 int mes;
 int ano;
 };
 struct registroPessoa
 {
 char nome[35];
 char sexo;
 struct registroData dtNasc;
 };
 struct registroPessoa Pessoa[3];
 int i;
 for(i=0; i<3; i++)
 {
 printf("\nInforme o nome %d: ", i+1);
 fflush(stdin);
 gets(Pessoa[i].nome);
 printf("Feminino ou Masculino (F ou M): ");
 fflush(stdin);
 scanf("%c", &Pessoa[i].sexo);
 printf("Informe o dia do nascimento: ");
 scanf("%d", &Pessoa[i].dtNasc.dia);
 printf("Informe o mes do nascimento: ");
 scanf("%d", &Pessoa[i].dtNasc.mes);
 printf("Informe o ano do nascimento: ");
 scanf("%d", &Pessoa[i].dtNasc.ano);
 }
 return 0;
}
