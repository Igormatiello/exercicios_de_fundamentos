#include <stdio.h>
int main(void)
{
printf("TAMANHO EM BYTES\n");
printf("int: %d bytes\n", sizeof(int));
printf("float: %d bytes\n", sizeof(float));
printf("double: %d bytes\n", sizeof(double));
printf("char: %d byte\n", sizeof(char));
printf("\nMODIFICADORES DE tipo\n");
printf("short int: %d bytes\n", sizeof(short int));
printf("long int: %d bytes\n", sizeof(long int));
printf("long long int: %d bytes\n", sizeof(long long int));
printf("long double: %d bytes\n", sizeof(long double));
printf("signed char: %d byte\n", sizeof(signed char));
printf("unsigned char: %d byte\n", sizeof(unsigned char));
printf("signed int: %d bytes\n", sizeof(signed int));
printf("unsigned int: %d bytes\n", sizeof(unsigned int));
return 0;
}
