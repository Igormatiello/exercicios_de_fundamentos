/* Ler a quantidade de kilowatts de energia el�trica consumidos por uma resid�ncia. Calcular e mostrar o
valor em reais de cada kilowatts, o valor total a ser pago e valor a ser pago por essa resid�ncia quando h�
desconto de 10%. Considere que 100 kilowatts custam 1/7 do sal�rio m�nimo. Ler o valor do sal�rio m�nimo*/

int main(void)
{
    float kw,kwpreco,desconto, total,minimo;
    printf("Informe o valor do salario minimo: R$ ");
    scanf("%f", &minimo);
    printf("Informe a quantidade de kilowatts gastos pela residencia): ");
    scanf("%f", &kw);
    kwpreco = minimo / 700;
    total= kwpreco* kw;
    desconto= total*0.9;
    printf("O valor do kilowatt eh R$ %.2f\n", kwpreco);
    printf("O valor a ser pago pela residencia eh R$ %.2f\n", total);
    printf("O valor a ser pago com 10%% de desconto eh R$ %.2f\n", desconto);

    return 0;

}
