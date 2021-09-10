#include <stdio.h>
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
 struct registroPessoa Pessoa;
 printf("Informe seu nome: ");
 gets(Pessoa.nome);
 printf("Feminino ou Masculino (F ou M): ");
 scanf("%c", &Pessoa.sexo);
 printf("Informe o dia do nascimento: ");
 scanf("%d", &Pessoa.dtNasc.dia);
 printf("Informe o mes do nascimento: ");
 scanf("%d", &Pessoa.dtNasc.mes);
 printf("Informe o ano do nascimento: ");
 scanf("%d", &Pessoa.dtNasc.ano);
 return 0;
}
