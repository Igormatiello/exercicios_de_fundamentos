
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "");
    printf("ACENTUAÇÃO\n\n");
      printf("Acentua%c%co\n",135,198);
    return 0;
}
