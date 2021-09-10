#include <stdio.h>
#include <stdlib.h>//biblioteca necessária para rand()e RAND_MAX
#include <time.h>
int main(void)
{
int x;
srand(time(NULL));
//Gerando valores aleatórios entre 0 e RAND_MAX
x = rand();
printf("%d\n", x);
return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int x;
srand(time(NULL));
//Gerando valores aleatórios entre 0 e 10
x = rand() % (10 + 1);
printf("%d\n", x);
return 0;
}
• rand() % 11 gera valores aleatórios de 0 a 10.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int x;
srand(time(NULL));
//Gerando valores aleatórios entre 1 e 10
x = rand() % 10 + 1;
printf("%d\n", x);
return 0;
}
• rand() % 10 gera valores aleatórios de 0 a 9.
• Como a função rand() tem como valores limites o 0 e o 9, basta somar 1
para alcançar a faixa desejada (1 a 10)



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int x, i;
srand(time(NULL));
//Para gerar valores entre 5 e 15
x = rand() % (10 + 1) + 5;
printf("%d\t", x);
return 0;
}
• rand() % (10 + 1) da fórmula gera valores de 0 a 10.
• Como a função rand() tem como valores limites o 0 e o 10, basta somar 5
para alcançar a faixa




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int x;
srand(time(NULL));
//Para gerar valores entre 1 e -1
x = rand() % 3 - 1;
printf("%d\n", x);
return 0;
}
• rand() % 3 gera valores de 0 a 2.
• Subtraindo 1, gera valores na faixa entre -1 e 1



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
float x;
srand(time(NULL));
x = (float)(rand()) / RAND_MAX;
printf("%.1f\n", x);
return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int x, limPositivo=5, limNegativo=5;
srand(time(NULL));
x = rand() % (limPositivo + limNegativo + 1) - limNegativo;
printf("%d\n", x);
return 0;
}
