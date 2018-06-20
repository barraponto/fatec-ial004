#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "util.h"

int main() {
    char name[128] = {0};

    printf("Favor inserir o seu nome: ");
    fgets(name, 128, stdin);
    trim_newlines(name);

    int count = 0;
    for (int i = 0; i < strlen(name); i++) {
        if ((name[i] == 'a') || (name[i] == 'A')) {
            count++;
        }
    }

    printf("O seu nome tem %d letras 'A'.", count);

    return 0;
}

