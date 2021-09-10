

int impri_fat(int num)
{
    int i;
    for (i=1;i<=num;i++)
    {
        if (i!=num){
        printf("%d * ",i);
    }
    else
    {
        printf("%d =",i);
    }
}
}
int res_primo(int maximo)
{
    int somatorio=1,j;
    for (j=maximo; j>=2; j--)
    {
        somatorio=somatorio*j;

    }
    printf(" %d\n",somatorio);

}
