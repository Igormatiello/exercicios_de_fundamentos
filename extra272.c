/*)2) Elaborar um programa que leia uma frase e determine se a mesma representa um palíndromo. Em frases
de palíndromos os espaços não são considerados, então é necessário inicialmente retirar os espaços em
brancos do texto. Para comparar as strings use a função int comparaStrings(char str1[],
char str2[]) criada na Lista 4 de exercícios.
Exemplos de frases palíndromos:
Socorram-me, subi no ônibus em Marrocos
Anotaram a data da maratona
A mala nada na lama
A torre da derrota
A cara rajada da jararaca
*/

int comparaStrings(char str1[], char str2[])
{
    int i=0, resultado;

    while(str1[i] != '\0' && str2[i] != '\0') //enquanto a string 1 e 2 forem diferentes de final de string
    {
        if(str1[i] == str2[i]) //verifica que se o caracter que está na string 1 é igual ao caracter que está na string 2
        {
            resultado = 1; //significa que o caracter das duas strings é igual
        }
        else
        {
            resultado = 0; //significa que o caracter das duas strings é diferente, nesse caso, pode sair sair da repetição
            break;
        }
        i++;
    }
    return(resultado);
}

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    do
    {
        char texto[200], atual[200],inverso[200];
        int i=0,j=0,k=0;
        printf("Informe uma frase: ");
        setbuf(stdin, NULL);
        gets(texto);

        while(texto[i] != '\0')
        {
            if (texto[i]==' ')
            {

            }
            else
            {
                atual[j]=texto[i];
                j++;
            }
            i++;
        }
        atual[j]='\0';


        for(i=j-1; i>=0; i--)
        {

            inverso[k] = atual[i];
            k++;

        }
        inverso[k] = '\0';
        printf("\nInverso da palavra: %s\n",inverso);

        if (comparaStrings(atual, inverso) == 1)
        {
            printf("\nEh palindromo\n");
        }
        else
        {
            printf("\nNao eh palindromo\n");
        }





        printf("\n\nDeseja repetir o processo:(s ou n) ");
        setbuf(stdin,NULL);
        scanf("%c",&repetir);
        repetir=toupper(repetir);

    }
    while (repetir=='S');


    return 0;
}
