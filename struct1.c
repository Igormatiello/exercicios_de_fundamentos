#include <stdio.h>
int main()
{
 struct registroAluno
 {
 char nome[35];
 float nota1;
 float nota2;
 };
 struct registroAluno Aluno;

 //Entrada de dados
 printf("Nome do Aluno: ");
 gets(Aluno.nome);
 printf("Nota 1o. Bimestre: ");
 scanf("%f", &Aluno.nota1);
 printf("Nota 2o. Bimestre: ");
 scanf("%f", &Aluno.nota2);

 return 0;
}
