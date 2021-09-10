void gerar_vetor(int vetorA[],int vetorB[], int tamanhoA,int tamanhoB, int limiteA, int limiteB)
{
    int i;
    srand(time(NULL));
    for (i=0; i<tamanhoA; i++)// GERAÇÃO
    {

        vetorA[i]=(rand() % limiteA)+1 ;
    }
 for (i=0; i<tamanhoB; i++)// GERAÇÃO
    {

        vetorB[i]=(rand() % limiteB)+1 ;
    }

}


void mostra_vetor(int vetorA[],int vetorB[], int tamanhoA,int tamanhoB, int limiteA, int limiteB)
{
    int i,tamanhoC,l;
    printf("\n\n===VETOR A===\n");
    for (i=0; i<tamanhoA; i++)
    {
        printf("%d\t",vetorA[i]);

    }
    printf("\n\n===VETOR B===\n");
    for (i=0; i<tamanhoB; i++)
    {
        printf("%d\t",vetorB[i]);

    }
    if (tamanhoA>=tamanhoB)
    {
        tamanhoC=tamanhoA;
    }
    else{
        tamanhoC=tamanhoB;
    }
    int vetorC[tamanhoC];


    for (l=0; l<tamanhoC; l++)
    {
        if (vetorA[l]>vetorB[l])
        vetorC[l]=1;
        else if (vetorA[l]<vetorB[l])
        {
            vetorC[l]=-1;
        }
        else
        {
            vetorC[l]=0;
        }


    }
printf("\n\n===VETOR C===\n");
for (l=0; l<tamanhoC; l++)
{
    printf("%d\t",vetorC[l]);


}




}
