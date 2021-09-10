void mostra_pares(int num)
{
    int i;
    for (i=num; i>=2; i--)
    {
        if (i%2==0)
        {
            printf("%d  ",i);
        }


    }

}

int soma_pares(int num)
{

    int i,somatorio=0;
    for (i=num; i>=2; i--)
    {
        if (i%2==0)
        {
            somatorio=somatorio+i;
        }


    }
    return(somatorio);



}
