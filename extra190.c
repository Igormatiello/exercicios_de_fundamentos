
/*10) Ler a quantidade e o respectivo valor de produtos. Parar a leitura quando informado valor 0 ou negativo
para a quantidade. Ler o valor somente se informada quantidade válida. O valor deve ser validado para que
seja positivo.
a) Calcular o valor total da compra.
b) Calcular o valor médio dos itens comprados (fazer a média).
c) Do valor total da compra separar e mostrar reais e centavos.
d) Dos reais separar em cédulas de 100, 50, 20, 10, 5, 2 e moedas de 1.




*/



#include <math.h>
#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int quant,contagem=0,reais,nota100,nota50,nota20,nota10,nota5,nota2,nota1;
        float valor,total=0,media,centavos;
        do{
        printf("\nInforme a quantidade de um produto: ");
        scanf("%d",&quant);


        if (quant>0){

                do{
        printf("Informe o valor unitario do produto: ");
        scanf("%f",&valor);
                }while(valor<=0);

                contagem=contagem+quant;

        total=total + (quant*valor);

        }


        }while(quant>0);

        media=total/contagem;
        printf("VALOR TOTAL DA COMPRA: R$ %.2f\n",total);
        printf("VALOR MEDIA DA COMPRA: R$ %.2f\n",media);
        reais=(int)total;
        centavos= total - reais;
        printf("\nO valor total da compra eh %d reias e %.2f centavos.\n",reais,centavos);

        printf("%d reais equivale a: \n",reais);


        nota100= reais/100;
        reais=reais-(nota100*100);
        nota50=reais/50;
        reais=reais-(nota50*50);
        nota20=reais/20;
        reais=reais-(nota20*20);
        nota10=reais/10;
        reais=reais-(nota10*10);
        nota5=reais/5;
        reais=reais-(nota5*5);
        nota2=reais/2;
        reais=reais-(nota2*2);
        nota1=reais/1;

        if(nota100!=0){
        printf("%d nota(s) de 100\n",nota100);
        }


         if(nota50!=0){
        printf("%d nota(s) de 50\n",nota50);
        }


         if(nota20!=0){
        printf("%d nota(s) de 20\n",nota20);
        }

         if(nota10!=0){
        printf("%d nota(s) de 10\n",nota10);
        }


         if(nota5!=0){
        printf("%d nota(s) de 5\n",nota5);
        }

         if(nota2!=0){
        printf("%d nota(s) de 2\n",nota2);
        }
        if (nota1!=0){

            printf("%d moeda(s) de 1\n",nota1);
        }




        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



