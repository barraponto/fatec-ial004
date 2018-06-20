#include <stdio.h>

int main() {
    float wage;
    float hours;
    float taxes;

    printf("Insira o valor da hora-aula, em reais: ");
    scanf("%f", &wage);

    printf("Insira a quantidade de horas: ");
    scanf("%f", &hours);

    printf("Insira o desconto do INSS, em %%: ");
    scanf("%f", &taxes);

    printf("O salário final é de R$ %.2f.", wage*hours*(1-taxes/100));

    return 0;
}

