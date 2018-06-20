#include <stdio.h>

int main() {
    char name[128] = {0};
    printf("Favor inserir o seu nome: ");
    scanf("%s", name);

    for (int i = 0; i < 10; i++) {
        printf("%s\n", name);
    }

    return 0;
}

