#include <stdio.h>

int main() {
    char name[128] = {0};
    printf("Favor inserir o seu nome: ");
    scanf("%s", name);

    printf("As letras em posições ímpares são: ");
    int i =0;
    while (name[i]) {
        if (i % 2 == 1) {
            printf("%c ", name[i]);
        }
        i++;
    }
    printf("\n");

    return 0;
}

