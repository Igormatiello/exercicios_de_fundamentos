/*Fazer um programa que leia um n�mero inteiro de at� tr�s d�gitos (considere que ser� fornecido um
n�mero de at� 3 d�gitos), calcule e imprima a soma dos seus d�gitos. */

int main(void)
{
    int num, centena, dezena,unidade,total;
    printf("Informe um numero inteiro com ate 3 digitos: \n");
    scanf("%d", &num);
    centena= num / 100;
    dezena= (num - (centena * 100))/10;
    unidade= (num - (dezena*10) - (centena*100));
    total= centena + unidade+ dezena;
    printf("Soma: %.0d", total);







    return 0;

}
