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
    printf("Informe o valor constante da aplicaçao mensal: ");
    scanf("%f", &aplica);
    printf("Informe a taxa de juros, em porcentagem: ");
    scanf("%f", &taxa);
    printf("Informe o prazo da aplicaçao, em meses: ");
    scanf("%f", &prazo);
    valor= ((aplica) * ((pow(1+taxa,prazo))-1.0))/taxa;

    printf("Valor final: %.2f\n", valor);

    return 0;

}
