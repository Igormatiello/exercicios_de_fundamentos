/*Uma pessoa resolveu fazer uma aplicação em uma poupança programada1
. Para calcular seu rendimento,
ela deverá fornecer o valor constante da aplicação mensal, a taxa de juros (%) e o prazo da aplicação (em
meses). Sabendo-se que a fórmula usada para este cálculo é:

Onde: i = taxa de juros, vm = valor mensal da aplicação e n = número de meses.
Obs.: Para calcular a potência pode ser utilizada a função pow() da biblioteca math.h.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float aplica, taxa, prazo,valor;
    printf("Informe o valor da aplicaçao: R$ ");
    scanf("%f", &aplica);
    printf("Informe a taxa de rendimento ( entre 0 e 1 ): ");
    scanf("%f", &taxa);
    printf("Informe o numero de meses: ");
    scanf("%f", &prazo);
    valor= ((aplica) * ((pow(1+taxa,prazo))-1.0))/taxa;

    printf("O valor final eh R$ %.2f\n", valor);

    return 0;

}
