/*8) Faça um programa que leia três notas de um aluno e calcule a média ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5,9 informar que o aluno está em recuperação. Nesse caso, ler a nota de
recuperação e calcular a média final (que é a média entre a média anual e a nota de recuperação);
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da recuperação*/
#include <stdio.h>


int main(void)
{


    float nota1,nota2,nota3,mp,rec;

    printf("Informe a primeira nota: ");
    scanf("%f",&nota1);
    printf("Informe a segunda nota: ");
    scanf("%f",&nota2);
    printf("Informe a terceira nota: ");
    scanf("%f",&nota3);
    mp= (nota1 *1/8) + (nota2 * 3 /8) + (nota3 * 4/8);
    if (mp >= 6)
    {
        printf("Aluno aprovado\nMedia= %.2f",mp);
    }
    else
    {
        if (mp >= 4)
        {
            printf("Aluno em recuperacao\n");
            printf("Nota de recuperacao:\n");
            scanf("%f",&rec);
            if (((mp + rec)/2) >=5)
            {
                printf("Aprovado apos recuperacao\nMedia apos recuperacao: %.2f",((mp + rec)/2));
            }
            else
            {
                printf("Reprovado apos recuperacao\nMedia apos recuperacao: %.2f",((mp + rec)/2));
            }
        }
    }
    if (mp < 4)
    {

        printf("Reprovado antes da recuperacao\nMedia: %.2f",mp);
    }






    return 0;

}
