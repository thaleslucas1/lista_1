#include <stdio.h>
int main(){
    float altura;
    int sexo;
    printf("Altura (em metros): ");
    scanf("%f", &altura);
    printf("Sexo (0 para feminino ou 1 para masculino); ");
    scanf("%d", &sexo);
    float peso_ideal = sexo? 72.7 * altura - 58 : 62.1 * altura - 44.7;
    printf("Seu peso ideal é: %.2f\n", peso_ideal);
    return 0;
}