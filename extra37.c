/* Ler um número que representa a quantidade de dias. Informe os anos (considere-os com 360 dias), meses
(considere-os com 30 dias) e os dias contidos nesse valor*/

int main(void)
{
    int tempo,dias,anos,meses,resto1;
    printf("Informe o tempo em dias: \n");
    scanf("%d",&tempo);
    anos= tempo/360;
    resto1= tempo % 360;
    meses= resto1/30;
    dias= resto1 % 30;
    printf("%d dias equivale a %d ano(s), %d mes(es) e %d dia(s)", tempo,anos, meses, dias);
    return 0;
}
