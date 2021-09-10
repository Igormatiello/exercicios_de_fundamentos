/* Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Também calcular e mostrar a soma dos dígitos.*/
int main(void)
{
    int digito1, digito2, digito3, digito4, digito5, num,soma;
    printf("Informe um numero inteiro com ate 5 digitos: \n");
    scanf("%d",&num);
    digito1= num /10000;
    digito2= (num - (digito1 *10000)) /1000;
    digito3= (num - (digito1 *10000) - (digito2 *1000))/100;
    digito4= (num - (digito1 *10000) - (digito2 *1000) - ( digito3 *100))/10;
    digito5= (num - (digito1 *10000) - (digito2 *1000) - ( digito3 *100) - (digito4 *10));
    printf("%d eh o primeiro digito\n", digito1);
    printf("%d eh o segundo digito\n", digito2);
    printf("%d eh o terceiro digito\n", digito3);
    printf("%d eh o quarto digito\n", digito4);
    printf("%d eh o quinto digito\n", digito5);
    soma= digito1+ digito2+ digito3+ digito4+ digito5;
    printf("A soma dos digitos eh: %d", soma);

    return 0;
}
