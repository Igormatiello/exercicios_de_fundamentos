/*4) Ler o g�nero (F ou f para feminino, M ou m para masculino. Para qualquer outro caractere informar que �
inv�lido e finalizar o programa). Se informado um caractere v�lido, ler a altura da pessoa e calcular e mostrar
o seu peso ideal, utilizando as seguintes f�rmulas:
a) Para homens: (72.7 * h) - 58;
b) Para mulheres: (62.1 * h) - 44.7
*/



#include <stdio.h>


int main(void)
{


    char ch;
    float alt;

    printf("Informe o genero (M,m,F ou f): ");
    scanf("%c",&ch);

    switch (ch)
    {


    case 'f':
    case 'F':
        printf("Informe sua altura: \n");
        scanf("%f",&alt);
        printf("Peso ideal:%.2f\n", ((alt*62.1)-44.7));

    break;
    case 'M':
    case 'm':
        printf("Informe sua altura: \n");
        scanf("%f",&alt);
    printf("Peso ideal:%.2f\n", ((alt*72.7)-58));
    break;
    default:
        printf("Caractere invalido\n");
    }
    return 0;

}


