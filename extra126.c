
/*
     6) Ler caracteres e parar quando o usuário informar o caractere '0'. Utilizando a tabela ASCII contar quantos caracteres são letras
maiúsculas, quantos são letras minúsculas e quantos caracteres não são letras. Sugestão: utilizar o código numérico para comparar
(A equivale a 65, B a 66...).

*/
#include <stdio.h>

int main(void)
{
    int maiscula=0,minuscula=0,naoletra=0,contagem=0;
    char ch='a';

    while (ch!='0')
    {
        printf("Informe um caracter: ");
        setbuf(stdin,NULL);
        scanf("%c",&ch);

        if (ch>='A' && ch<='Z')
        {
            maiscula=maiscula+1;

        }
        if (ch>='a' && ch<='z')
        {
            minuscula=minuscula+1;

        }
         if (ch !='0')
        {
            contagem++;
        }




    }
    naoletra=contagem-(minuscula+maiscula);

    printf("Quantidade de letras maisculas: %d\n",maiscula);
    printf("Quantidade de letras minusculas: %d\n",minuscula);
    printf("Quantidade de nao letras: %d\n",naoletra);
    return 0;
}






