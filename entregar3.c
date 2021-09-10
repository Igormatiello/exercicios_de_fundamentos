/*3) A figura a seguir representa uma árvore de decisão para identificar se um paciente está saudável ou
doente. Elabore um programa que implementa essa árvore de decisão*/
#include <stdio.h>


int main(void)
{
    char bem,dor;
    float temp;
    printf("Responda 's' ou 'S'para SIM\n");
    printf("Responda 'n' ou 'N' para NAO\n");

    printf("Paciente se sente bem?: ");
    scanf("%c",&bem);

    if ((bem=='s') || (bem=='S'))
    {
    printf("Paciente saudavel\n");
    }

    else if ((bem=='n') ||(bem=='N'))
    {
        printf("Paciente tem dor? ");
        setbuf(stdin,NULL);
        scanf("%c",&dor);
            if ((dor=='s') || (dor=='S'))

        {
            printf("Paciente doente\n");
        }

        else if ((dor=='n') ||(dor=='N'))
        {
            printf("Temperatura do paciente: ");
             setbuf(stdin,NULL);
            scanf("%f",&temp);

           if (temp > 37.0)
           {
               printf("Paciente doente\n");
           }
            else
            {
                printf("Paciente saudavel\n");
            }


        }
        else
        {
            printf("Caractere invalido\n");
        }

    }
    else
    {
        printf("Caractere invalido\n");
    }






    return 0;
    }


