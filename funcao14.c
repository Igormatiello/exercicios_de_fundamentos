int soma(int num1, int num2); //prot�tipo da fun��o
int main(void)
{
int n1=2, n2=3, result; //vari�veis locais � fun��o
result = soma(n1, n2); //chama a fun��o e passa dois par�metros
}
int soma(int num1, int num2) //fun��o declarada para receber dois
//par�metros
{
int s; //vari�vel local � fun��o
s = num1 + num2;
return(s);
//retorno da fun��o. S�o do tipo int e a fun��o
//tamb�m
}

