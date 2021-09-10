/*Ler um número inteiro com até 4 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.*/
int main(void)
{
    int num, digito1, digito2, digito3,digito4;
    printf("Informe um numero inteiro com ate 4 digitos: \n");
    scanf("%d",&num);
    digito1= num /1000;
    digito2= (num - (digito1 *1000)) /100;
    digito3= (num - (digito1 *1000) - (digito2 *100))/10;
    digito4= (num - (digito1 *1000) - (digito2 *100) - ( digito3 *10));
    printf("%d eh o primeiro digito\n", digito1);
    printf("%d eh o segundo digito\n", digito2);
    printf("%d eh o terceiro digito\n", digito3);
    printf("%d eh o quarto digito\n", digito4);




    return 0;
}
