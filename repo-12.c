#include <stdio.h>

int main() {
    float value;
    float price;

    printf("Insira o valor do produto, em reais: ");
    scanf("%f", &value);

    price = (value < 20) ? 1.45*value : 1.3*value;

    printf("O preço do produto é R$ %.2f", price);

    return 0;
}

