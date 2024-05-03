#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int compararPorNome(const void *a, const void *b) {
    const struct Pessoa *p1 = (const struct Pessoa *)a;
    const struct Pessoa *p2 = (const struct Pessoa *)b;
    return strcmp(p1->nome, p2->nome);
}

int compararPorIdade(const void *a, const void *b) {
    const struct Pessoa *p1 = (const struct Pessoa *)a;
    const struct Pessoa *p2 = (const struct Pessoa *)b;
    return p1->idade - p2->idade;
}

int compararPorAltura(const void *a, const void *b) {
    const struct Pessoa *p1 = (const struct Pessoa *)a;
    const struct Pessoa *p2 = (const struct Pessoa *)b;
    return p1->altura < p2->altura ? -1 : (p1->altura > p2->altura ? 1 : 0);
}

int main() {
    int n;
    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);
    getchar();

    struct Pessoa *pessoas = malloc(n * sizeof(struct Pessoa));
    if (pessoas == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].altura);
        getchar(); // Limpa o buffer do teclado
    }

    printf("\nOrdenado por nome:\n");
    qsort(pessoas, n, sizeof(struct Pessoa), compararPorNome);
    for (int i = 0; i < n; i++) {
        printf("%s\n", pessoas[i].nome);
    }

    printf("\nOrdenado por idade:\n");
    qsort(pessoas, n, sizeof(struct Pessoa), compararPorIdade);
    for (int i = 0; i < n; i++) {
        printf("%s - %d\n", pessoas[i].nome, pessoas[i].idade);
    }

    printf("\nOrdenado por altura:\n");
    qsort(pessoas, n, sizeof(struct Pessoa), compararPorAltura);
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f\n", pessoas[i].nome, pessoas[i].altura);
    }

    free(pessoas);

    return 0;
}

