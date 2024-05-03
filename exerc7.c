#include <stdio.h>

void CRONO(int segundos) {
    printf("Contagem regressiva iniciada:\n");
    
    for (int i = segundos; i > 0; i--) {
        printf("%d\n", i);
        for (int j = 0; j < 1000000000; j++) {
        }
    }
    printf("Campainha!\a\n");
}

int main() {
    int segundos;

    printf("Digite o numero de segundos para o cronometro: ");
    scanf("%d", &segundos);

    CRONO(segundos);

    return 0;
}