#include <stdio.h>
int main(){
    int x;
    printf("Escreva um valor inteiro: ");
    scanf("%d", &x);
    printf("valor: %d\nantecessor: %d\nsucessor: %d\n", x, x-1, x+1);
    return 0;
}