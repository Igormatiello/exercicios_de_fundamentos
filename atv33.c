/*3) Ler tr�s valores inteiros diferentes e coloc�-los em ordem crescente. Os valores devem ser apresentados
com uma instru��o:
printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);
Sugest�o: Dividir o problema em partes: encontrar o maior, o menor e o do meio separadamente. Armazenar
os valores em vari�vel e mostr�-los com uma �nica instru��o.
*/
#include <stdio.h>


int main(void)
{


    int num1,num2,num3,menor,maior,medio;

    printf("Informe o primeiro valor: ");
    scanf("%d",&num1);
    printf("Informe o segundo valor: ");
    scanf("%d",&num2);
    printf("Informe o terceiro valor: ");
    scanf("%d",&num3);

    if (( num1 < num2) && (num1 < num3))
        {
            menor=num1;
        }
     if (( num2 < num1) && (num2 < num3))
        {
            menor=num2;
        }
      if (( num3 < num2) && (num3 < num1))
        {
            menor=num3;
        }


    if (( num1 > num2) && (num1 > num3))
        {
            maior=num1;
        }
     if (( num2 > num1) && (num2 > num3))
        {
            maior=num2;
        }
      if (( num3 > num2) && (num3 > num1))
        {
            maior=num3;
        }
        if (( num1 < num2) && (num1 > num3) || ( num1 > num2) && (num1 < num3))
        {
            medio=num1;
        }
     if (( num2 < num1) && (num2 > num3) || ( num2 > num1) && (num2 < num3))
        {
            medio=num2;
        }

      if (( num3 < num2) && (num3 > num1) || ( num3 > num2) && (num3 < num1))
        {
            medio=num3;
        }

        printf("Menor:%d\nMedio:%d\nMaior:%d",menor,medio,maior);



    return 0;

}

