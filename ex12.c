#include <stdio.h>
int main(){
    int a, b;
    printf("valor 1: ");
    scanf("%d", &a);
    printf("valor 2: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("agora o valor 1 = %d\nagora o valor 2 = %d\n", a, b);
    return 0;
}