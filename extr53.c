/* Uma revendedora de carros usados paga aos seus funcion�rios vendedores um sal�rio fixo por m�s, mais
uma comiss�o tamb�m fixa para cada carro vendido e mais 5% do valor das vendas por eles efetuadas.
Escrever um programa que receba os seguintes dados de um vendedor:
- N�mero de carros vendidos;
- Valor total das vendas realizadas;
- Valor do sal�rio fixo;
- Valor da comiss�o recebida por carro vendido.
Calcular e mostrar o sal�rio mensal desse vendedor.
*/

int main(void)
{
    float fixo,comi,venda, total, comivenda, extra, liquido;
    printf("Informe o valor do salario fixo: R$ ");
    scanf("%f", &fixo);
    printf("Informe o valor de comissao por carro vendido:R$ ");
    scanf("%f", &comi);
    printf("Informe o numero de carros vendidos: ");
    scanf("%f", &venda);
    printf("Informe o valor total de vendas:R$ ");
    scanf("%f", &total);
    extra= total*0.05;
    comivenda= venda * comi;
    liquido= fixo + extra + comivenda;
    printf("O salario liquido eh R$ %.2f\n", liquido);

    return 0;

}
