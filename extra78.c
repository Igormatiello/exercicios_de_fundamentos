/*8) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma
empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
- Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - Não)
Determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.
c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo, igual a 0 ou idade
negativa. Se a idade for igual a 0 ou negativa, não ler as informações de nacionalidade e se possui curso
superior, e sair do programa.*/
#include <stdio.h>
int main(void)
{

    int id=2,brasileiro=0,estrangeiro=0,somaidade=0,semcurso=0,idademinima=32766;
    float media;
    char nac,curso;

    printf("Caso a idade ser negativa ou igual a zero, o programa serah finalizado\n");
    while (id > 0)
    {
        printf("\nInforme a idade: ");
        setbuf(stdin,NULL);
        scanf("%d",&id);
        if (id>0)
        {
            printf("\nInforme a nacionalidade(B - brasileiro ou E - estrangeiro): ");
            setbuf(stdin,NULL);
            scanf("%c",&nac);
            printf("\nPossui curso superior(S - sim ou N - nao): ");
            setbuf(stdin,NULL);
            scanf("%c",&curso);
        }
        else
        {
            break;
        }
        if (nac=='b' ||nac=='B')
        {
            brasileiro= brasileiro+1 ;
        }
        if ((nac=='e') || (nac=='B'))
        {
            estrangeiro=estrangeiro+1;
        }
        if (((curso=='n') || (curso=='N')) && ((nac=='b' ||nac=='B')))
        {
            somaidade=somaidade+id;
            semcurso=semcurso+1;
        }
        if (((curso=='s') || (curso=='S')) && ((nac=='e' ||nac=='E')))
        {
            if (id < idademinima)
            {
                idademinima=id;
            }
        }
    }
    if (brasileiro!=0)
    {
        printf("Quantidade de brasileiros: %d\n",brasileiro);
    }
    else
    {
         printf("Sem brasileiro\n");
    }
    if (estrangeiro!=0)
    {
        printf("Quantidade de estrangeiros: %d\n",estrangeiro);
    }
    else
    {
         printf("Sem estrangeiro\n");
    }
    media=(float)somaidade/semcurso;
    if (somaidade!=0)
    {
        printf("A idade media dos brasileiros sem curso superior eh: %.2f\n",media);
    }
    else
    {
         printf("Sem brasileiro sem curso superior\n");
    }
    if (idademinima!=32766)
    {
        printf("A menor idade de estrangeiro com curso superior eh: %d\n",idademinima);
    }
    else
    {
         printf("Sem estrangeiro com curso supeior\n");
    }


    return 0;
}
