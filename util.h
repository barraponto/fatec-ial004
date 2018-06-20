#include <string.h>

void trim_newlines(char *string) {
    if (strlen(string) && (string[strlen(string)-1] == '\n')) {
        string[strlen(string) - 1] = '\0';
    }
}
