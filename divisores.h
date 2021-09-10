int op1(int num)
{
    int i,cont=0;
    for (i=num; i>=1;i--)
    {
        if (num%i==0)
        {
            cont++;
        }
    }
     return(cont);


}
int op2(int num)
{

    int i;
    for (i=1; i<=num;i++)
    {
        if (num%i==0)
        {
            printf("%d  ",i);
        }
    }


}


void ip3(int inf, int sup)
{
    int i,k,cont=0,soma=0;
    for (i=inf; i<=sup; i++)
    {
        soma=0;
        cont=0;
        printf(" %d - ",i);
        for (k=1; k<=i; k++)
        {
            if (i%k==0)
            {
                printf("%d ",k);
                cont++;
                soma=soma+k;
            }

        }
        printf("=> Qtde: %d ",cont);
        printf("=> Soma: %d\n",soma);
    }

}



int ip4(int num1,int num2)
{
    int superior,inferior,i;
    if (num1>=num2)
    {
        inferior=num2;
        superior=num1;
    }
    else{
        inferior=num1;
        superior=num2;
    }
    for (i=superior; i>=1; i--)
    {
        if (superior%i==0 && inferior%i==0)
        {
            return(i);
            break;
        }


    }


}
