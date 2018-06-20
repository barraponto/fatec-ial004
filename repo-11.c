#include <stdio.h>

int main() {
    int total = 0;
    int number;

    do {
        printf("Insira um número para somar ao total: ");
        scanf("%d", &number);
        if ( number > 0 ) { total += number; }
    } while (number > 0);

    printf("Total: %d", total);

    return 0;
}

