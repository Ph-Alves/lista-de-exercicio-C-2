#include <stdio.h>

void minimax(float v[], int n, float *a, float *b) {
    if (n <= 0) {
        printf("Vetor vazio.\n");
        return;
    }

    *a = *b = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < *a) {
            *a = v[i]; // Atualiza o valor mínimo
        }
        if (v[i] > *b) {
            *b = v[i]; // Atualiza o valor máximo
        }
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 1;
    }

    float vetor[tamanho];

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    float min, max;

    minimax(vetor, tamanho, &min, &max);

    printf("Valor minimo: %.2f\n", min);
    printf("Valor maximo: %.2f\n", max);

    return 0;
}