#include <stdio.h>
#include <math.h>
int main(){
    float n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Soma: %.2f\nproduto: %.2f\ndiferença: %.2f\nquociente: %.2f\nresto: %.2f\n",
    n1 + n2, n1 * n2, n1 - n2, n1 / n2, fmod(n1, n2));
    return 0;
}