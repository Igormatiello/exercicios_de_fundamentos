
/*13) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar 1, pois tem apenas um
número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos em positivos. Validar
para não fazer divisão por zero no cálculo da média.

*/
#include <stdio.h>

int main(void)
{
    int num=1,positivo=0,negapar=0,soma=0,contagem=0;
    float media;
    while (num!=0)
    {
        printf("Informe um numero: ");
        scanf("%d",&num);
  if (num!=0)
  {
      if (num>0)
      {
          positivo=positivo+1;
      }
      if ((num<0) && (num%2==0))
      {
          negapar=negapar+1;
      }
      if (num%3==0)
      {
          num=fabs(num);

      soma=soma+num;
      contagem=contagem+1;


      }
  }


    }
    printf("\nNumeros positivos: %d\n\n",positivo);
    printf("Numeros negativos que sao pares: %d\n\n",negapar);
    media=(float)soma/contagem;
    printf("A media dos numeros divisiveis por 3 eh: %.1f\n",media);

    return 0;
}






