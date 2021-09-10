/*Leia um valor double que representa o troco a ser fornecido por um caixa. Separe a parte inteira (reais) da
parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos. Use a função round, da biblioteca
math.h, para o arredondamento da parte decimal).*/
 #include <stdio.h>
 #include <math.h>

 int main(void)
 {
     float troco, centavo;
     int inteiro;
     printf("Informe o valor do troco: \n");
     scanf("%f", &troco);
     inteiro= (int)troco *1;
     centavo = (troco - (float)inteiro)*100;
     printf("O valor informado eh %d reais e %.0f centavos", inteiro, centavo);

     return 0;


 }
