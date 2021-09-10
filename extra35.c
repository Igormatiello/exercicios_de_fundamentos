 /*Ler um número inteiro longo (long int) que representa os segundos e convertê-lo para horas, minutos e
segundos. Mostrar a quantidade de horas, minutos e segundos obtidos, no seguinte formato:
xhoras:yminutos:zsegundos.*/


int main(void)
{
    long int tempo;
    int horas, minutos, resto, resto1;

    printf("Informe a quantidade de segundos: \n");
    scanf("%li",&tempo);
    horas= (int)tempo/3600;
    resto= (int)tempo % 3600;
    minutos= (int)resto/60;
    resto1= (int)resto % 60;
    printf("%.0d hora: %.0d minuto: %.0d segundo", horas, minutos, resto1);


    return 0;
}
