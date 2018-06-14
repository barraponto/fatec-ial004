#include <stdio.h>
#include <string.h>

int main() {
    char name[128] = {0};
    printf("Favor inserir o seu nome: ");
    scanf("%s", name);

    printf("As letras em posições pares são: ");
    for (int i = 0; i < strlen(name); i++) {
        if (i % 2 == 0) {
            printf("%c ", name[i]);
        }
    }
    printf("\n");

    return 0;
}

