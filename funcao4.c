#include <stdio.h>
int main(int argc, char *argv[])
{
if(argc < 2)
{
printf("Voce esqueceu de digitar seu nome!\n");
}
printf("Ola %s", argv[1]);
return 0;
}
