
/*8) Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser mostrada. Validar a entrada,
garantindo que o valor informado para a quantidade seja do tipo inteiro e maior que 0.




*/



#include <math.h>
#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int quant;

        do{
                printf("Quantos numeros impares deseja informar? ");
        scanf("%d",&quant);
                       if (quant<=0){
                    printf("Valor Invalido! A quantidade informada deve ser maior que 0.\n");
                }
                if (quant>=32767 || quant<=-32767)
                {
                    printf("Tipo de dado invalido!\n");
                }



        }while(quant<=0 && (quant<=32767 || quant<=-32767));


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



