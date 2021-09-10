#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/*
) Criar uma estrutura chamada registro_aluno para armazenar dados como:
- Nome - String de tamanho 50
- Disciplina - String de tamanho 30
- Nota1 - Float
- Nota2 - Float
- Media - Float
Usando a estrutura registro_aluno, cadastre dados de 3 alunos e calcule a média aritmética. Mostrar os dados
com a média calculada.



*/

int main(void)
{
    struct registro_aluno
 {
 char Nome[50];
 char Disciplina[30];
 float Nota1;
 float Nota2;
 float Media;
 };
 struct registro_aluno Aluno[3];

 int i;
 printf("==== CADASTRO DE ALUNOS ====\n\n");

 for (i=0; i<3; i++)
 {
     printf("ALUNO %d\n",i+1);
    printf("\nNome do Aluno: ");
    fflush(stdin);
    gets(Aluno[i].Nome);
    printf("\nDisciplina: ");
    fflush(stdin);
    gets(Aluno[i].Disciplina);
     printf("\nInforme a primeira nota: \n");
     scanf("%f",&Aluno[i].Nota1);
     printf("\nInforme a segunda nota: \n");
     scanf("%f",&Aluno[i].Nota2);
     Aluno[i].Media= ( Aluno[i].Nota1+ Aluno[i].Nota2 ) / 2 ;
 }

 printf("\n\n==== MOSTRA DADOS ====\n\n");
    for (i=0; i<3; i++)
 {
      printf("\nALUNO %d\n",i+1);
     printf("Nome: ");
     puts(Aluno[i].Nome);
     printf("Disciplina: ");
     puts(Aluno[i].Disciplina);
     printf("Nota da prova 1: %.2f\n",Aluno[i].Nota1);
     printf("Nota da prova 2: %.2f\n",Aluno[i].Nota2);

 }
 printf("\n\n==== MOSTRA DADOS COM MEDIA ====\n\n");
    for (i=0; i<3; i++)
 {
      printf("\nALUNO %d\n",i+1);
     printf("Nome: ");
     puts(Aluno[i].Nome);
     printf("Disciplina: ");
     puts(Aluno[i].Disciplina);
     printf("Nota da prova 1: %.2f\n",Aluno[i].Nota1);
     printf("Nota da prova 2: %.2f\n",Aluno[i].Nota2);
     printf("Media: %.2f\n",Aluno[i].Media);


 }


    return 0;
}
