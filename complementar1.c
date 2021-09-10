
/*7) Faça um programa que recebe um valor de troco e calcula quantas moedas de R$ 1,00, R$ 0,50, R$ 0,25,
R$ 0,10, R$ 0,05 e R$ 0,01 são necessárias para o troco




*/



#include <math.h>
#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        float troco;
        int moeda1,moeda50,moeda25,moeda10,moeda05,moeda01,teste;
        do{
        printf("Informe o troco: R$ ");
        scanf("%f",&troco);
        }while(troco<=0);

        teste=troco*100;

        moeda1=teste /100;
        teste=teste - (moeda1*100);

        moeda50=teste /50;
        teste=teste - (moeda50*50);

        moeda25=teste /25;
        teste=teste - (moeda25*25);

        moeda10=teste /10;
        teste=teste - (moeda10*10);

        moeda05=teste /5;
        teste=teste - (moeda05*5);

        moeda01=teste /1;
        teste=teste - (moeda01*1);


        if(moeda1!=0){
        printf("%d moeda(s) de um Real\n",moeda1);
        }
        if(moeda50!=0){
        printf("%d moeda(s) de um Cinquenta Centavos\n",moeda50);
        }
        if (moeda25!=0){
        printf("%d moeda(s) de um Vinte e cinco Centavos\n",moeda25);
        }
        if (moeda10!=0){
        printf("%d moeda(s) de um Dez Centavos\n",moeda10);
        }
        if (moeda05!=0){
        printf("%d moeda(s) de um Cinco Centavos\n",moeda05);
        }
        if (moeda01!=0){
        printf("%d moeda(s) de um Um Centavo\n",moeda01);
        }


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



