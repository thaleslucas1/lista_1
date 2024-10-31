#include <stdio.h>
int main(){
    int x;
    printf("Escreva um número inteiro: ");
    scanf("%d", &x);
    int paridade = x % 2? puts("É impar!!!!") : puts("É par!!!!");
    return 0;
}