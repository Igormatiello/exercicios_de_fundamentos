/*Criar um programa que leia o peso (em kg) de uma pessoa e calcule e imprima:
a) O peso da pessoa em gramas.
b) O novo peso, em gramas, se a pessoa engordar 12%.*/
int main(void)
{
    float peso, gramas, gramas2,kg;
    printf("Informe o seu peso, em kg: \n");
    scanf("%f",&peso);
    gramas= peso*1000;
    gramas2= (peso*1.12) *1000;
    kg= (peso *1.12);
    printf("Peso em gramas: %.1f\n",gramas);
    printf("Peso em gramas se engordar 12 porcento: %.1f\n",gramas2);
    printf("Peso em kilogramas se engordar 12 porcento: %.1f\n", kg);

   return 0;
}
