/*Ler um n�mero inteiro com at� 3 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Na sequ�ncia calcular e mostrar o inverso do n�mero.
*/
int main(void)
{
    int num, digito1, digito2, digito3;
    printf("Informe um numero inteiro com ate 3 digitos: \n");
    scanf("%d",&num);
    digito1= num /100;
    digito2= (num - (digito1 *100)) /10;
    digito3= (num - (digito1 *100) - (digito2 *10));
    printf("%d eh o primeiro digito\n", digito1);
    printf("%d eh o segundo digito\n", digito2);
    printf("%d eh o terceiro digito\n", digito3);
    printf("O inverso do numero eh: %d%d%d", digito3,digito2, digito1);






    return 0;
}
