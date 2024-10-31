#include <stdio.h>
int main(){
    float valor_hora_aula, perc_deconto_INSS;
    int horas_mensais;
    printf("Valor da hora aula: ");
    scanf("%f", &valor_hora_aula);
    printf("Horas trabalhadas no mês: ");
    scanf("%d", &horas_mensais);
    printf("Percentual de desconto do INSS: ");
    scanf("%f", &perc_deconto_INSS);
    float s_bruto = valor_hora_aula * horas_mensais;
    printf("Salário bruto: R$%.2f\n", s_bruto);
    printf("Salário líquido: R$%.2f\n", s_bruto - s_bruto * (perc_deconto_INSS / 100));
    return 0;
}