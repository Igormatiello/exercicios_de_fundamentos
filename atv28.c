/*8) Fa�a um programa que leia tr�s notas de um aluno e calcule a m�dia ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a m�dia obtida est� entre 6 a 10 informar que o aluno est� aprovado;
b) Se a m�dia obtida est� entre 4 e 5,9 informar que o aluno est� em recupera��o. Nesse caso, ler a nota de
recupera��o e calcular a m�dia final (que � a m�dia entre a m�dia anual e a nota de recupera��o);
b.1) Se a m�dia final � menor que 5 informar que o aluno est� reprovado ap�s recupera��o;
b.2) Se � igual ou maior que 5 informar que o aluno est� aprovado ap�s recupera��o;
c) Se a m�dia obtida � menor que 4 informar que o aluno est� reprovado antes da recupera��o*/
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
