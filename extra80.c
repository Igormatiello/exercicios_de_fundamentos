/*DO - WHILE
10) Uma indústria fabrica roupas categorizadas em masculinas, femininas e infantis. Ler a quantidade e a
respectiva categoria (M, F ou I). Após o loop, calcular e mostrar o percentual de produtos por categoria.
Validar para que seja informada uma categoria válida. Finalizar a leitura quando informado um valor 0 ou
negativo para a quantidade. Ler inicialmente a quantidade e depois a categoria. Se informada uma
quantidade negativa, não ler a categoria
*/
#include <stdio.h>
int main(void)
{
    int quant,somatotal=0,masc=0,femi=0,infa=0;
    float mascpercentual,femipercentual,infapercentual;
    char cate;

    do
    {
        printf("\nInforme a quantidade: ");
        setbuf(stdin,NULL);
        scanf("%d",&quant);
        if (quant > 0)
        {
            printf("\nInforme a categoria - (F/f) Feminino, (M/m) Masculino ou (I/i) Infantil: ");
            setbuf(stdin,NULL);
            scanf("%c",&cate);

            if ((cate=='f' ||cate=='F' || cate=='m' || cate=='M' || cate=='i'  || cate=='I') && (quant >0))
            {
                somatotal= somatotal+quant;
                if (cate=='f' ||cate=='F')
                {
                    femi=femi+quant;
                }
                if (cate=='m' ||cate=='M')
                {
                    masc=masc+quant;
                }
                if (cate=='i' ||cate=='I')
                {
                    infa=infa+quant;
                }
            }

            else
            {
                printf("Categoria invalida\n");
            }
        }



    }
    while (quant>0);

    mascpercentual=((float)masc/somatotal)*100;
    femipercentual= ((float)femi/somatotal)*100;
    infapercentual=((float)infa/somatotal)*100;
    if (somatotal>0)
    {
        if (femipercentual!=0)
        {
            printf("%.2f%% Feminino\n",femipercentual);
        }

            if (mascpercentual!=0)
            {printf("%.2f%% Masculino\n",mascpercentual);
            }
        if (infapercentual!=0)
        {
            printf("%.2f%% Infantil\n",infapercentual);
        }
    }

    return 0;
}
