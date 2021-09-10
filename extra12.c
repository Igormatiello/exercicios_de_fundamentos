 /*Calcule e mostre a média de idade de três pessoas*/

 #include <stdio.h>
int main(void)
{
    float id1, id2, id3, media;

    printf("Idade do primeiro: ");
    scanf("%f", &id1);
    printf("Idade do segundo: ");
    scanf("%f", &id2);
    printf("Idade do terceiro: ");
    scanf("%f", &id3);
    media= (id1+id2+id3)/3;


    printf("Idade media:%.1f\n",media);
    return 0;
}
