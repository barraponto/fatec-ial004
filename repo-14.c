#include <stdio.h>
#include <stdlib.h>

const int NUMBERS_LENGTH = 3;

int compare_integers(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int numbers[NUMBERS_LENGTH];

    for (int i = 0; i<NUMBERS_LENGTH; i++) {
        printf("Insira um número para ordenação (%d/%d): ", i+1, NUMBERS_LENGTH);
        scanf("%d", &numbers[i]);
        printf("\n");
    }

    qsort(numbers, NUMBERS_LENGTH, sizeof(int), compare_integers);

    printf("Os números ordenados são [");
    for (int i = 0; i < NUMBERS_LENGTH; i++) {
        printf("%d", numbers[i]);
        if (i != NUMBERS_LENGTH-1) {
            printf(" ");
        }
    }
    printf("].\n");


    return 0;
}

