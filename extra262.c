/*) 2) Elaborar um programa que aceita e valida uma senha com 6 dígitos numéricos, que deve ser armazenada
em uma string. O usuário tem três tentativas para acertar a senha, se ultrapassar esse limite, ele deve ser
informado. O usuário também deve ser informado se ele acertou a senha em até três tentativas.
Dica: Considere que já existe uma senha armazenada na string senhaArmazenada[7]="123456";
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
