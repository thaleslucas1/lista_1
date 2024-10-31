#include <stdio.h>
int main(){
    int num, x, y, z;
    printf("Escreva um inteiro de 3 dígitos: ");
    scanf("%d", &num);
    x = num / 100;
    y = (num / 10) % 10;
    z = num % 10;
    printf("O número agora é: %d\n", z * 100 + y * 10 + x);
    return 0;
}