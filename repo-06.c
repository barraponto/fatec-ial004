#include <stdio.h>
#include <ctype.h>
#include "util.h"

int main() {
    char name[128] = {0};
    char gender;
    int age;

    printf("Favor inserir o seu nome: ");
    fgets(name, 128, stdin);
    trim_newlines(name);

    printf("Favor inserir o seu gênero (M/F/*): ");
    scanf("%c", &gender);

    printf("Favor inserir a sua idade: ");
    scanf("%d", &age);

    printf("\n");

    if ((toupper(gender) == 'F') && (age < 25)) {
        printf("ACEITA\n");
    } else {
        printf("NÃO ACEITA\n");
    }

    return 0;
}

