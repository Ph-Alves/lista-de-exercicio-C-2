#include <stdio.h>
#include <stdlib.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

void preencherTabelaLivros(struct Livro *tabela, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite os dados do livro %d:\n", i + 1);
        printf("Titulo: ");
        scanf("%99[^\n]", (tabela + i)->titulo);
        getchar();

        printf("Autor: ");
        scanf("%99[^\n]", (tabela + i)->autor);
        getchar();

        printf("Ano de publicacao: ");
        scanf("%d", &(tabela + i)->anoPublicacao);
        getchar();
    }
}

void exibirTabelaLivros(struct Livro *tabela, int tamanho) {
    printf("\nTabela de Livros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Titulo: %s\n", (tabela + i)->titulo);
        printf("Autor: %s\n", (tabela + i)->autor);
        printf("Ano de publicacao: %d\n", (tabela + i)->anoPublicacao);
    }
}

int main() {
    int tamanho;
    printf("Digite o numero de livros na tabela: ");
    scanf("%d", &tamanho);
    getchar();

    struct Livro *tabela = malloc(tamanho * sizeof(struct Livro));
    if (tabela == NULL) {
        printf("Erro de alocação de memoria.\n");
        return 1;
    }

    preencherTabelaLivros(tabela, tamanho);
    exibirTabelaLivros(tabela, tamanho);

    free(tabela);

    return 0;
}
