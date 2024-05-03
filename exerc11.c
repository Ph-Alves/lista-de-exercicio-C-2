#include <stdio.h>

void monet(double v, char resultado[]) {
    int reais = (int)v;
    int centavos = (int)((v - reais) * 100);
    sprintf(resultado, "R$ %d.%02d", reais, centavos);
}

int main() {
    double valor;
    char resultado[20];

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    monet(valor, resultado);

    printf("Valor monetario: %s\n", resultado);

    return 0;
}