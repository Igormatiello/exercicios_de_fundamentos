/*3) A figura a seguir representa uma árvore de decisão para identificar se um paciente está saudável ou
doente. Elabore um programa que implementa essa árvore de decisão*/
#include <stdio.h>


int main(void)
{
    char res1,res2;
    int res3;
    printf("Responda 's' ou 'S'para SIM\n");
    printf("Responda 'n' ou 'N' para NAO\n");

    printf("Paciente se sente bem?: \n");
    scanf("%c",&res1);

    switch (res1)
    {
    case 's':
    case 'S':
    printf("Paciente saudavel\n");
    break;

    case 'n':
    case 'N':
        printf("Paciente tem dor? \n");
        scanf("%c",&res2);
    }

        switch (res2)
        {
        case 's':
        case 'S':
        printf("Paciente doente\n");
      break;
        case 'N':
        case 'n':
            printf("Temperatura do paciente: \n");
            scanf("%d",&res3);

           if (res3 >37)
           {
               printf("Paciente doente\n");
           }
            else
            {
                printf("Paciente saudavel\n");
            }


        }






    return 0;
    }


