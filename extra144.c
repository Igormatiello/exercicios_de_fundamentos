
/*4) Elaborar um programa que solicita a idade de um profissional e se ele é do tipo autônomo ou funcionário, calcula e
mostra:
a) O total de profissionais autônomos com menos de 18 anos.
b) A média das idades dos funcionários com mais de 18 anos.
O programa deve validar as entradas: permitir somente valores positivos (maior que 0) para a idade e A/a/F/f (autônomo
ou funcionário) para o tipo de profissional.
O programa termina quando for informado 0 ou um valor negativo para a idade, que não deve ser considerado.
Portanto, ao ser informado 0 ou um valor negativo para a idade, não deve ser solicitado o tipo de profissional.

*/
#include <stdio.h>
int main(void)
{
    int id=1,autonomo=0,soma=0,contagem=0;
    float media;
    char tipo;

    while (id >0)
    {
        printf("\nInforme sua idade: ");
        setbuf(stdin,NULL);
        scanf("%d",&id);
        if (id > 0  )
        {
            printf("'A' ou 'a' para autonomo e 'F' ou 'f' para funcionario: ");
            setbuf(stdin,NULL);
            scanf("%c",&tipo);

            if ( tipo=='a' || tipo=='A' || tipo=='f' || tipo=='F' )
            {
                if (id < 18 && (tipo=='a' || tipo=='A'))
                {
                    autonomo=autonomo+1;
                }
                if (id>18 && (tipo=='f' || tipo=='F'))
                {
                    soma=soma+id;
                    contagem=contagem+1;
                }
            }
        }

    }
    printf("Profissionais autonomos com menos de 18 anos: %d\n",autonomo);
    media= (float)soma/contagem;
    printf("Media de idade de profissionais com mais de 18 anos: %.1f\n",media);

    return 0;

}






