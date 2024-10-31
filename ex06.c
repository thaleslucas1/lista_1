#include <stdio.h>
int main(){
    int horas, minutos, segundos;
    printf("Horas: ");
    scanf("%d", &horas);
    printf("Minutos: ");
    scanf("%d", &minutos);
    printf("Segundos: ");
    scanf("%d", &segundos);
    segundos += horas * 3600 + minutos * 60;
    printf("Total de segundos: %d segundos\n", segundos);
    return 0;
}