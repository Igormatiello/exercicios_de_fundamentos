

void gerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite)
{

    int i,j;

    srand(time(NULL));

    for(i=0; i<linha; i++)
    {
        for (j=0; j<coluna; j++)
        {
         matriz[i][j] =  rand()  % limite;
        }


    }

}
void gerarMatrizInteiroComLimiteInferior(int linha, int coluna, int matriz[linha][coluna], int limite1, int limite2)
{

    int i,j;

    srand(time(NULL));

    for(i=0; i<linha; i++)
    {
        for (j=0; j<coluna; j++)
        {
         matriz[i][j] =  rand()  % limite2 +limite1;
        }


    }

}
void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{

    int i,j;

    for(i=0; i<linha; i++)
    {
         for (j=0; j<coluna; j++)
        {
        printf("%3d\t", matriz[i][j]);

        }
        printf("\n");
    }



}

int soma_matriz(int linha, int coluna, int matriz[linha][coluna])
{


    int i,j,soma=0;

    for(i=0; i<linha; i++)
    {
         for (j=0; j<coluna; j++)
        {
        soma=soma+ matriz[i][j];

        }

    }
    return(soma);

}


int potencia(int num1, int num2)
{
    int valor;
    valor=pow(num1,num2);
    return(valor);

}
