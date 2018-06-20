#include <stdio.h>
#include "util.h"

int main() {
    char name[128] = {0};
    char address[256] = {0};
    char phone[64] = {0};

    printf("Favor inserir o seu nome: ");
    fgets(name, 128, stdin);
    trim_newlines(name);

    printf("Favor inserir o seu endereço: ");
    fgets(address, 256, stdin);
    trim_newlines(address);

    printf("Favor inserir o seu telefone: ");
    fgets(phone, 64, stdin);
    trim_newlines(phone);

    printf("\n");

    printf("%s\n", name);
    printf("%s\n", address);
    printf("%s\n", phone);

    return 0;
}

