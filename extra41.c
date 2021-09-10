/*Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de descontos.
Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no exemplo a
seguir.*/
int main(void)
{
    float salario, aumento, desconto, aumentogeral, total, centavo;
    int real;
    printf("Informe o valor do salario: R$ \n");
    scanf("%f",&salario);
    printf("Informe o percentual de aumento (por exemplo, 10 para 10%):  \n");
    scanf("%f",&aumento);
    printf("Informe o percentual de desconto (por exemplo, 10 para 10%): \n");
    scanf("%f",&desconto);
    aumentogeral= salario + ((aumento/100) * salario);
    total= aumentogeral - ( (desconto/100) * aumentogeral);
    printf("Salario aumentado: %.2f\n",aumentogeral);
    printf("Salario liquido: %.2f\n",total);
    real=(int)total;
    centavo= (total - (float)real)*100;
    printf("O salario liquido eh:%d reais e %.0f centavos\n", real, centavo);



    return 0;
}
