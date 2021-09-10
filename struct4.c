#include <stdio.h>
#include <stdlib.h>
int main()
{
 struct registroAluno
 {
 char nome[35];
 float nota[4];
 };
 struct registroAluno Aluno[3];
 int i, j;
 for(i=0; i<3; i++)
 {
 printf("\n\nNome do aluno %d: ", i+1);
 fflush(stdin);
 gets(Aluno[i].nome);
 for(j=0; j<4; j++)
 {
 printf("Informe a Nota %d do Aluno %d: ", i+1, j+1);
 scanf("%f", &Aluno[i].nota[j]);
 }
 }
 return 0;
}
