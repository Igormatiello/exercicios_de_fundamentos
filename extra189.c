
/*8) Apresentar os números primos em ordem crescente entre dois valores informados pelo usuário, com x
valores por linha. Validar as entradas para que sejam valores positivos.




*/



#include <math.h>
#include <ctype.h>
#include <stdio.h>
int main(void)



{
    char repetir;
    do
    {
        int id,somaAgro=0,contAgro=0,contPb=0,teste=1,menor,naoAgro=0;
        float MediaAgro;
        char curso,casa;

        do{
        printf("Informe a idade do aluno: ");
        scanf("%d",&id);
        if (id>=1)
        {
        printf("Informe o curso (Q/q/A/a): ");
        setbuf(stdin,NULL);
        scanf("%c",&curso);
        curso=toupper(curso);

        printf("Reside em Pato Branco (S/s/N/n)? ");
        setbuf(stdin,NULL);
        scanf("%c",&casa);
        casa=toupper(casa);


        if (curso=='A')
        {
            somaAgro=somaAgro+id;
            contAgro=contAgro+1;
        }

          if (casa=='S')
          {
              contPb=contPb+1;
          }


            if (teste==1 && casa=='N')
            {
                menor=id;
                teste=0;
            }
        if (casa=='N' && id<menor)
        {

            menor=id;

        }

        if (curso!='A')
        {
            naoAgro=naoAgro+1;
        }



        }
        }while(id>=1);



        if (contAgro>0){
        MediaAgro=(float)somaAgro/contAgro;
        printf("A media de idade dos alunos de Agronomia eh: %.2f\n",MediaAgro);
        }
        else
        {
            printf("A media de idade dos alunos de Agronomia eh: 0\n");
        }

        printf("A quantidade de alunos que residem em Pato Branco: %d\n",contPb);

        printf("A menor idade entre os alunos que nao residem em Pato Branco eh: %d\n",menor);

        printf("A quantidade de alunos que nao cursam Agronomia eh: %d\n",naoAgro);





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');
    return 0;

}



