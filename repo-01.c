#include <stdio.h>

int main() {
    char first_four[4];
    printf("Favor inserir o seu nome: ");
    scanf("%4s", first_four);
    printf("As quatro primeiras letras do nome são: %c %c %c %c\n",
            first_four[0], first_four[1], first_four[2], first_four[3]);
    return 0;
}

