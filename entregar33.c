

/*3) Deseja-se publicar o número de acertos de cada aluno em uma prova. A prova consta de 10 questões,
cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso são dados:
- O cartão gabarito;
- O número de alunos da turma;
- O cartão de respostas para cada aluno, contendo o seu número e suas respostas.

 */

#include <stdio.h>
#include <ctype.h>



int main(void)
{


    char repetir;
    do
    {
        char gab[10], resposta[10];
        int i,alunos,j,k,acertos=0;
        printf("Digite o numero de alunos: ");
        scanf("%d",&alunos);




        printf("===GABARITO===\n");
        for (i=0; i<10; i++)
        {
            do
            {
                printf("Digite o gabarito da prova para a questao %d: ",(i+1));
                setbuf(stdin,NULL);
                scanf("%c",&gab[i]);
                gab[i]=toupper(gab[i]);
                if (gab[i]!='A' && gab[i]!='B' && gab[i]!='C' && gab[i]!='D' && gab[i]!='E')
                {
                    printf("Caracter invalido!\n");
                }
            }
            while(gab[i]!='A' && gab[i]!='B' && gab[i]!='C' && gab[i]!='D' && gab[i]!='E');
        }

        for (j=0; j<alunos; j++)
        {

            for (k=0,i=0; k<10; k++,i++)
            {
                do
                {
                    printf("Digite a resposta do aluno %d para a questao %d: ",(j+1),(k+1));
                    setbuf(stdin,NULL);
                    scanf("%c",&resposta[k]);
                    resposta[k]=toupper(resposta[k]);

                    if (resposta[k]!='A' && resposta[k]!='B' && resposta[k]!='C' && resposta[k]!='D' && resposta[k]!='E')
                    {
                        printf("Caracter invalido!\n");
                    }
                    else if (resposta[k]==gab[i])
                    {
                        acertos++;

                    }

                }
                while(resposta[k]!='A' && resposta[k]!='B' && resposta[k]!='C' && resposta[k]!='D' && resposta[k]!='E');
            }

            printf("O aluno %d fez %d pontos\n",(j+1),acertos);

            acertos=0;


        }



        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


}
