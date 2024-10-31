#include <stdio.h>
int main(){
    float conta, valor_total;
    printf("Qual o valor da conta? ");
    scanf("%f", &conta);
    printf("Valor total: R$ %.2f\n", conta + (conta * 0.1));
    return 0;
}