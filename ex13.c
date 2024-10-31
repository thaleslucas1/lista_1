#include <stdio.h>
int main(){
    float C, F;
    printf("Temperatura em Celsius: ");
    scanf("%f", &C);
    F = (9 * C + 160) / 5;
    printf("Temperatura em fahrenheit: %.1f°F\n", F);
    return 0;
}