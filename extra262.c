/*) 2) Elaborar um programa que aceita e valida uma senha com 6 d�gitos num�ricos, que deve ser armazenada
em uma string. O usu�rio tem tr�s tentativas para acertar a senha, se ultrapassar esse limite, ele deve ser
informado. O usu�rio tamb�m deve ser informado se ele acertou a senha em at� tr�s tentativas.
Dica: Considere que j� existe uma senha armazenada na string senhaArmazenada[7]="123456";
*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {

        char senhaArmazenada[7]="123456",senhaDigitada[7];
        int i,acesso=0,j,contagem=0;
        for (i=1; i<=3; i++)
        {
            printf("Informe a senha: ");
            setbuf(stdin,NULL);
            gets(senhaDigitada);
            for (j=0; j<6; j++)
            {
//            printf("%s\n",senhaDigitada);

                if (senhaDigitada[j]==senhaArmazenada[j])
                {
                    contagem++;
                }
            }
            if (contagem==6)
            {
                printf("Senha Valida!\n");
                acesso=1;

                break;
            }
        }
        if (acesso==0)
        {
            printf("Acesso Negado!");
        }


        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
