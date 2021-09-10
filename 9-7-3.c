
/*3) Elabore um programa que leia o dia e o mês de nascimento de uma pessoa e determine o seu signo conforme a
tabela a seguir:*/
#include <stdio.h>
    int main(void)
    {
    int dia,mes;

    printf("Informe o dia do seu nascimento: ");
    scanf("%d",&dia);
    printf("Informe o mes do seu nascimento: ");
    scanf("%d",&mes);

    if (((dia>=22 && dia<=31)&&mes==12) || ((dia<=20)&& dia>=1)&& mes==1)
    {
        printf("Capricornio\n");
    }
    if (((dia>=21 && dia<=31)&&mes==1) || ((dia<=19)&& dia>=1)&& mes==2)
    {
        printf("Aquario\n");
    }
    if (((dia>=20 && dia<=28)&&mes==2) || ((dia<=20)&& dia>=1)&& mes==3)
    {
        printf("Peixes\n");
    }
    if (((dia>=21 && dia<=31)&&mes==3) || ((dia<=20)&& dia>=1)&& mes==4)
    {
        printf("Aries\n");
    }
     if (((dia>=21 && dia<=30)&&mes==4) || ((dia<=20)&& dia>=1)&& mes==5)
    {
        printf("Touros\n");
    }
    if (((dia>=21 && dia<=31)&&mes==5) || ((dia<=20)&& dia>=1)&& mes==6)
    {
        printf("Gemeos\n");
    }
    if (((dia>=21 && dia<=30)&&mes==6) || ((dia<=21)&& dia>=1)&& mes==7)
    {
        printf("Cancer\n");
    }
    if (((dia>=22 && dia<=31)&&mes==7) || ((dia<=22)&& dia>=1)&& mes==8)
    {
        printf("Leao\n");
    }
    if (((dia>=23 && dia<=31)&&mes==8) || ((dia<=22)&& dia>=1)&& mes==9)
    {
        printf("Virgem\n");
    }
    if (((dia>=23 && dia<=30)&&mes==9) || ((dia<=22)&& dia>=1)&& mes==10)
    {
        printf("Libra\n");
    }
    if (((dia>=23 && dia<=31)&&mes==10) || ((dia<=21)&& dia>=1)&& mes==11)
    {
        printf("Escorpiao\n");
    }
    if (((dia>=22 && dia<=30)&&mes==11) || ((dia<=21)&& dia>=1)&& mes==12)
    {
        printf("Sagitario\n");
    }
    return 0;
    }
