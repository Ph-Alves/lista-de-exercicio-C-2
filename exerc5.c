#include <stdio.h>

size_t strlen(const char *s) {
    const char *ptr = s;

    while (*ptr != '\0') {
        ptr++;
    }

    return ptr - s;
}

int main() {
    char palavra[60];

    printf("Digite uma palavra: ");
    gets(palavra);
    size_t comprimento = strlen(palavra);

    printf("Comprimento da string: %zu\n", comprimento);

    return 0;
}