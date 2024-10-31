#include <stdio.h>
int main(){
    float valor, cotação_dolar;
    printf("Valor em R$ ");
    scanf("%f", &valor);
    printf("Cotação do dolar: ");
    scanf("%f", &cotação_dolar);
    printf("Valor em dolar: US$ %.2f\n", valor / cotação_dolar);
    return 0;
}