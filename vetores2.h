void gerar_vetor(int vetor[], int tamanho, int limite)
{
    int i;
    srand(time(NULL));
    for (i=0; i<tamanho; i++)// GERAÇÃO
    {
        vetor[i]=(rand() % limite)+1 ;
    }

}


void mostra_vetor(int vetor[],int tamanho)
{
    int i;

    for (i=0; i<tamanho; i++)
    {
        printf("%d\t",vetor[i]);

    }

}
