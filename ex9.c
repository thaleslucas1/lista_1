#include <stdio.h>
int main(){
    float volume, comprimento, largura, altura;
    printf("Comprimento: ");
    scanf("%f", &comprimento);
    printf("Largura: ");
    scanf("%f", &largura);
    printf("Altura: ");
    scanf("%f", &altura);
    volume = comprimento * largura * altura;
    printf("Volume: %.2f m^3\n", volume);
    return 0;
}