/* Escreva um programa que leia dois valores que são o raio e a altura de um cilindro e calcule o seu volume,
cuja fórmula é: Volume = 3.1415 * Raio2
* Altura.
*/

int main(void)
{
    float altura,raio, volume;
    printf("Informe o raio do cilindro,em cm:  ");
    scanf("%f", &raio);
    printf("Informe a altura do cilindro, em cm: ");
    scanf("%f", &altura);
    volume= (pow(raio,2))* altura * 3.1415;

    printf("O volume total eh %.1f cm^3\n", volume);

    return 0;

}
