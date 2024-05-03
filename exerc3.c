#include <stdio.h>

void carrega(float *v, int n) {
    printf("Digite %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", v + i); 
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

    carrega(vetor, tamanho);

    printf("Valores carregados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}