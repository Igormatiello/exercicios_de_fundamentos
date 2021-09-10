/*)4) Faça um programa que receba o salário de um funcionário e o código correspondente ao seu cargo atual e mostre o
cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir
*/

#include <stdio.h>

    int main(void)
    {
    int cargo;
    float salario;
    printf("Codigo    Cargo          Percentual\n");
    printf("1         Escriturario   50%%\n");
    printf("2         Secretario     35%%\n");
    printf("3         Caixa          20%%\n");
    printf("4         Gerente        10%%\n");
    printf("5         Diretor        Nao tem aumento\n");




    printf("Informe o salario do funcioanrio:R$ ");
    scanf("%f",&salario);
    printf("Informe o cargo do funcionario (1,2,3,4,5): ");
    scanf("%d",&cargo);

    if (cargo==1)
    {
        printf("O cargo eh de escriturario\n");
        printf("O valor do aumento eh:R$ %.2f\n",(salario *0.5));
        printf("Novo salario: R$ %.2f\n",((salario*0.5)+salario));
    }
    if (cargo==2)
    {
        printf("O cargo eh de secretario\n");
        printf("O valor do aumento eh:R$ %.2f\n",(salario *0.35));
        printf("Novo salario: R$ %.2f\n",((salario*0.35)+salario));
    }
    if (cargo==3)
    {
        printf("O cargo eh de Caixa\n");
        printf("O valor do aumento eh:R$ %.2f\n",(salario *0.2));
        printf("Novo salario: R$ %.2f\n",((salario*0.2)+salario));
    }
    if (cargo==4)
    {
        printf("O cargo eh de Gerente\n");
        printf("O valor do aumento eh:R$ %.2f\n",(salario *0.1));
        printf("Novo salario: R$ %.2f\n",((salario*0.1)+salario));
    }
    if (cargo==5)
    {
        printf("O cargo eh de Diretor\n");
        printf("Sem aumento \n");
        printf("Novo salario: R$ %.2f\n",salario);
    }






    return 0;
    }
