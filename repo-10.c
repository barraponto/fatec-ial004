#include <stdio.h>

int main() {
    int number;

    printf("Insira um número: ");
    scanf("%d", &number);

    if (number % 2) {
        printf("A metade de %d é %.1f.", number, number/2.0);
    } else {
        printf("A metade de %d é %d.", number, number/2);
    }

    return 0;
}

