#include <stdio.h>
int main(){
    int x, y;
    printf("Escreva um valor inteiro: ");
    scanf("%d", &x);
    printf("Escreva outro valor inteiro: ");
    scanf("%d", &y);
    int multiplo = x % y ? puts("O primeiro não é multiplo do segundo!") : 
    puts("O primeiro é multiplo do segundo!");
    return 0;
}