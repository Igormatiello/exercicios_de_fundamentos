
/*5) Elaborar um programa que valide o número de uma conta corrente com três dígitos, retorne o dígito verificador e
informe se o número da conta está correto. Ler os quatro dígitos como um único número, validando para que esse
número esteja em um intervalo de 1000 a 9999. Separar os dígitos de forma que os três primeiros sejam o número da
conta e o último o dígito verificador. Validar a entrada, ou seja, repetir a entrada do número até que seja informado um
número com somente quatro dígitos.
Por exemplo: Se o número informado for 1234, 123 é o número da conta e 4 é o dígito verificador.
Para obter o dígito verificador:
- Somar o número da conta com o seu inverso = 123 + 321 = 444
- Multiplicar cada dígito pela sua ordem posicional e somar os resultados = 4 *1 + 4 * 2 + 4 * 3 = 24
- O último dígito desse resultado é o verificador: 4
Outro exemplo:
Se o usuário informar 1290:
- Somar o número da conta com o seu inverso = 129 + 921 = 1050
- Multiplicar cada dígito pela sua ordem posicional e somar os resultados = 1 * 0 + 0 *1 + 5 * 2 + 0 * 3 = 10
- O último dígito desse resultado é o verificador: 0

*/
#include <stdio.h>
int main(void)
{
    int cc, valido,dig1,dig2,dig3,dig4,inverso,somatorio,cc2,dig11,dig22,dig33,dig44,x,xx;
    printf("Informe o numero da conta corrente: ");
    scanf("%d",&cc);
    if (cc<1000 || cc>9999)
    {
        valido=0;
    while (valido=0)
    {
        printf("Informe o numero da conta corrente: ");
    scanf("%d",&cc);

    if (cc>=1000 && cc<=9999)
    {
        valido=1;
    }
    }
    }
    printf("CONTA: %d\n",cc);
    dig1= cc/1000;
    dig2= (cc % 1000)/100;
    dig3= (cc % 100)/10;
    dig4= cc % 10;

    printf("Conta corrente = %d%d%d\n",dig1,dig2,dig3);
    printf("Primeiro digito = %d\n",dig1);
    printf("Segundo digito = %d\n",dig2);
    printf("Terceiro digito = %d\n",dig3);
    printf("Quarto digito = %d\n",dig4);
    inverso=(dig3*100) + (dig2*10) +(dig1);
    printf("Inverso: %d\n",inverso);
    cc2=(dig1*100) + (dig2*10) + (dig3);
    somatorio= cc2+inverso;

    printf("%d + %d = %d\n",cc2,inverso,somatorio);
     dig11= somatorio/1000;
    dig22= (somatorio % 1000)/100;
    dig33= (somatorio % 100)/10;
    dig44= somatorio % 10;
    printf("Primeiro digito = %d\n",dig11);
    printf("Segundo digito = %d\n",dig22);
    printf("Terceiro digito = %d\n",dig33);
    printf("Quarto digito = %d\n",dig44);
    x=(dig44*1) + (dig33*2) + (dig22*3) + (dig11*4);
    xx=x%10;
    printf("x = %d\n",x);
    printf("Digito verificador = %d\n",xx);
    if (xx==dig4)
    {
        printf("O digito verificador esta correto\n");
    }
    else
    {
        printf("O digito verificador nao esta correto\n");
    }
    return 0;

}






