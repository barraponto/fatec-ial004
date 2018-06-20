#include <stdio.h>

int main() {
    int value;

    printf("Insira um valor para reajustar em 10%%: ");
    scanf("%d", &value);
    printf("%.2f", 1.1 * value);

    return 0;
}

