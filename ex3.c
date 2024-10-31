#include <stdio.h>
int main(){
    float x;
    printf("Escreva um valor: ");
    scanf("%f", &x);
    printf("Triplo: %.2f\nquadrado: %.2f\n meio: %.2f\n", x*3, x*x, x/2); 
    return 0;
}