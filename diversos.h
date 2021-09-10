int funcao21(int num)
{
    int resultado;
    resultado=pow(num,2);
    return(resultado);

}
float funcao22(int num)
{
    float convert;
    convert=num * 0.393701;
    return(convert);
}


float funcao23(float valor, float cot, char tipo)
{
    float resultado;

    if (tipo=='D')
    {
        resultado= valor/cot;
    }
    else
    {
        resultado=valor *cot;
    }
    return(resultado);


}

int funcao24(int num1,int num2)
{
    int resultado;
    resultado=num1*num2;
    return(resultado);

}
