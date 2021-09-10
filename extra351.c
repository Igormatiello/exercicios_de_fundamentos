 /*Ler um número inteiro longo (long int) que representa os segundos e convertê-lo para horas, minutos e
segundos. Mostrar a quantidade de horas, minutos e segundos obtidos, no seguinte formato:
xhoras:yminutos:zsegundos.*/


int main(void)
{
    long int tempo, horas, minutos, resto, resto1;

    printf("Informe a quantidade de segundos: \n");
    scanf("%li",&tempo);
    horas= tempo/3600;
    resto= tempo % 3600;
    minutos= resto/60;
    resto1= resto % 60;
    printf("%.0li hora: %.0li minuto: %.0li segundo", horas, minutos, resto1);


    return 0;
}
