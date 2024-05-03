#include <stdio.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

void preencherLivro(struct Livro *livro) {
    printf("Digite o titulo do livro: ");
    scanf("%99[^\n]", livro->titulo);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o autor do livro: ");
    scanf("%99[^\n]", livro->autor);
    getchar();

    printf("Digite o ano de publicacao do livro: ");
    scanf("%d", &livro->anoPublicacao);
}

int main() {
    struct Livro livro;

    preencherLivro(&livro);

    printf("\nDados do livro:\n");
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de publicacao: %d\n", livro.anoPublicacao);

    return 0;
}
