#include <stdio.h>
int main(){
    double pi = 3.14159;
    float raio;
    printf("Raio: ");
    scanf("%f", &raio);
    printf("Diâmetro: %.2f\nCircunferência: %.2f\nArea: %.2f\n", 2*raio, 2*pi*raio, pi*raio*raio);
    return 0;
}