#include <stdio.h>
#include <ctype.h>

int main() {
    char model;
    float distance;
    float total;

    do {
        printf("Insira o modelo do carro (A, B, C): ");
        scanf("%c", &model);
        model = toupper(model);
    } while ((model != 'A') && (model != 'B') && (model != 'C'));

    printf("Insira a distância percorrida, em km: ");
    scanf("%f", &distance);

    switch (model) {
        case 'A':
            total = distance / 8;
            break;
        case 'B':
            total = distance / 9;
            break;
        case 'C':
            total = distance / 12;
            break;
    }

    printf("Essa viagem gastou %.2f litros de combustível.", total);

    return 0;
}

