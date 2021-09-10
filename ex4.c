#include <stdio.h>

int main(void)
{
     char letra1, letra2;

    //entrada de dados
    printf("Informe a primeira letra: ");
    scanf("%c", &letra1);
    setbuf (stdin, NULL); //limpa o buffer de entrada
    printf("Informe a segunda letra: ");
    scanf("%c", &letra2);


    //saida de dados

    printf("Primeira letra %c\n", letra1);
    printf("Segunda letra %c\n", letra2);



    return 0;

}
