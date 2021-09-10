/*10) Faça um programa que solicite ao usuário o valor do salário de um funcionário e apresente o menu a
seguir e permita ao usuário escolher a opção desejada e mostre o resultado. Verifique a possibilidade de
opção inválida e não se preocupe com restrições, como salário negativo. Use switch - case, if e if - else para a
solução.
Menu de opções:
1 – Imposto
2 – Novo salário
3 – Classificação
Digite a opção desejada:*/
#include <stdio.h>


int main(void)
{


    int op;
    float sal,imposto,salario;

    printf("Informe o seu salario:R$ ");
    scanf("%f",&sal);
    printf("Menu de opções:\n1 - Imposto\n2 - Novo salario\n3 - Classificacao\n");
    printf("Digite a opcao desejada: ");
    scanf("%d",&op);


    switch (op)
    {
        case '1':
            if (sal < 1000)
            {
                imposto= sal*0.05;
                printf("Valor do imposto:R$ %.2f", imposto);
            }
            if ((sal <= 1500) && (sal >=1000))
               {
                   imposto=sal*0.1;
                printf("Valor do imposto:R$ %.2f",imposto);
               }
            if (sal >1500)
            {
                imposto=sal*0.15;
                printf("Valor do imposto:R$ %.2f", imposto);
               }
            break;
            case '2':
             if (sal < 1000)
            {
                printf("Valor do aumento:R$ %.2f", (75));
                printf("Salario final:R$ %.2f", (sal+75));
            }
            if ((sal <= 1500) && (sal >=1000))
            {
                printf("Valor do aumento:R$ %.2f", (100));
                printf("Salario final:R$ %.2f", (sal+100));
            }
             if (sal >1500)
            {
                printf("Valor do aumento:R$ %.2f", (150));
                printf("Salario final:R$ %.2f", (sal+150));
            }
            break;
         case '3':
             if (sal >= 1000)
            {
                printf("Categoria A");
            }
            else
            {
                printf("Categoria B");

            }
            break;



    }







    return 0;

}
