
/*10) Elaborar um programa para automatizar o caixa de uma loja. Ler a quantidade e o valor unitário de cada produto. Calcular o
valor total da compra. Informar esse valor para o usuário e o usuário informa o valor para pagamento. O programa calcula o troco e
informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir a leitura enquanto a quantidade for maior que zero. Se
informado zero ou valor negativo para a quantidade, não ler o valor unitário

*/
#include <stdio.h>

int main(void)
{
    float quant=1,valor,somatorio=0,pago,troco,cent;
    int nota10,nota5,nota1;

        while (quant>0)
        {

        printf("Informe a quantidade de um produto: ");
        scanf("%f",&quant);
        if (quant>0)
        {

        printf("Informe o valor unitario do produto: ");
        scanf("%f",&valor);
        }
        somatorio= (quant*valor)+somatorio;
        }
        printf("\n\nTOTAL DA COMPRA: R$ %.2f\n\n",somatorio);
        printf("Informe o valor pago pelo cliente: ");
        scanf("%f",&pago);
        troco= pago-somatorio;
        printf("TROCO: R$%.2f\n",troco);

        nota10= (int)troco / 10;
        nota5= ((int)troco - (nota10*10)) / 5;
        nota1=((int)troco - (nota10*10)-(nota5*5)) /1;
        cent= (troco - (nota10*10)-(nota5*5)- (nota1));

        printf("O valor do troco sera devolvido com:\n%d nota(s) de 10 reais\n",nota10);
        printf("%d nota(s) de 5 reais\n",nota5);
        printf("%d nota(s) de 1 real\n",nota1);
        printf("e %.2f centavos\n",cent);






    return 0;
}






