/*9) Leia dois valores que representam os limites de um intervalo. O usu�rio pode informar os valores em
ordem crescente ou decrescente. Para os limites do intervalo validar para que:
1) O programa n�o aceite valores iguais, ou seja, que o limite inferior seja igual ao superior e vice-versa;
2) Em cada limite n�o seja informado valor menor ou igual a zero.
Apresente os valores separados por tabula��o. Fa�a a m�dia dos valores que s�o divis�veis por 11 e por 7,
desse intervalo.

*/
#include <stdio.h>

int validacao = 0;

int main(void)
{
    int termos,i=1,atual=1,ultimo=1,proximo;
    printf("Quantos termos mostrar: ");
    scanf("%d",&termos);
    printf("%d\t%d\t",i,i);
    for (i=2; i<=termos; i++)
    {
        proximo=ultimo+atual;
        printf("%d\t",proximo);
        ultimo=atual;
        atual=proximo;
    }

    return 0;
}






