/*Suponha que um caixa disponha apenas de cédulas de R$ 100, R$ 10 e R$ 1. Escreva um programa para
ler o valor de uma compra e o valor fornecido pelo usuário para pagar essa compra, e calcule o troco.
Calcular e mostrar a quantidade de cada tipo de cédula que o caixa deve fornecer como troco. Mostrar
também o valor da compra e do troco. Use variáveis do tipo int.
*/
int main(void)
{
    int compra, pago,troco,nota1,nota2,nota3;
    printf("Informe o valor da compra: \n");
    scanf("%d",&compra);
    printf("Informe o valor pago:\n");
    scanf("%d",&pago);
    troco= pago-compra;
    printf("O troco de R$ %d foi pago com: \n", troco);
    nota1= troco/100;
    nota2= (troco- (nota1*100))/10;
    nota3= (troco- (nota1*100) - (nota2*10));
    printf("   %d nota(s) de R$100\n", nota1);
    printf("   %d nota(s) de R$10\n", nota2);
    printf("   %d nota(s) de R$1\n",nota3);








    return 0;
}
