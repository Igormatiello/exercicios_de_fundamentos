/*Fazer um programa que leia um valor double que representa o salário de uma pessoa. Apresente
separadamente os reais (parte inteira) e os centavos (parte decimal).*/
int main(void)
{
    double salario, decimal;
    int reais;
    printf("Informe o valor do seu salario:R$ \n");
    scanf("%lf",&salario);
    reais= (int)salario;
    decimal= (salario - (double)reais)*100;
    printf("Salario informado: R$ %.2lf\n",salario);
    printf("Reais: %.0d\n",reais);
    printf("Cenatavos: %.0lf\n", decimal);






    return 0;
}
