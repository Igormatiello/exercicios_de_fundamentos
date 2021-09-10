


void mostra_vetor(int vetor[],int tamanho, int limite1,int limite2)
{
    printf("\n===VETOR==\n");
int maior,menor, contagem=0;
float media;
for (i=0; i<tamanho; i++)
{

    printf("%d\t",vetor[i]);
    if (i==0)
    {
        maior=vetor[i];
        menor=vetor[i];
    }
    else if (vetor[i]>=maior)
    {
        maior=vetor[i];
    }
    if (vetor[i]<menor)
    {
        menor=vetor[i];
    }
    contagem=contagem+vetor[i];


}

printf("\n\nMenor temperatura ocorrida: %d\n",menor);
printf("\nMaior temperatura ocorrida: %d\n",maior);
media=(float)contagem/tamanho;
printf("\nTemperatura media: %.2f\n",media);
for (i=0; i<tamanho; i++)
{

}



}
