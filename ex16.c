#include <stdio.h>
int main(){
    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    int modulo = x > 0? printf("valor absoluto: %d\n", x): printf("valor absoluto: %d\n", x * -1);
    return 0;
}