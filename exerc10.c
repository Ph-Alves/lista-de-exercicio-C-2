#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strsub(const char *s, int i) {
    int tamanho = strlen(s);
    
    if (i < 0 || i >= tamanho) {
        return NULL;
    }

    int numCaracteres = tamanho - i;

    char *sub = (char *)malloc((numCaracteres + 1) * sizeof(char));
    if (sub == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(EXIT_FAILURE);
    }

    strncpy(sub, s + i, numCaracteres);
    sub[numCaracteres] = '\0';

    return sub;
}

int main() {
    char s[100];
    int i;

    printf("Digite uma string: ");
    scanf("%s", s);

    printf("Digite a posicao inicial: ");
    scanf("%d", &i);

    char *substring = strsub(s, i);

    if (substring != NULL) {
        printf("Substring: %s\n", substring);
        free(substring);
    } else {
        printf("Erro: Posicao inicial invalida.\n");
    }

    return 0;
}