
/*
       5) Ler caracteres informados pelo usu�rio. Parar a leitura quando o usu�rio informar o caractere '0'. Contar quantas vezes foi
informado o caractere 'A'.

*/
#include <stdio.h>

int main(void)
{
    char letra;
    int contagem=0;
    while(letra!='0')
    {
        printf("\nInforme um caractere: ");
        setbuf(stdin,NULL);
        scanf("%c", &letra);
        letra=toupper(letra);

        if(letra == 'A')
        {
            contagem++;
        }
    }

    printf("Vezes que foi informado o caracatere A/a: %d\n",contagem);

    return 0;
}






