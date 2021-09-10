#include <stdio.h>
#define PI 3.14159

int main(void)
{

    float raio,circunferencia;
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    circunferencia= 2 * raio *PI;
    printf("Circnuferencia: %.2f",circunferencia);



    return 0;
}
