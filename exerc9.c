#include <stdio.h>

char *strchr(const char *s, int c) {
    while (*s != '\0' && *s != c) {
        s++;
    }
    return (*s == c) ? (char *)s : NULL;
}

int main() {
    char s[100];
    char c; 

    printf("Digite uma string: ");
    scanf("%s", s);
    printf("Digite um caractere a ser procurado: ");
    scanf(" %c", &c);

    char *resultado = strchr(s, c);

    if (resultado != NULL) {
        printf("O caractere '%c' foi encontrado na posicao %ld da string.\n", c, resultado - s);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", c);
    }

    return 0;
}