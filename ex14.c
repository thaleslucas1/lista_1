#include <stdio.h>
int main(){
    int dias;
    printf("Dias trabalhados: ");
    scanf("%d", &dias);
    if(dias <= 10) {
        float valor_bruto = dias * 50.25;
        printf("Valor a ser pago: R$%.2f\n", valor_bruto - valor_bruto * 0.1);
    }
    else if(10 < dias <= 20) {
        float valor_bruto = dias * 50.25 + dias * 50.25 * 0.25;
        printf("Valor a ser pago: R$%.2f\n", valor_bruto - valor_bruto * 0.1);
    }
    else{
        float valor_bruto = dias * 50.25 + dias * 50.25 * 0.3;
        printf("Valor a ser pago: R$%.2f\n", valor_bruto - valor_bruto * 0.1 );
    }
    return 0;
}