/*Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada1
. Para calcular seu rendimento,
ela dever� fornecer o valor constante da aplica��o mensal, a taxa de juros (%) e o prazo da aplica��o (em
meses). Sabendo-se que a f�rmula usada para este c�lculo �:

Onde: i = taxa de juros, vm = valor mensal da aplica��o e n = n�mero de meses.
Obs.: Para calcular a pot�ncia pode ser utilizada a fun��o pow() da biblioteca math.h.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float aplica, taxa, prazo,valor;
    printf("Informe o valor da aplica�ao: R$ ");
    scanf("%f", &aplica);
    printf("Informe a taxa de rendimento ( entre 0 e 1 ): ");
    scanf("%f", &taxa);
    printf("Informe o numero de meses: ");
    scanf("%f", &prazo);
    valor= ((aplica) * ((pow(1+taxa,prazo))-1.0))/taxa;

    printf("O valor final eh R$ %.2f\n", valor);

    return 0;

}
