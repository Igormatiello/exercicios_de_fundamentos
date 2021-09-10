/*)1) Elabore um programa que obtenha por meio do teclado a pontuação, em valores inteiros, de um candidato ao
concurso vestibular, nas seguintes área: exatas (e), humanas (h) e conhecimento geral (cg). A seguir deverá ser
definida a média ponderada usando a seguinte expressão: mp = ((e * 3) + (h * 2) + cg) / 6. A média ponderada
calculada define o rendimento do candidato de acordo com a seguinte tabela:
Insuficiente = 0 - 250 pontos
Baixo = 251 - 500 pontos
Regular = 501 - 700 pontos
Bom = 701 - 900 pontos
Excelente = maior que 900 pontos
*/

#include <stdio.h>
    int main(void)
    {
    int exatas,humanas,cg,ponderada;

    printf("Informe a pontuacao em exatas:");
    scanf("%d",&exatas);
    printf("Informe a pontuacao em humana:");
    scanf("%d",&humanas);
    printf("Informe a pontuacao em conhecimento geral:");
    scanf("%d",&cg);
    ponderada=((exatas*3)+(humanas *2)+(cg))/6;
    if (ponderada<=250)
    {
        printf("Rendimento insufuciente\nMedia ponderada: %d",ponderada);
    }
     if ((ponderada>=251) && (ponderada<=500))
    {
        printf("Rendimento baixo\nMedia ponderada: %d",ponderada);
    }
    if ((ponderada>=501) && (ponderada<=700))
    {
        printf("Rendimento regular\nMedia ponderada: %d",ponderada);
    }
    if ((ponderada>=701) && (ponderada<=900))
    {
        printf("Rendimento bom\nMedia ponderada: %d",ponderada);
    }
    if (ponderada>900)
    {
        printf("Rendimento excelente\nMedia ponderada: %d",ponderada);
    }









    return 0;
    }
