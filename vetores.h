#define RAND_MAX 32767



void gerar_vetor(int vet[], int tam, int lim)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vet[i] =  rand()  % lim; //para gerar valores de 1 a limite
    }
}
void mostra_vetor(int vet[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%3d\t", vet[i]);
    }
}

void gerar_vetorcomlimite(int vetor[], int tamanho, int limite1,int limite2)
{
    int i;
    srand(time(NULL));
    for (i=0; i<tamanho; i++)// GERAÇÃO
    {


        vetor[i]= (rand() % ((limite2 - limite1) + 1)) + limite1;
    }

}

void ordenaVetor(int vetor[], int tam)
{
    int aux, i, j;
    for(j=tam-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}
void ordenaVetorFloat(float vetor[], int tam)
{
    float aux;
    int i, j;
    for(j=tam-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}


void gerarVetorFloat0a1(float vetor[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        vetor[i] = (float)(rand()) / RAND_MAX;
    }
}

void gerarVetorFloat0a100(float vetor[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {

        vetor[i] = ((float)(rand()) / RAND_MAX)*100;
    }
}

void mostrarVetorFloat(float vetor[], int tam)
{


    int i;
    for (i=0; i<tam; i++)
    {

        printf("%.1f    ",vetor[i]);
    }


}

float somarVetorFloat(float vetor[], int tam)
{
    int i;
    float somatorio=0;
    for (i=0; i<tam; i++)
    {
        somatorio=somatorio+vetor[i];
    }
    return(somatorio);



}

void gerarVetorCharMinuscula(char vetor[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {

        vetor[i] = rand() % 26 + 97;
    }
}

void gerarVetorCharMaiuscula(char vetor[], int tam)
{

    int i;
    for (i=0; i<tam; i++)
    {
        vetor[i] = rand() % 26 + 65;
    }

}


void mostrarVetorChar(char vetor[], int tam, int n)
{
    int i;
    for (i=0; i<tam; i++)
    {
        printf("%-3c ",vetor[i]);

        if ((i+1)% n ==0 )
        {
            printf("\n");
        }


    }

}

void
gerarVetorCharAlfanumerico(char vetor[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {

        vetor[i] = rand() % 223 + 33;
    }
}

void gerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo, int limPositivo)
{
    int i;
    for (i=0; i<tam; i++)
    {
        vetor[i] = rand() % (limPositivo + limNegativo + 1) - limNegativo;

    }

}



int verificar_perfeito(int num)
{
    int i,somatorio=0;

    for (i=1; i<num; i++)
    {
        if (num%i==0)
        {
            somatorio=somatorio+i;
        }


    }
    if (somatorio==num)
    {
        return(1);
    }
    else
    {
        return(0);
    }




}



int soma_digitos(int num)
{
    int aux,somatorio=0;
    aux=num;

    while(aux>0)
    {
        somatorio=aux + (num %10);
        aux= aux/10;



    }

    return (somatorio);
}




int verifica_primo(int num)
{
    int i,contador=0;
    for (i=2; i<num; i++)
    {
        if (num%i==0)
        {
            contador=1;
        }

    }
    return(contador);


}


void geraEImprimeTabuada(int num)
{
    int i;
    printf("\n\n===TABUADA DE %d===\n",num);
    for (i=0; i<=10; i++)
    {
        printf("%d * %d = %d\n",num,i, (num*i));

    }



}

int verificaFrequencia(int vet[],int tamanho)
{
    int i,j,contador=0,numeroaux,atual=0,numero;
    for (i=0; i<tamanho; i++)
    {

        for (j=0; j<i; j++)
        {
            if (vet[i]==vet[j])
            {
                contador++;
                numeroaux=vet[i];
            }


        }
        if (contador>atual)
        {
            atual=contador;
            numero=numeroaux;
        }
        contador=0;


    }
    return(numero);



}

int verificaFrequenciaFloat(float vet[],int tamanho)
{
    float numeroaux,numero;
    int i,j,contador=0,atual=0;
    for (i=0; i<tamanho; i++)
    {

        for (j=0; j<i; j++)
        {
            if (vet[i]==vet[j])
            {
                contador++;
                numeroaux=vet[i];
            }


        }
        if (contador>atual)
        {
            atual=contador;
            numero=numeroaux;
        }
        contador=0;


    }
    return(numero);



}

void gerarVetorSemRepeticao(int vet[], int tamanho, int lim)
{
    int i,j,repete=0;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {

        do
        {
            repete=0;
            vet[i] =  rand()  % lim +1;

            for (j=0; j<i; j++)
            {
                if (vet[i]==vet[j])
                {
                    repete=1;

                }
            }

        }
        while(repete==1);

    }
}

int existeNoVetor(int vet[], int tamanho, int valor)
{

    int i,repete;

    repete=0;
    for (i=0; i<tamanho; i++)
    {


        if (valor==vet[i])
        {
            repete++;
        }


    }
    return(repete);




}


int verificaSubstring(char texto[],char sub[])
{

    char retorno = 0;
    int i=0, j;

    while(texto[i] != '\0') //percorre a string
    {
        if(texto[i] == sub[0])//se o primeiro caractere da substring é igual ao conteúdo da string no indice i, então começar a
        {
            //percorrer as duas simultaneamente
            j=0;
            while(sub[j] != '\0' && texto[i] != '\0') //para garantir não passar do final da string ou da substring
            {
                if(texto[i] != sub[j]) //se encontrado caractere diferente, sair do while
                {
                    break;
                }
                i++;
                j++;
            }
            if(sub[j] == '\0') //se chegou até o final da substring, a substring faz parte da string
            {
                retorno = 1;
            }
        }
        i++;
    }
    return(retorno);
}








void invertestring(char texto[],int tamanho)
{
    char inversa[tamanho];
    int i,aux;
    aux=tamanho;
    for (i=0; i<=tamanho; i++)
    {
        inversa[i]=texto[aux];
        aux--;
    }

    printf("String inversa: %s\n",inversa);

}




void transformaMinusculo(char texto[], int tamanho)
{
    char minuscula[tamanho];
    int i;

    for (i=0; i<=tamanho; i++)
    {


        if (texto[i]>='A' && texto[i]<='Z')
        {
            minuscula[i]= (texto[i])+32;
        }
        else
        {
            minuscula[i]=texto[i];
        }
    }

    printf("String minuscula: %s\n",minuscula);




}




void juntaString(char texto1[], char texto2[],int tamanho1, int tamanho2)
{
    char uniao[tamanho1+tamanho2];
    int i=0,j=0;

    while(texto1[i] != '\0')
    {
        uniao[i]=texto1[i];
        i++;

    }

    uniao[i+1]=' ';

    while(texto2[j] != '\0')
    {
        uniao[i+j+1]=texto2[j];
        j++;

    }
    printf("\n%s\n",uniao);
}


int contaPalavras(char texto[])
{
    int cont=0;

    int i=0;
    if(texto[0] != ' ')
    {
        cont++;
    }
    while(texto[i] != '\0')
    {
        if(texto[i] == ' ' && texto[i+1] != ' ' && texto[i+1] != '\0')
        {
            cont++;
        }
        i++;
    }
    return(cont);

}

void primeiroCaractere(char texto[])
{



    printf("\nPrimeiro caracatere de cada palavra:\n");

    int i=0,cont=0;
    char str[100];
    while(texto[i]!='\0')
    {
        if (i==0 || (texto[i]!=' ' && texto[i-1]== ' '))
        {
            str[cont]=texto[i];
            printf("%c   ",texto[i]);
            cont++;
        }
        i++;


    }




}


void ultimoCaractere(char texto[])
{



    printf("\nUltimo caracatere de cada palavra:\n");

    int i=0,cont=0;
    char str[100];
    while(texto[i]!='\0')
    {
        if (texto[i]!=' ' && (texto[i+1]== ' ' || texto[i+1]=='\0'))
        {
            str[cont]=texto[i];
            printf("%c   ",texto[i]);
            cont++;
        }
        i++;


    }




}

void primeiraPalavra(char texto[])
{

    char palavra[100];
    int validar=1;

    printf("\nPrimeira palavra:\n");
    int i=0;



    while(validar==1)
    {

        palavra[i]=texto[i];

        if (texto[i]!= ' ' && texto[i+1]==' ')
        {
            validar=0;
        }


        i++;

    }



    palavra[i]='\0';

    printf("%s\n",palavra);



}

void retornaDivisoresDeUmVetor(int vetor[], int tamanho)
{
    printf("\n\n===Vetor B===\n");
    int i,div=0,j,vetor2[tamanho];
    for (i=0; i<tamanho; i++)
    {
        div=0;
        for (j=1; j<=vetor[i]; j++)
        {
            if (vetor[i]%j==0)
            {
                div++;
            }

        }
        vetor2[i]=div;
        printf("%d   ",vetor2[i]);
    }



}




int retornaMenor(int vetor[],int tamanho)
{
    int i,menor;

    for (i=0; i<tamanho;i++)
    {
        if (i==0)
        {
            menor=vetor[i];
        }
        if (vetor[i]<=menor)
        {
            menor=vetor[i];
        }
    }
    return(menor);





}
int retornaMaior(int vetor[],int tamanho)
{
    int i,maior;

    for (i=0; i<tamanho;i++)
    {
        if (i==0)
        {
            maior=vetor[i];
        }
        if (vetor[i]>=maior)
        {
            maior=vetor[i];
        }
    }
    return(maior);
}

int retornaParesDeUmVetor(int ord[], int tamanho)
{
    int k,cont=0,ultimo;
    ultimo=ord[0];
    for (k=0; k<tamanho; k++)
            {

                if (ord[k]%2==0 && (ord[k]!=ultimo || k==0))
                {
    cont++;
    ultimo=ord[k];
                }

}
return(cont);
}

int retornaImparesDeUmVetor(int ord[], int tamanho)
{
    int k,cont=0,ultimo;
    ultimo=ord[0];
    for (k=0; k<tamanho; k++)
            {

                if (ord[k]%2!=0 && (ord[k]!=ultimo || k==0))
                {
    cont++;
    ultimo=ord[k];
                }

}
return(cont);
}

int repeteDentroDeFuncao(int num, int vet[],int tamanho)
{
    int i,cont=0;
    for (i=0;i<tamanho; i++)
    {
        if (num==vet[i])
        {
            cont++;
        }


    }
    return(cont);


}



