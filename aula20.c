#include <stdio.h>

int main(void)
{
    int i, fat=1,num;
    printf("Informe um numero: ");
    scanf("%d",&num);

    printf("%d! = ",num);
    for (i=num; i>=2; i--)
    {
        printf("%d * ",i);
        fat= fat *i;
    }
    printf("1 = %d\n",fat);

    return 0;
}
