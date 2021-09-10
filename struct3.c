#include <stdio.h>
#include <stdlib.h>
int main()
{
 struct registroAluno
 {
 char nome[35];
 float nota1;
 float nota2;
 };
 struct registroAluno Aluno[3];
 int i;
 for(i=0; i<3; i++)
 {
 printf("\nNome do Aluno: ");
 fflush(stdin);
 gets(Aluno[i].nome);
 printf("Nota 1o. Bimestre: ");
 scanf("%f", &Aluno[i].nota1);
 printf("Nota 2o. Bimestre: ");
 scanf("%f", &Aluno[i].nota2);
 }
 for(i=0; i<3; i++)
 {

 printf("\nNome do Aluno: %s\n", Aluno[i].nome);
 printf("Nota 1o. Bimestre: %5.2f\n", Aluno[i].nota1);
 printf("Nota 2o. Bimestre: %5.2f\n", Aluno[i].nota2);

 }

 return 0;
}
