/*8) Ler números inteiros informados pelo usuário até ser informado um valor negativo. Dentre os números
informados, exceto o valor negativo que é a condição de saída:
a) Contar a quantidade de números menores que 10 ou maiores que 100.
b) Contar a quantidade de números ímpares.
c) Contar a quantidade de números divisíveis por 10.
d) Contar a quantidade de números entre 10 e 100.
e) Contar quantas vezes é informado o número 30.
f) Contar quantas vezes é informado um número diferente de 10, de 20 e de 30.
*/

#include <stdio.h>


int main(void)


{
    int num,maior100=0,menor10=0,impar=0,div10=0,entre=0,num30=0,dif10=0,dif20=0,dif30=0;
    do {
            printf("Informe um numero: ");
            scanf("%d",&num);
            if (num<10)
            {
                menor10=menor10+1;
            }
            if (num>100)
            {
                maior100=maior100+1;
            }
            if (num%2!=0)
            {
                impar=impar+1;
            }
            if (num%10==0)
            {
                div10=div10+1;
            }
            if (num>10 && num<100)
            {
                entre=entre+1;
            }
            if (num==30)
            {
                num30=num30+1;
            }
            if (num!=10)
            {
                dif10=dif10+1;
            }
            if (num!=20)
            {
                dif20=dif20+1;
            }
            if (num!=30)
            {
                dif30=dif30+1;
            }


    }while (num>=0);
    printf("Quantidade de vezes informado um numero menor que 10: %d\n",menor10);
    printf("Quantidade de vezes informado um numero maior que 100: %d\n",maior100);
    printf("Quantidade de vezes informado um numero impar: %d\n",impar);
    printf("Quantidade de vezes informado um numero divisivel por 10: %d\n",div10);
    printf("Quantidade de vezes informado um numero maior que 10 e menor que 100: %d\n",entre);
    printf("Quantidade de vezes informado um numero igual a 30: %d\n",num30);
    printf("Quantidade de vezes informado um numero diferente de 10: %d\n",dif10);
    printf("Quantidade de vezes informado um numero diferente de 20: %d\n",dif20);
    printf("Quantidade de vezes informado um numero diferente de 30: %d\n",dif30);



    return 0;
}






