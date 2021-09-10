int soma(int num1, int num2); //protótipo da função
int main(void)
{
int n1=2, n2=3, result; //variáveis locais à função
result = soma(n1, n2); //chama a função e passa dois parâmetros
}
int soma(int num1, int num2) //função declarada para receber dois
//parâmetros
{
int s; //variável local à função
s = num1 + num2;
return(s);
//retorno da função. São do tipo int e a função
//também
}

