
/*3) Ler a idade, o tipo (E = Estudante e P = Professor) de cinco pessoas. Se o tipo for P, solicitar o salário e
fazer a média dos salários informados. Se o tipo for E, solicitar se o mesmo recebe mesada. Contar quantos
recebem e quantos não recebem mesada. Garantir que o usuário informe uma idade válida, ou seja, maior
que 0, que o tipo seja E ou P e que recebe mesada seja S ou N. Validar essas entradas, ou seja, solicitar
essas entradas até que sejam válidas. Validar para que não seja realizada uma divisão por zero

*/




#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        char tipo,mesada;
            int soma,contProfe,commesada,semmesada,salario;
            float media;
        int i,id,contPessoa=1;
        soma=0;
            contProfe=0;
            commesada=0;
            semmesada=0;
        for (i=1; i<=5; i++)
        {



        do{
        printf("Informe a idade da pessoa %d: ",contPessoa);
        scanf("%d", &id);
        contPessoa=contPessoa+1;
        }while(id<1);

        do{
        printf("Informe o tipo (P = Professor ou E = Estudante):");
        setbuf(stdin,NULL);
        scanf("%c",&tipo);
        tipo=toupper(tipo);
        }while(tipo!='P' && tipo!='E');

        if (tipo=='E')
        {
        do{
                printf("Recebe mesada (S = Sim ou N = Nao)?");
                setbuf(stdin,NULL);
                scanf("%c",&mesada);
                mesada=toupper(mesada);
                if (mesada=='S')
                {
                    commesada= commesada+1;
                }
                if (mesada=='N')
                {
                    semmesada=semmesada+1;
                }

        }while(mesada!='S' && mesada!='N');
        }

        if (tipo=='P')
        {
            printf("Informe o salario: ");
            scanf("%d",&salario);
            soma=soma+salario;
            contProfe=contProfe+1;


        }


        }
        if (contProfe!=0){
        media= (float)soma/contProfe;
        printf("Media salarial dos professores: R$ %.2f\n",media);
        }
        else {
            printf("Nao ha professores informados\n");
        }
        printf("Numero de estudantes que recebem mesada: %d\n",commesada);
        printf("Numero de estudantes que nao recebem mesada: %d\n",semmesada);


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



