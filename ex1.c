#include <stdio.h>
int main(){
    int x;
    printf("Entre com um valor: ");
    scanf("%d", &x);
    printf("Hexadecimal: %x\nOctal: %o\n", x, x);
    return 0;
}