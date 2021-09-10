int primo(int x)
{


    int i, cont=0;


    for (i=(x-1); i>=2; i--)
    {

        if (x%i==0)
        {
            cont=1;
            break;

        }
    }
        return(cont);

}
